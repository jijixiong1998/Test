#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1.Ұָ��	��
//int main(){
//	int *p;	 //�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}

//2.ָ��Խ����ʣ�
//int main(){
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11;i++){
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p + i) = i;
//	}
//
//	return 0;
//}

//3. ָ��ʹ��֮ǰ�����Ч��
//int main(){
//	int *p = NULL;
//	//....
//	int a = 20;
//	p = &a;
//	//ָ��ʹ��֮ǰ�������Ч��
//	if (p != NULL){
//		*p = 20;
//	}
//	return 0;
//}

//4.����ָ���ʹ��
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//������arr�ĵ�ַ��ֵ������ָ�����p
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
// //����ָ��
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
//	//������arr��ʾ��Ԫ�ص�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ�У�
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr,3,5);
//	return 0;
//}


//5.һ��ָ�봫��
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
//	//һ��ָ��p,��������
//	print(p, sz);
//
//	return 0;
//}
//6.����ָ�봫��
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

//7.ָ������ �������ָ�������	����int* arr[5]����arr
//int arr1[10];//����ָ�������
//char *arr2[4];//һ���ַ�ָ�������
//char **arr3[5];//�����ַ�ָ�������


//8.�������
//int main(){
//	//�������ã���0ǿ������ת��Ϊ����ָ�롪�������á�����������
//	//���ɺ������ã����л���������ֿ�ָ��ķ���
//	( * (void(*)() )0)();
//	return 0;
//}


//int main(){
//	//���������������������ķ���ֵ�Ǻ���ָ��
//	//void(*signal(int, void(*)(int)))(int);//��������
//	
//	//���������룺
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//	return 0;
//}

//9.ð������
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

//11.ָ������
//int main(){
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);	  //����ָ�� + 1������������Ĵ�С
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}