#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.野指针	：
//int main(){
//	int *p;	 //局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}

//2.指针越界访问：
//int main(){
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11;i++){
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p + i) = i;
//	}
//
//	return 0;
//}

//3. 指针使用之前检查有效性
//int main(){
//	int *p = NULL;
//	//....
//	int a = 20;
//	p = &a;
//	//指针使用之前检查其有效性
//	if (p != NULL){
//		*p = 20;
//	}
//	return 0;
//}

//4.数组指针的使用
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//将数组arr的地址赋值给数组指针变量p
//	int(*p)[10] = &arr;
//	return 0;
//}
 
//void print_arr1(int arr[3][5],int row,int col){
//	int i = 0;
//	for (i = 0; i < row; i++){
//		int j = 0;
//		for (j = 0; j < col; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
// //数组指针
//void print_arr2(int (*arr)[5],int row,int col){
//	int i = 0;
//	for (i = 0; i < row;i++){
//		int j = 0;
//		for (j = 0; j < col; j++){
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//int  main(){
//
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr,3,5);
//	//数组名arr表示首元素地址
//	//但是二维数组的首元素是二维数组的第一行，
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr,3,5);
//	return 0;
//}


//5.一级指针传参
//void print(int *p,int sz){
//	int i = 0;
//	for (i = 0; i < sz;i++){
//		printf("%d ", *(p + i));
//	}
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p,传给函数
//	print(p, sz);
//
//	return 0;
//}
//6.二级指针传参
//void test(int **ptr) {
//	printf("num = %d\n",**ptr);
//}
//int main(){
//	int n = 10;
//	int *p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//7.指针数组 ——存放指针的数组	——int* arr[5]——arr
//int arr1[10];//整型指针的数组
//char *arr2[4];//一级字符指针的数组
//char **arr3[5];//二级字符指针的数组


//8.代码分析
//int main(){
//	//函数调用：将0强制类型转换为函数指针——解引用——函数调用
//	//当成函数调用，运行会崩溃，出现空指针的访问
//	( * (void(*)() )0)();
//	return 0;
//}


//int main(){
//	//分析：函数声明：函数的返回值是函数指针
//	//void(*signal(int, void(*)(int)))(int);//函数声明
//	
//	//简化上述代码：
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	return 0;
//}

//9.冒泡排序：
//void bubble_sort(int arr[],int sz){
//	int i = 0;
//	for (i = 0; i < sz - 1;i++){
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++){
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//int main(){
//	int arr[] = { 9, 7, 5, 4, 3, 1, 2, 13, 14 };
//	int sz = sizeof(arr) /sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}

//11.指针数组
//int main(){
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);	  //数组指针 + 1：加整个数组的大小
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}