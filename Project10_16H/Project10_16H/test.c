#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
#include <string.h>
/*
arr����������Ԫ�صĵ�ַ
&arr��������ĵ�ַ
arr + 1 :����һ��Ԫ��
&arr + 1:������������
[]�����ȼ�Ҫ����*�ţ����Ա������()����֤p�Ⱥ�* ���
ָ�����һ��������������ŵ�ַ����ַΨһ��ʶһ���ڴ�ռ�
ָ��Ĵ�С�ǹ̶���4/8���ֽ�(32λƽ̨/64λƽ̨)
ָ���������ͣ�ָ������;�����ָ��� +-�����Ĳ�����ָ��������̲�����ʱ���Ȩ�ޡ�

*/
//13.�ص�������
//void bubble_sort(int* a,int n,int(*p_compare)(int ,int)){
//	for (int end = n - 1; end > 0;--end){
//		for (int i = 0; i < end; ++i){
//			if (p_compare(a[i + 1],a[i])){
//				int tmp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = tmp;
//			}
//		}
//	}
//}
//int greater(int x1,int x2){
//	return(x1 > x2 ? 1: 0);
//}
//int less(int x1 ,int x2){
//	return (x1 < x2 ? 1: 0);
//}
//int main(){
//	int arr[] = { 4, 3, 21, 9 };
//	bubble_sort(arr,4,greater);
//	for (int i = 0; i < 4;++i){
//		printf("%d ",arr[i]);
//	}
//
//}
//12. ������
//����ָ��������Ӧ��	  �����Ż��������������
//int add(int x,int y){
//	return x + y;
//}
//int sub(int x,int y){
//	return x - y;
//}
//int mul(int x, int y){
//	return x * y;
//}
//int div(int x,int y){
//	return x / y;
//}
//
//typedef int(*p_func)(int, int);
//int main(){
//	//����ָ�������
//	//int(*func_arr[])(int int)
//	p_func func_arr[4] = { add, sub, mul, div };
//		int x, y;
//		int input = 1;
//		int ret = 0;
//		do{
//			printf("********������********\n");
//			printf("1.add            2.sub\n");
//			printf("3.mul            4.div\n");
//			printf("**********************\n");
//			printf("��ѡ��");
//			scanf("%d", &input);
//
//			printf("��������������");
//				scanf("%d %d",&x,&y);
//			int ret = func_arr[input - 1](x, y);
//			printf("ret = %d\n", ret);
//		} while (input);
//	return 0;
//}


//int add(int x,int y){
//	return x + y;
//}
//int sub(int x,int y){
//	return x - y;
//}
//int mul(int x, int y){
//	return x * y;
//}
//int div(int x,int y){
//	return x / y;
//}
//
//int main(){
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do{
//		printf("********������********\n");
//		printf("1.add            2.sub\n");
//		printf("3.mul            4.div\n");
//		printf("***** 0.�˳�������****\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("��������������");
//			scanf("%d %d",&x,&y);
//			ret = add(x, y);
//			printf("ret = %d\n",ret);
//			break;
//
//		case 2:
//			printf("��������������");
//			scanf("%d  %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//
//		case 3:
//			printf("��������������");
//			scanf("%d  %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//
//		case 4:
//			printf("��������������");
//			scanf("%d  %d", &x, &y);
//			int ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		default:
//			break;
//
//		}
//	} while (input);
//	return 0;
//
//}
//

//11.����ָ������飺�Ѻ����ĵ�ַ�浽һ��������
//int(*parr1[10])();	//parr1�Ⱥ�[]��ϣ�˵��parr1�����飬�����������int(*)()���͵�ָ��

//10.  
/**
int main(){
void(*pfun1)();//����ָ�룺pfun1�Ⱥ�*��ϣ�˵��pfun1��ָ�룬ָ��ָ�����һ��������ָ��ĺ����޲���������ֵ����Ϊvoid
void *pfun2();   //��������	,�����ķ���ֵ������void *

(*  (void(*)())  0)(); 	//��0ǿ������ת��Ϊ����ָ�룬�ٽ�����  �����ɺ���ȥ���ã���ʱ���л���������ֿ�ָ�����
void(*    signal(int ,void(*)(int))   ) (int); //	��������,��������ķ���ֵ�Ǻ���ָ��
//					  �����б�				   ����
//		����ֵ:����ָ��void(*)(int)
//�����Ϊ��
typedef void(*pfunc_t)(int);
pfunc_t sinal(int, pfunc_t);

return 0;
}
*/



//9.����


/**
int greater(int x1,int x2){
return (x1 > x2 ? 1 : 0);
}
int less(int x1,int x2){
return (x1 < x2 ? 1 : 0);
}
//p_compare����ָ��
void bubble_sort(int *arr,int sz,int(*p_compare)(int ,int)){
for (int i = 0; i < sz - 1; i++){
for (int j = 0; j < sz - 1 - i; j++){

//if(arr[j] > arr[j + 1])
//������less()������������
//if (less(arr[j] ,arr[j + 1])){

//��������greater()��������
//if(greater(arr[j],arr[j + 1]))
if (p_compare(arr[j + 1],arr[j])){
int tmp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = tmp;
}
}
}
}
int main(){
int arr[] = { 7, 4, 8, 1, 2, 3, 5, 6, 12,11 };
int sz = sizeof(arr) / sizeof(arr[0]);

//����
bubble_sort(arr,sz,less);
printf("��������Ϊ��");
for (int i = 0; i < sz;i++){
printf("%d ",arr[i]);
}

printf("\n");

//����
bubble_sort(arr,sz,greater);
printf("��������Ϊ��");
for (int i = 0; i < sz - 1;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}

*/
//ð������
//������
//void bubble_sort(int *arr, int sz){
//void bubble_sort(int arr[],int sz){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz- 1;i++){
//		for (j = 0; j < sz - 1 - i;j++){
//			//����
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
////��ӡ����
//void print(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[] = {5,3,4,6,8,9,10,7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//    print(arr,sz);
//	return 0;
//}

//10.	 �ַ�����ת���
/*
����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
˼·1����������ת��Ľ���ŵ�һ�������Ȼ����в��ң��������������Ȳ��ò�����

˼·2����ʵABCDE������ô������ת������н��������������ABCDEABCD����ַ������ˡ�
���������ܼ򵥣�ֻ��Ҫ��ԭ�ַ�������һ����ں��棬
Ȼ����һ�Ҵ����ҵ��ַ����ǲ�������ԭ�ַ������Ӽ����ɡ�
int findRound(const char * src, char * find)
{
char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
strcpy(tmp, src); //�ȿ���һ��
strcat(tmp, src); //������һ��
return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
}
*/

//�������ת�ַ���  ����1  , ���� �򷵻�0
//int Isrotatingstr(char arr[], char str[]) {
//	char arr1[1024] = { 0 };
//	strcpy(arr1, arr);          //�ַ��������� , �Ѻ�����ַ���(arr)  ��ֵ��  ǰ����ַ�����(arr1)
//	strcat(arr1, arr);          //�ַ������Ӻ��� , ��arr ������arr1�ĺ���  
//	int ret = strstr(arr1, str);//�ж�arr �ǲ��� arr1 ���Ӵ�  ���û�з���NULL
//	if (ret == NULL) {
//		return 0;
//	}
//	return 1;
//}
int findRotateStr(char arr[], char find[]){
	char tmp[1024] = { 0 };//�����ռ���������ԭ�ַ��� ��
	strcpy(tmp, arr);
	strcat(tmp, arr);
	int ret = strstr(tmp, find);
	if (ret == NULL){
		return 0;
	}
	return 1;
}
int main(){
	char arr[] = "ABCDEF";
	char find[] = "BCDEFA";//���жϵ��ַ���
	int ret = findRotateStr(arr, find);
	if (ret == 1){
		printf("str��arr����ת�ַ���!\n");
	}

	else if (ret == 0){
		printf("str����arr����ת�ַ�����\n");
	}

	return 0;
}
//10_18
//9.	��36ƥ��6���ܵ���û�м�ʱ�����豸�������ٵı�����������ܵ�����3ƥ��	//8c
/*

*/

//8.  �������⣺�����������ȷֲ����㣬ÿ���������ʱ����1��Сʱ������������ȷ��һ��15���ӵ�ʱ��
/*
˼·����������˿�ʼ��ȼ����ȷ��һ��30���ӵĶ�ʱ��
һ����ȼ�յ���ʱ����60���ӣ���������һ������ȷ��30���ӣ�
Ȼ���ٰ���һ�������ͷ����ȼ�����ʱ��ȼ�����������15������
ͬʱ����ͷ���ǰ�Сʱ����
���岽�裺
��ȼ��һ��������˺͵ڶ������һ�Σ�
�ȵ�һ����ȼ���Ժ󣬰ѵڶ��������һ�˵�ȼ��
�ӵ�һ����ȼ����ʼ����֪���ڶ�����ȼ����������15����
*/

//7.�����Σ�5λ�˶�Ա�μ���10����ˮ������������������Ԥ����������
/*
Aѡ��˵��B�ڶ����ҵ���
Bѡ��˵���ҵڶ���E����
Cѡ��˵���ҵ�һ��D�ڶ�
Dѡ��˵��C����ҵ���
Eѡ��˵���ҵ��ģ�A��һ
����������ÿλѡ�ֶ�˵����һ�룬���ȷ����������
*/
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						if (((b == 2) + (a == 3) == 1)&&
//							((b == 2) + (e == 4)== 1)&&
//							((c == 1) + (d == 2) == 1)&&
//							((c == 5) + (d == 3) == 1)&&
//							((e == 4) + (a == 1) == 1)){
//							if (a * b * c * d* e == 120){
//								printf("a = %d  b = %d  c = %d  d = %d  e = %d\n",a,b,c ,d,e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//6.������
/*
�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ��
����Ϊ�ĸ����ɷ��Ĺ��ʣ�
A˵�������ң�
B˵����C
C˵����D
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ�
�����������Щ��Ϣ��дһ��������ȷ������˭��ɱ��

*/

//int main(){
//	int killer = 'a'; 
//	for (killer = 'a'; killer <= 'd';killer++){
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3){
//			printf("�����ǣ�%c\n", killer);
//		}
//	}
//	return 0;
//}
//5.��ӡ�������


/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

1
1 1
1 2 1
1 3 3 1	   arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]
1 4 6 4 1	 //��һ��Ϊ1���Խ���ҲȫΪ1

*/
//int main(){
//	int arr[100][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("��������Ҫ��ӡ��������");
//	scanf("%d",&n);
//	for (i = 0; i < n;i++){
//		for (j = 0; j < n;j++){
//			if (i == j)		  //���Խ��߸�ֵΪ1
//				arr[i][j] = 1;
//			if (j == 0)			 //����1�и�ֵΪ1
//				arr[i][j] = 1;
//			if (i >= 2 &&j >= 1){
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}	
//	}
//	for (i = 0; i < n; i++){
//		for (j = 0; j <= i; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//4. 
//int main(){
//	char a[1000];
//    int i = 0;
//	for (i = 0; i < 1000;i++){
//		a[i] = -1 - i;
//		printf("%d", strlen(a));   //255
//	}
//	return 0;
//}
//3.  ��32λ���ģʽ�������ϱ���b����	0x 00
//unsigned int a = 0x1234;				//0x 00  00  12  34
//unsigned char b = *(unsigned char *)&a;

//2. �������н����
//int main(){
//	//����������
//	//�з��������շ���λ��������
//	//�޷���λ����������0
//	unsigned char a = 200;	   //1100 1000
//	unsigned char b = 100;	   //0110 0100
//	unsigned char c = 0;
//	c = a + b;				   //1 0010 1100
//	printf("%d %d",a + b,c);		  // 300   44
//	return 0;
//}
//1.��С���ֽ���  ��ָ���ǽ������ڵ����ϴ洢���ֽ�˳��
//����ֽ����У��ǽ����ݵĵ�λ�洢�ڸߵ�ַ���������ݵĸ�λ�洢�ڵ͵�ַ����
//С���ֽ��򣺽����ݵĵ�λ�洢�ڵ͵�ַ���������ݵĸ�λ�洢�ڸ��ֽڴ���
//����  0x  11  22   33  44
//�͵�ַ            �ߵ�ַ
//С�˴洢	 44   33   22   11
// ��˴洢   11   22   33   44