#define _CRT_SECURE_NO_WARNINGS 1
//数据的存储
# include <stdio.h>
# include <stdlib.h>
int main(){
	int i = -20;
	unsigned int j = 10;
	printf("%d\n",i + j);  //-10
	return 0;
}
//int main(){
//	int a = 128;
//	//100000000
//	//11111111 11111111 11111111 10000000
//
//	printf("%u\d",a);
//	return 0;
//}
  //%u 打印无符号整型
//int main(){
//	char a = -128;
	//10000000 00000000 00000000 10000000	——  -128的原码
	//11111111 11111111 11111111 01111111
	//11111111 11111111 11111111 10000000
	//11111111 11111111 11111111 10000000	——
//	printf("%u\n", a);		  //4294967168
//	return 0;
//}

//int main(){
//
//	char a = -1;
	//11111111 11111111 11111111 11111111 
	//11111111
	//11111111 11111111 11111111 11111111——发生整型提升
	//10000000 00000000 00000000 00000000
	//10000000 00000000 00000000 00000000——  -1
//	signed char b = -1;
	//11111111
	//11111111 11111111 11111111 11111111——发生整型提升
	//10000000 00000000 00000000 00000000
	//10000000 00000000 00000000 00000000——  -1
	//
//	unsigned char c = -1;
	//11111111
	//00000000 00000000 00000000 11111111	 ——255
	//%d 整型提升
//	printf("a = %d,b = %d ,c = %d",a,b ,c);		//a = -1,b = -1 ,c = 255
//	return 0;
//}

//代码的执行结果为：255
//int main(){
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000;i++){
//		a[i] = -1 - i;
//	}
//	printf("%d",strlen(a));			//255
//	return 0;
//}

/*printf在传入参数的时候如果是整形则会默认传入4字节，
所以a + b的结果使用一个4字节的整数接受的，不会越界。
而c已经在c = a + b这一步中丢了最高位的1，所以只能是300-256 = 44了
由于printf是可变参数的恶汉换宿，所以后面参数的类型是未知的，
所以不管你传入的是什么类型，printf只会根据类型的不同将用两种不同的长度存储。
其中8字节的只有long long 、float(注意float会处理成double在传入)、搜捕了，其它类型都是4字节，
所以 a + b的类型是char,是加上接收时还是用一个4字节的整数接受的。
另外，读取时，%lld、%llx 等整型方式和%f 、%lf等浮点型方式读8字节，其它读4字节

*/
  //程序的执行结果为：
//int main(){
//	unsigned char a = 200;	   //
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;		 //44
//	printf("%d %d",a +b,c);	  //300 44
//	system("pause");
//	return 0;
//}
/*
整型：
char 
  unsigned char
  signed char

short
  unsigned short[int]
  signed short[int]

int 

long 

*/

//整型在内存中的存储
   //数据在内存中是以二进制的形式进行存储的
// VS 在展示内存的时候，为了方便，是以16进制进行展示的
//正数的原码、反码、补码相同
//在计算机系统中，数值一律使用补码来表示和存储，原因在于，使用补码可以将符号位与数值域统一处理；
//加法和减法也可以统一处理(CPU只有加法器)，此外，补码与原码相互组欢欢，其运算过程也是相同的，不需要额外的电路。
//int main(){
//	int a = 1;
//	int b = 1;
//	int c = a - b;
	// 1-1;	   CPU加法器
	//1 + (-1)
	//00000000 00000000 00000000 00000001 ——1的补码
	//11111111 11111111 11111111 11111111 ——  -1的补码
   //10000000 00000000 00000000 000000000 ——相加的结果  0
//	printf("c = %d", c);
//	return 0;
//}

//int main(){
//	int a = 3;	   //在内存中 03 00  00 00
//	//00000000 00000000 00000000 00000011  ——原码
//	//00000000 00000000 00000000 00000011 ——反码
//	//00000000 00000000 00000000 00000011——补码	——16进制形式：00 00 00 03
//	int b = -1;	   //在内存中 ff ff ff ff
//	//10000000 00000000 00000000 00000001——原码
//	//11111111 11111111 11111111 11111110——反码
//	//11111111 11111111 11111111 11111111——补码  ——	16进制存储：   ff ff ff ff
//	//
//	return 0;
//}
//int main(){
//	//char 到底是unsigned char 还是unsigned char 是不确定的，取决于编译器的实现
//	char c = 'w';
//	//signed是有符号的
//	signed char ch = 'w';
//	unsigned char ch2 = 't';
//
//	short int a = 10;
//	short b = 20;
//	signed c = 30;
//	unsigned short d = 40;
//	return 0;
//}
/*
大小端字节序：
大端（存储）模式：把一个数的低位字节序的内容存储在高地址处，而高位字节序内容存储在低地址处
小端（存储）模式：把一个数的低位字节序的内容存储在低地址处，而高位字节序内容存储在高地址处

*/
//设计一个程序来判断当前机器是采用小端还是大端存储数据的

//3.进一步优化
//int check_sys(){
//	int a = 1;
//	return (*(char *)&a);
//}
//2.优化：封装成函数
//int check_sys(){
//	int a = 1;
//	char *p = (char *)&a;
//	if (*p == 1){
//		return 1;	  //小端
//	}
//	else
//		return 0;	  //大端
//}
//int main(){
//	int a = 1;
//	int ret = check_sys();
//	//取它的第一个字节进行判断是否为1
//	//char *p = (char *)&p;	 //int *
//	if (ret == 1){
//		printf("小端\n");
//	}
//	else{
//		printf("大端\n");
//	}
//	// 0x 00 00 00 01
//	//低地址         高地址
//	//小端：01 00 00 00 
//	//大端：00 00 00 01
//	return 0;
//}
//1.
//int main(){
//	int a = 1;
//	char *p = (char *)&a;
//	if (*p == 1){
//		printf("小端存储");
//	}
//	else{
//		printf("大端存储");
//	}
//	system("pause");
//	return 0;
//}



	/*
	数据类型介绍
	char 字符数据类型
	int   整型
	short  
	float 
	double
	long long 
	long 
	 类型的意义：
	 1.使用这个类型开辟内存空间的大小(大小决定了使用范围)
	 2.如何看待内存空间的视角
	*/

//int main(){
//		int a = 3;
//		int b = -1;
//		return 0;
//}