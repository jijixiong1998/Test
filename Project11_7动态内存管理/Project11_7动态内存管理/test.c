#define _CRT_SECURE_NO_WARNINGS 1
//动态内存管理
//动态内存函数：  malloc  realloc calloc  free
#include <stdio.h>
#include <stdlib.h>

//5.柔性数组（flexible array）：
//C99中，结构中的最后一个元素允许时未知大小的数组，这就叫做柔性数组成员
/**
typedef struct st_type{
	int i;
	int a[0];//柔性数组成员
}type_a;

//或者和如下：
typedef struct st_type{
	int i;
	char a[];//柔性数组成员
}type_a;
*/

		/**
		柔性数组的特点：
		（1）结构中的柔性数组成员前面必须至少有一个其它成员；
		（2）sizeof返回的这种结构大小不包括柔性数组的内存；
		（3）包含柔性数组成员的结构用malloc() 函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。
		*/
//typedef struct st_type{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//int main(){
//	printf("%d\n", sizeof(type_a));	   //输出4
//	return 0;
//}

//柔性数组的使用
//（1）代码1
//typedef struct st_type{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//int main(){
//	int  i = 0;
//	type_a *p = (type_a *)malloc(sizeof(type_a)+100 * sizeof(int));
//
//	//业务处理
//	p->i = 100;
//	for (i = 0; i < 100;i++){
//		p->a[i] = i;
//	}	 //这样柔性数组成员a，相当于获得了100个整型元素的连续空间
//	free(p);
//	return 0;
//}
//柔性数组的优势
//(2)代码2
//上述的type_a结构也可以设计为：
typedef  struct st_type{
	int i;
	int *p_a;
}type_a;
int main(){
	type_a *p = malloc(sizeof(type_a));
	p->i = 100;
	p->p_a = (int *)malloc(p->i * sizeof(int));

	//业务处理
	int i = 0;
	for (i = 0; i < 100;i++){
		p->p_a[i] = i;
	}

	//释放空间
	free(p->p_a);
	p->p_a = NULL;
	frere(p);
	p = NULL;
	return 0;
}
	/**
	 代码1和代码2可以完成同样的功能，但方法1实现由两个好处：
	 第一个好处是：方便内存释放：
			   如果将结构体的额内存及其成员所需要的内存一次性分配好，并返回给用户一个结构体指针，用户做一次free就可以把所有的额内存给释放掉。
			   代码2 ：在调用函数中，做了两次内存分配，并把整个结果固体返回给用户。需要做两次内存释放。
			           用户调用free可以释放结构体，但是用户并不知道这个结构体内的成员也需要free。
	 第二个好处是：有利于访问速度
	          连续的内存有益于提高访问速度，有益于减少内存碎片。

	*/


//4. C/C++程序内存分配的区域：
		/**
		(1)栈区（stack）:在执行函数时，函数内局部变量放入存储单元都可以在栈上创建，函数执行结束时这些存储单元自动被释放。
						 栈内存分配运算内置于处理器的指令集中，效率很高，但是分配的内存容量有限。
						 栈区主要存放运行函数而分配的局部变量、函数参数、返回数据、返回地址等。
		（2）堆区（heap）:  一般有程序员分配释放，若程序员不释放，程序结束时可能由OS回收。
		                   分配方式类似于链表。
		（3）数据段（静态区statoc）：存放全局变量、静态数据。程序结束后由系统释放。
		（4）代码段：存放函数体（类成员函数和全局函数）的二进制代码
		实际上普通的局部变量都是在栈区分配空间的，栈区的额特点是在上面创建的变量除了作用域就销毁。
		但是static修饰的变量存放在数据段（静态区），数据的特点是在上面创建的变量，知道程序结束才会销毁。
		
		*/

//3. 常见的动态内存错误
//(1)对NULL指针的解引用操作
//void test(){
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;
//	free(p);
//}

//(2)对动态开辟空间的越界访问
//void test(){
//	int i = 0;
//	int *p = (int *)malloc(10 * sizeof(int));
//	if (NULL == p){
//	
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10;i++){
//		*(p + i) = i;//当i= 10时越界访问
//	}
//	free(p);
//}

//(3)对非动态开辟内存使用free释放
//void test(){
//	int a = 10;
//	int *p = &a;
//	free(p);//会发生错误
//}

//(4)使用free释放一块动态开辟内存的一部分
//void test(){
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}

//(5)对同一块动态内存多次释放
//void test(){
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//重复释放
//}

//(6)动态开辟内存忘记释放(内存泄漏)
//void test(){
//	int *p = (int *)malloc(100);
//	if (NULL != p){
//		*p = 20;
//	}
//}
//int main(){
//
//	test();
//	while (1);
//	return 0;
//}

//2.动态内存函数：malloc 和free都声明在stdlib.h头文件中
//(1)malloc
		/**
		C语言提供了一个动态内存开辟函数：void * malloc (size_t size);

		此函数向内存申请一块连续可用的空间，并返回指向这块空间的指针
		   如果开辟成功，则返回一个指向开辟好空间的指针
		   如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查
		   返回值的类型是void*，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定的
		   如果参数size 为0，malloc的行为是标准是未定义的，取决于编译器
		
		*/
//(2)free
	  /**
	  C语言提供的函数free：专门用来做动态内存的释放和回收的。
	  函数原型：void free(void * ptr)
	  free 函数用来释放动态开辟的内存
	      如果函数 ptr 指向的空间不是动态开辟的额，那free函数的行为是未定义的
		  若果参数 ptr 是NULL指针，则函数什么事也不做  
	  
	  */
//int main(){
//
//	int num = 0;
//	scnaf("%d",&num);
//	//int arr[num] = { 0 };
//	int *ptr = NULL;
//	ptr = (int *)malloc(num * sizeof(int));
//	if (NULL != ptr){		  //判断ptr指针是否为空
//		int i = 0;
//		for (i = 0; i < num;i++){
//			*(ptr + i) = 0;		
//		}
//	}
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}
//(3) calloc
//
//C语言提供的calloc:	用来动态内存分配 ;可对申请的内存空间的内容进行初始化
//	/**
//	函数原型：void * calloc(size_t num,size_t size);
//	 函数的功能是为num个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0；
//	 与函数malloc的区别只在于calloc会在返回地址之前把申请的空间的每个字节初始化为0。
//	*/
//int main(){
//	int *p = calloc(10, sizeof(int));
//	if (NULL != p){
//	//使用空间
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//(4) realloc 
//	/**
//	realloc 函数的出现让动态内管理更加灵活；
//	realloc 函数可以对动态开辟内存大小进行调整；
//
//	函数原型：void * realloc(void* ptr,size_t size);
//	ptr是要调整的内存大小
//	size是调整之后新的大小
//	返回值为调整之后的内存起始位置；
//	此函数调整原内存大小的基础上，还会将原来内存中的数据移动到新的空间。
//	realloc 在调整内存空间时存在两种情况：
//		（1）原有空间之后又足够大的空间；
//		（2）原有空间之后没有足够大的空间。
//
//	当是情况（1）的时候，要扩展内存就直接在原有内存之后直接追加空间，原来空间的数据不发生变化。
//	当是情况（2）的时候，原有空间之后没有足够多的空间时，扩展的方法是：在堆空间上另找一个合适
//	大小的连续空间来使用，这样函数返回的是一个新的内存地址。
//	
//	*/
//
//int main(){
//	int *ptr = malloc(100);
//	if (ptr = NULL){
//	
//	//业务处理
//	}
//	else{
//		exit(EXIT_FAILURE);
//	}
//	//扩展容量
//	//代码1
//	ptr = realloc(ptr, 1000);
//
//	//代码2
//	int *p = NULL;
//	p = realloc(ptr, 1000);
//	if (p != NULL){
//		ptr = p;
//	}
//	//业务处理
//	free(ptr);
//	return 0;
//}
//1.动态内存分配
//内存开辟的方式：
int val = 20;	 //在栈空间上开辟4个字节
char arr[10] = { 0 };//在栈空间上开辟10个字节的连续空间
	/**
	   但是上述的开辟空间的方式有两个特点：
	   （1）空间开辟大小是固定的，
	   （2）数组在声明的时候，必须指定数组组的长度，它所需要的内存在编译时分配。

	但是对于空间的需求，不仅仅是上述的情况，有时候我们需要的空间大小在程序运行的时候才能知道，
	那数组的编译时开辟空间的方式就不能满足了。这时候只能试试动态内存开辟了。

	*/



