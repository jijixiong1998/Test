#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针
/*
arr——数组首元素的地址
&arr——数组的地址
arr + 1 :跳过一个他不属于
&arr + 1:跳过整个数组
[]的优先级要高于*号，所以必须加上()来保证p先和* 结合
 指针就是一个变量，用来存放地址，地址唯一标识一块内存空间
 指针的大小是固定的4/8个字节(32位平台/64位平台)
 指针是有类型，指针的类型决定了指针的 +-整数的步长，指针解引永固操作的时候的权限。

*/
//6.  指针数组的使用
//int main(){
//	int arr1[] = { 1, 2, 3, 4 };
//	int arr2[] = { 2, 3, 4, 5 };
//	int arr3[] = { 3, 4, 5, 6 };
//
//	int * arr4[] = { arr1, arr2, arr3 };   //arr4指针数组 ：数组元素的每个类型是指针类型
//	int i = 0;
//	for (i = 0; i < 3;i++){
//		int j = 0;
//		for (j = 0; j < 4;j++){
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(){
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//&a,&b,&c; //相同的类型int* 可以考虑使用数组来存储
//	int *arr[3] ={&a, &b, &c};		//arr就是指针数组，
//	return 0;
//}
//int main(){
//	char ch = 'w';
//	char *pc = &ch;
//
//	//不严谨的写法，有可能报错
//	char* ps = "helloworld";//常量字符串，不可以被改变		ps指向了字符串的首字符h
//	 //严谨的写法
//	const char*ps1 = "hello world";
//
//	char arr[] = "helloworld";
//	return 0;
//}
//5.数组指针的使用

//int main(){
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p1 = arr;
//	int i = 0;
//	for (i = 0; i < 10;i++){
//		printf("%d ",*(p1 + i));
//	}
   /**
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int (*p)[10] = &arr;  //p是一个数组指针，该指针指向了一个数组，数组的每个元素类型是int
	int i = 0;
	for (i = 0; i < 10;i++){
		printf("%d ",(*p)[i]);
	}
	*/
//	return 0;
//}
//4.   数组名 和 &数组名
//&arr表示的是数组的地址，而不是数组首元素的地址。
//数组的地址 + 1:跳过的是整个数组的大小，所以&arr + 1相对于&arr的差值是40.
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//arr;   //数组名是首元素的地址
//	//&arr;	//取出整个数组的地址
//
//	//int *p3;
//	//p3 + 1;//跳过4个字节
//	//char* p4;
//	//p4 + 1;//跳过1个字节
//
//	int* p1 = arr;
//	//p1 + 1;//跳过一个元素——跳过4个字节
//
//	printf("p1 = %p\n",p1);					   //p1 = 0073F9D0		   差了4字节
//	printf("p1 + 1 = %p\n",p1 + 1);				//p1 + 1 = 0073F9D4
//
//
//	//数组指针 = 数组的地址
//	int (*p2)[10]= &arr;//int(*)[]
//	//p2 + 1;//跳过一个数组					  
//												 
//	printf("p2 = %p\n",p2);					   		   //p2 = 0073F9D0	差了40字节
//	printf("p2 + 1 = %p\n", p2 + 1);				  //p2 + 1 = 0073F9F8
//	//printf("%p\n",arr);		   //00B5FAC4
//	//printf("%p\n", &arr[0]);	   //00B5FAC4
//	//printf("%p\n", &arr);   //00B5FAC4
//
//	return 0;
//}



//3.数组指针——指针：存放数组 int(*p)[10]
//数组指针——指向数组的指针
//整型指针——指向整型的指针
// int (*p)[10];//p先和*结合，说明p是一个指针变量，然后指针指向的是一个大小为10的整型的数组
                //所以p是一个指针，指向一个数组，叫数组指针
//需要注意的:[]的与县级要高于*d的，所以必须加上()来保证p先和*结合

//数组指针——指针——指向数组的指针
//int main(){
//	int a = 10;
//	int*p = &a;
//
//	int arr[5] = { 1, 2, 3, 4, 5 };//5 * 4 = 20;
//	// 数组指针 = 数组的地址
//	int (*pa)[5] = &arr;	 //&arr拿到的是数组的地址
//	//pa就是一个数组指针，该指针指向了一个数组，数组有5个元素，每个元素的类型是int
//	//数组的地址就放在数组指针里边
//	return 0;
//}


//int *p1[10];	//p1是一个整型指针数组，该数组的每个元素类型是指针类型
//int(*p2)[10];	//p2是一个数组指针，该指针指向了一个数组，数组元素的每个类型为int
//int  a= 10;
//int* p = &a;
//char* p ;
//字符指针——指向字符的指针
//int main(){
//	char* ch[5];//指针数组
//	 char* (*pc)[5]= &ch;
	//char arr[5];
	//char(* p)[5] = &arr;//  p就是一个数组指针，该指针指向了一个数组，每个元素的类型char

	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };*/
	//int *p = arr;//数组名是首元素地址
	//数组指针 = 数组的地址
	/*int(* p)[10] = &arr;*/		//p就是数组指针，该指针指向了一个数组，每个元素的类型是int
//	return 0;
//}
//2.指针数组——数组:存放指针的  int* p[10];	   char* p[5];  short* p[10];
//整型数组：存放整型的数组	   int arr[10];
//字符数组：存放字符的数组		char ch[4];

  //字符指针数组
//int main(){
//	/**
//	char* p1 = "zhangsan";
//	char* p2 = "lisi";
//	char* p3 = "wangwu";
//
//	char* arr[] = { p1, p2, p3 };
//	*/
//	char * arr[] = { "zhangsan", "lisi", "wangwu" };
//	int i = 0;
//	for (i = 0; i < 3;i++){
//		printf("%s\n",arr[i]);
//	}
//	return 0;
//}

//int main(){
//	int arr1[] = { 1, 2, 3};
//	int arr2[] = { 2, 3, 4 };
//	int arr3[] = { 3, 4, 5 };
//	//指针数组的使用
//	int* arr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3;i++){
//		int j = 0;
//		for (j = 0; j < 3;j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main(){
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3;i++){
//		printf("%d\n", *(arr[i]));	 //10  20 30
//	}
//
//	return 0;
//}


//1.字符指针
//输出结果为：
//arr1 ！=arr2
//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char *p1 = "abcdef"; //常量字符串，不可以被修改
//	char *p2 = "abcdef";
//
//	if(arr1 == arr2){
//		printf("arr1 == arr2\n");
//	}
//	else{
//		printf("arr1 ！=arr2\n");
//	}
//	if (p1 == p2){
//		printf("p1 == p2\n");
//	}
//	else{
//		printf("p1 != p2\n");
//	}
//	return 0;
//}

//int main(){
//	char ch = 'w';
//	char *pc = &ch;
//	printf("%c\n",*pc);		   //w
//
//	char *p = "abcdef";		   //常量字符串，不可以被修改
//	printf("%s\n", p);		 //abcdef
//
//	char arr[] = "abcdef";
//	char *p2 = arr;
//	printf("%s\n",arr);
//	return 0;
//}


//杨氏矩阵：矩阵的每行从左到右，从上到下都是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。

//int findnum(int arr[3][3],int key,int row,int col){
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0){
//		if (arr[x][y] > key){
//			y--;
//		}
//		else if (arr[x][y] < key){
//			x++;
//		}	
//		else return 1;
//	}
//	return 0;
//}
//
//int main(){
//	int  arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int key = 7;
//	int ret = findnum(arr,key,3,3);
//	if (ret == 1){
//		printf("找到了！\n");
//	}
//	else{
//		printf("未找到！\n");
//	}
//	return 0;
//}
//