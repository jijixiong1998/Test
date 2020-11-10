#define _CRT_SECURE_NO_WARNINGS 1
//结构体 + 枚举 + 联合
#include <stdio.h>

//4. 联合（共用体）
//(1)联合的定义
   /**
   联合也是一种特殊的自定义类型，这种类型定义的变量也包含一系列的成员，
   特征是这些成员共用同一块空间（所以联合也叫共用体）
   */
//(2)联合类型的声明

//union Un{
//	char c;
//	int i;
//};
//
//int main(){
//	//联合变量的定义
//	union Un un;
//	//计算联合变量的大小
//	printf("%d\n", sizeof(un));		//4
//	return 0;
//
//}

//(3)联合大小的计算
  /**
  1.联合大小至少是最大成员的大小
  2.当最大成员大小不是最大对齐数逇整数倍的时候，就要对齐到最大对齐数的整数倍。
  */
union Un1{
	char c[5];
	int i;
};
union Un2{
	short c[7];
	int i;
};
int main(){
	printf("%d\n",sizeof(union Un1));		//8
	printf("%d\n", sizeof(union Un2));		 //16
	return 0;
}


//3.  枚举——列举：将可能的值一一列举
//(1)枚举类型的定义

//1.星期
/**
enum Day{
	Mon,
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	sun
};
//2.性别
enum Sex{
	MALE,
	FEMALE
};
//3.颜色
enum Color{
	RED,
	GREEN,
	BLUE

};
//以下上定义的enum Day  、enum Sex 、enum Color都是枚举类型。
//{}中的内容是枚举类型的可能取值，也叫作枚举常量
//这些Kenneth取值都是有值的，默认从0开始，一次递增1，当然在定义的时候也可以赋初值。
enum Color{	   //颜色
	RED = 1,
	GREEN = 2,
	BLUE = 4
};
*/

//(2)枚举的优点
	/**
	  我们可以使用#define定义常量，
	  但使用枚举的优点：
	  （1）增加代码的可读性和可维护性
	  （2）和#define定义的标识符比较枚举有类型检查，更加严谨
	  （3）防止命名污染（封装）
	  （4）使用方便，一次可以定义多个变量

	**/

//(3)枚举的使用
/**
enum Color{//颜色
	RED = 1,
	GREEN = 2,
	BLUE = 4,
};
enum Color color = GREEN;//只能用枚举常量给枚举变量赋值，才不会出现类型的差异。
*/
//2.位段
	/*
	位段的声明和结构体是类似的，有两个不同：
	（1）位段的成员必须是 int、unsigned int、或signed int
	（2）位段的成员名后边有一个冒号和一个数字
	
	*/
//(1)位段的举例：
//struct A {	  //A就是一个位段类型
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//
//};
//int main(){
//	printf("%d\n", sizeof(struct A));	  //位段A的大小是：8
//	return 0;
//}

//(2)位段的内存分
      /**
	  	(1)位段的成员可以是int  unsigned int或者是char(属于整型家族)类型
		(2)	位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟的
		(3)	位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
	  */
/**
struct S{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;

};
struct S s = { 0 };
s.a = 10;
s.b = 12;
s.c = 3;
s.d = 4;
*/

//(3)位段的跨平台问题
    /*
	(1)int 位段被当成有符号数还是无符号数是不确定的
	(2)位段中最大位的数目不能确定，（16位机器最大16,32位机器最大32，写成27，在16位机器中会出现问题）
	(3)位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义
	(4)	 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用，这是不确定的。
	
	总结：与结构体相比，位段可以达到同样的效果，但是可以很好的节省空间，但是有跨平台的问题存在。
	*/



//1. 结构体：结构是一些值的而结合，这些值称为成员变量，结构的每个成员可以是不同类型的变量
//(1)结构的声明
/**
struct tag{
	member-list ;
}varible-list;
*/

//(2)举例：如描述一个学生
/**
struct Stu{
	char name[20];
	int age;
	char sex[2];
	char id[20];

};//此处分号不可以省略
  */		

 // (3)	在声明结构体的时候，可以不完全声明
//匿名结构体类型
//如下两个声明省略掉了结构体标签(tag)
/**
struct{
	int a;
	char b;
	float c;
}x;
*/

/**
struct {
	int a;
	char b;
	float;
}a[20],*p;
*/


//(4)结构体的自引用
/**
struct Node{

	int data;
	struct Node *next;
};
*/

/**
typedef struct Node{

	int data;
	struct Node* next;
}Node;
*/


//(5) 结构体变量的定义和初始化
/**
struct Point{
	int x;
	int y;

}p1;			   //声明类型的同时定义变量p1
struct Point2 p2;  //定义结构体变量p2

//初始化：定义变量的同时赋初值
//struct Point p3 = { x, y };

struct Stu  {

	char name[15];
	int age;
};
struct Stu s = { "张三",22 };		 //初始化


struct Node{

	int data;
	struct Point p;
	struct Node *next;
}n1 = { 10,{4,5},NULL };	   //结构体嵌套初始化

struct Node n2 = { 20, {5,6},NULL }; //结构体嵌套初始化
**/


//(6)结构体内存对齐
//计算结构体的大小
     /**
	   结构体的对齐规则：
	   （1）第一个成员在与结构体变量偏移量为0的地址处；
	   （2）其它成员变量要对齐到某个数字（对齐数）的整数倍的地址处；
	   （3） 对齐数 = 编译器默认的一个对齐数 与额该成员大小的 较小值
	       VS中默认的值是8
	   （4）结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
	   （5）如果嵌套了结构体的情况，嵌套的结构体对齐到自己的额最大对齐数的整数倍处，
	        结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。

存在内存对齐的原因：
  （1）平台原因 ：不是所有的硬件平台都能访问任意地址上的任意数据的；
                   某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。
  （2）性能原因： 数据结构（尤其是栈）应该尽可能地在自然边界上对齐。
                  原因在于，为了访问未对齐的内存， 处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。  

  总的来说，结构体的内存对齐是拿空间换取时间的做法。

	 */
//练习1
//struct  S1{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2{
//	char c1;
//	char c2;
//	int i;
//
//};
//
//struct S3{
//	double d;
//	char c;
//	int i;
//};
//struct S4{	   //结构体嵌套
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main(){
//	struct S1 s1;
//	printf("%d\n", sizeof(s1));		  //12
//	struct S2 s2;
//	printf("%d\n",sizeof(s2));		   //8
//	struct S3 s3;
//	printf("%d\n", sizeof(s3));			 //	16
//	struct S4 s4;
//	printf("%d\n", sizeof(s4));			 //32
//	return 0;
//}

//在设计结构体的时候：让占用空间小的成员尽量集中在一起，可满足对齐和节省空间
/**
struct S1{	//占用空间大小为12
	char c1;
	int i;
	char c2;
};

struct S2{	 //占用空间大小为8
	char c1;
	char c2;
	int i;

};

*/
//(7)修改默认对齐数
//#pragma预处理指令，可以用来修改默认对齐数
//# pragma pack(8) //设置默认对齐数为8
//struct S1{
//	char c1;
//	int i;
//	char c2;
//};
//
//#pragma pack() //取消设置的默认对齐数，还原为默认
//
//#pragma pack(1) //	设置默认对齐数为1
//struct S2{
//
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//
//int main(){
//	printf("%d\n",sizeof(struct S1));	   //12
//	printf("%d\n", sizeof(struct  S2));		//6
//	
//	return 0;
//
//}

//(8)结构体传参
/**
struct S{
	int data[1000];
	int num;
};
struct S s = { {1,2,3,4},1000 };

//结构体传参
void print1(struct S s){
	printf("%d\n",s.num);
}

//结构体指针传参
void print2(struct S* ps){

	printf("%d\n",ps->num);
}

int main(){
	print1(s); //传结构体
	print2(&s);//传地址	   
	//传地址的方式比较好，函数传参的时候，参数是需要压栈的，会有时间和空间上的系统开销。
	//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大。所以会导致性能的下降。
	//所以，结构体传参的时候，要传结构体的地址。
	return 0;
}
*/

