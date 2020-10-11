#define _CRT_SECURE_NO_WARNINGS 1
	//指针
#include <stdio.h>
//16.

//15.
//int my_strlen(const char *str){
//	return 0;
//}
//int main(){
//	int(*ps)(const char *) = &my_strlen;
//	return 0;
//}

//14. 函数指针：指向函数的指针
int Add(int x,int y){
	return x + y;
}
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*p)[10] = &arr;//取出数组的地址，p是数组指针

	//int (*pf)(int,int) = &Add; //pf是函数指针

	int(*pf)(int, int) = Add;

	int sum = (*pf)(2, 3);
	printf("%d\n", sum);
	//sum = Add(2, 3);

	sum = pf(2, 3);
	printf("%d\n",sum);

	//函数指针的问题：是一个指向函数的指针——存放函数的地址
	//函数名是函数的地址
	//&函数名也是函数的地址
	//printf("%p\n", &Add);		  //006211E0
	//printf("%p\n",Add);			  //006211E0

	
	return 0;
}

//13.
//void test(int **p){}
//int main(){
//	int *p1;
//	int **ptr;
//	int *arr[5];
//
//	test(ptr);
//	test(&p1);
//	test(arr);
//	return 0;
//}
//12.二级指针传参
//void test(int **ptr){}
//int main(){
//	int n = 10;
//	int *p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}
//11.
//void test2(char* p){}
//int main(){
//	char ch = 'w';
//	char* pc = &ch;
//	char arr2[5];
//
//	test2(&ch);
//	test2(pc);
//	test2(arr2);
//	return 0;
//}

//void test1(int* p){}
//
//int main(){
//	int  a = 10;
//	int *ptr = &a;
//	int arr[10];
//	//test1()函数可接收的参数：
//	test1(&a);
//	test1(ptr);
//	test1(arr);
//
//	return 0;
//}
//10.一级指针传参
//void print(int *p, int sz){
//	int i = 0;
//	for (i = 0; i < sz;i++){
//		printf("%d ", *(p + i));
//	}
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = &arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p,传给参数
//	print(p,sz);
//	//指针传参，参数写成指针的形式
//	return 0;
//}

//9.二维数组传参
//二维数组传参，函数形参的设计只能省略第一个[]的数字
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素
//void test(int arr[3][5]){}		   //正确	 数组传参，参数写成数组的形式

//void test(int arr[][]){}	      //错误

//void test(int arr[][5]){}		   //正确


//int main(){
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//8.一维数组传参
//void test(int arr[]){}		   //正确	 数组传参，参数写成数组的形式
//
//void test(int arr[10]){}	   //正确
//
//void test(int *arr){}		   //正确
//
//void test2(int *arr[20]){}	   //正确
//
//void test2(int **arr){}		   //正确     //int *p;    &p;//int**
//
//int main(){
//	int arr1[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr1);
//	test2(arr2);
//	return 0;
//}

//7.练习

//int arr[5];	  //arr是一个整型数组，数组有5个元素，每个元素的类型是int

//parr1是一个指针数组
//int *parr1[10];		parr1是一个数组，有10个元素，每个元素的类型是int* ;

//parr2是一个数组指针
//int (*parr2)[10];	parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的雷兴国是int ；

//int (*parr3[10])[5];	 parr3是一个数组，


//6. 数组指针
//*(p + i)——相当于拿到了一行  ,相当于这一行的数组名
//	 (*(p + i))[j] 	  <==>  *(*(p + i) + j)
//此处的p是指向一行的
//void print2(int (*p)[5],int x,int y){
//	int i = 0;
//	for (i = 0; i < 3;i ++){
//		int j = 0;
//		for (j = 0; j < 5;j++){
//			printf("%d ",(*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
	//打印数组的函数
	//print1(arr, 3, 5);  //这里的arr也是数组名，表示的依然是首元素的地址
	//谈首元素的时候;
	//对于二维数组，将二维数组看成一维数组，此时的一维数组每个元素是一行，
	//第一行的地址就是一个数组的地址
	//print2(arr, 3, 5);

	/**void print3(int(*p)[3][5])
	   print3(&arr);
	   */

//	return 0;			 
//}
//5.数组指针的使用：常见于二维数组
//void print1(int arr[3][5],int x,int y){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x;i++){
//		for (j = 0; j < y;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//void print2(int arr[],int sz){
//void print2(int* arr,int sz){
//	int i = 0;
//	for (i = 0; i < sz;i++){
//		//printf("%d ",arr[i]);//编译器自己也会把arr[i]转换成*(arr + i)
//		printf("%d ",*(arr + i));
//	}
//}
//int main(){
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 }};
//	 //写一个函数打印arr数组的内容
//	print1(arr, 3, 5);
//
//	int arr2[] = { 1, 2, 3, 4, 5, 6 };
//	print2(arr2,6);//arr2是首元素地址	 //数组传参的时候不是传的数组，而是首元素的地址
//
//	return 0;
//}

//4. 数组指针的的使用
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//方法1
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10;i++){
//		printf("%d ",*(p + i));
//	}
	/**
	//方法2
	 int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	 int (*pa)[10]= &arr;

	 int i = 0;
	 for (i = 0; i < 10;i++){
		 printf("%d ",(*pa)[i]);
	 }
	 */
//	return 0;
//}
//3.数组指针——指针
//指向数组的指针
//int *p ;p是一个指向整型的指针
//char *pc;pc是一个指向字符的指针
//int main(){
//	int a = 10;
//	int *p = &a;
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int(* pa)[5] = &arr;//&arr拿到的是数组的地址
	
	//pa就是一个数组指针，该指针指向一个数组，数组有5个元素，每个元素的类型是int
	//数组的地址就存放在数组指针里边

	//arr	 ——数组首元素的地址
	//&arr	——数组的地址
	//这两个值看似数值是相等的，但是意义不同
	//arr + 1 :跳过一个元素
	//&arr + 1 :跳过一整个数组
	
//	return 0;
//}
//2.指针数组——数组
//存放指针(地址)的数组
//int main(){
	//int a = 10;
	//int b = 20;
	//int c = 30;
	////&a, &b,&c   int *
	////arr就是指针数组
	//int* arr[] = { &a, &b, &c };

//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//	int* arr4[] = { arr1, arr2, arr3};
//
//	int i = 0;
//	for (i = 0; i <= 2; i++) {
//		int j = 0;
//		for (j = 0; j <= 3;j++){
//			printf("%d ",arr4[i][j]);
//		}
//		printf("\n");
//	}
//		return 0;
//}

//1.数组指针
//int main(){
//	char ch = 'w';
//	char *pc = &ch;
//	char const *ps2 = "hello world!";
//	//此写法不严谨
//	//char *ps = "hello world!";//常量字符串	 
//	char arr[] = "hello world";
//
//	return 0;
//
//}