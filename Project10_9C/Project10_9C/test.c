#define _CRT_SECURE_NO_WARNINGS 1
	//ָ��
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

//14. ����ָ�룺ָ������ָ��
int Add(int x,int y){
	return x + y;
}
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int(*p)[10] = &arr;//ȡ������ĵ�ַ��p������ָ��

	//int (*pf)(int,int) = &Add; //pf�Ǻ���ָ��

	int(*pf)(int, int) = Add;

	int sum = (*pf)(2, 3);
	printf("%d\n", sum);
	//sum = Add(2, 3);

	sum = pf(2, 3);
	printf("%d\n",sum);

	//����ָ������⣺��һ��ָ������ָ�롪����ź����ĵ�ַ
	//�������Ǻ����ĵ�ַ
	//&������Ҳ�Ǻ����ĵ�ַ
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
//12.����ָ�봫��
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
//	//test1()�����ɽ��յĲ�����
//	test1(&a);
//	test1(ptr);
//	test1(arr);
//
//	return 0;
//}
//10.һ��ָ�봫��
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
//	//һ��ָ��p,��������
//	print(p,sz);
//	//ָ�봫�Σ�����д��ָ�����ʽ
//	return 0;
//}

//9.��ά���鴫��
//��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ��
//void test(int arr[3][5]){}		   //��ȷ	 ���鴫�Σ�����д���������ʽ

//void test(int arr[][]){}	      //����

//void test(int arr[][5]){}		   //��ȷ


//int main(){
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//8.һά���鴫��
//void test(int arr[]){}		   //��ȷ	 ���鴫�Σ�����д���������ʽ
//
//void test(int arr[10]){}	   //��ȷ
//
//void test(int *arr){}		   //��ȷ
//
//void test2(int *arr[20]){}	   //��ȷ
//
//void test2(int **arr){}		   //��ȷ     //int *p;    &p;//int**
//
//int main(){
//	int arr1[10] = { 0 };
//	int *arr2[20] = { 0 };
//	test(arr1);
//	test2(arr2);
//	return 0;
//}

//7.��ϰ

//int arr[5];	  //arr��һ���������飬������5��Ԫ�أ�ÿ��Ԫ�ص�������int

//parr1��һ��ָ������
//int *parr1[10];		parr1��һ�����飬��10��Ԫ�أ�ÿ��Ԫ�ص�������int* ;

//parr2��һ������ָ��
//int (*parr2)[10];	parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص����˹���int ��

//int (*parr3[10])[5];	 parr3��һ�����飬


//6. ����ָ��
//*(p + i)�����൱���õ���һ��  ,�൱����һ�е�������
//	 (*(p + i))[j] 	  <==>  *(*(p + i) + j)
//�˴���p��ָ��һ�е�
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
	//��ӡ����ĺ���
	//print1(arr, 3, 5);  //�����arrҲ������������ʾ����Ȼ����Ԫ�صĵ�ַ
	//̸��Ԫ�ص�ʱ��;
	//���ڶ�ά���飬����ά���鿴��һά���飬��ʱ��һά����ÿ��Ԫ����һ�У�
	//��һ�еĵ�ַ����һ������ĵ�ַ
	//print2(arr, 3, 5);

	/**void print3(int(*p)[3][5])
	   print3(&arr);
	   */

//	return 0;			 
//}
//5.����ָ���ʹ�ã������ڶ�ά����
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
//		//printf("%d ",arr[i]);//�������Լ�Ҳ���arr[i]ת����*(arr + i)
//		printf("%d ",*(arr + i));
//	}
//}
//int main(){
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 }};
//	 //дһ��������ӡarr���������
//	print1(arr, 3, 5);
//
//	int arr2[] = { 1, 2, 3, 4, 5, 6 };
//	print2(arr2,6);//arr2����Ԫ�ص�ַ	 //���鴫�ε�ʱ���Ǵ������飬������Ԫ�صĵ�ַ
//
//	return 0;
//}

//4. ����ָ��ĵ�ʹ��
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//����1
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10;i++){
//		printf("%d ",*(p + i));
//	}
	/**
	//����2
	 int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	 int (*pa)[10]= &arr;

	 int i = 0;
	 for (i = 0; i < 10;i++){
		 printf("%d ",(*pa)[i]);
	 }
	 */
//	return 0;
//}
//3.����ָ�롪��ָ��
//ָ�������ָ��
//int *p ;p��һ��ָ�����͵�ָ��
//char *pc;pc��һ��ָ���ַ���ָ��
//int main(){
//	int a = 10;
//	int *p = &a;
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int(* pa)[5] = &arr;//&arr�õ���������ĵ�ַ
	
	//pa����һ������ָ�룬��ָ��ָ��һ�����飬������5��Ԫ�أ�ÿ��Ԫ�ص�������int
	//����ĵ�ַ�ʹ��������ָ�����

	//arr	 ����������Ԫ�صĵ�ַ
	//&arr	��������ĵ�ַ
	//������ֵ������ֵ����ȵģ��������岻ͬ
	//arr + 1 :����һ��Ԫ��
	//&arr + 1 :����һ��������
	
//	return 0;
//}
//2.ָ�����顪������
//���ָ��(��ַ)������
//int main(){
	//int a = 10;
	//int b = 20;
	//int c = 30;
	////&a, &b,&c   int *
	////arr����ָ������
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

//1.����ָ��
//int main(){
//	char ch = 'w';
//	char *pc = &ch;
//	char const *ps2 = "hello world!";
//	//��д�����Ͻ�
//	//char *ps = "hello world!";//�����ַ���	 
//	char arr[] = "hello world";
//
//	return 0;
//
//}