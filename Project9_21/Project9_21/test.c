#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <string.h>
# include <assert.h>

//����ʹ��const��assert�����Ż�
int my_strlen(const char* str){

	assert(str != NULL);

	int count = 0;
	while (*str != '\0'){
		*str++;
		count++;
	}
	return count;
}
//ģ��ʵ��strlen()����
/*
int my_strlen(char *str){
	int count = 0;
	while (*str != '\0'){
		*str++;
		count++;
	}
	return count;
}
*/
int main(){
	char arr1[] = "hello";
	int len = my_strlen(arr1);
	printf("%d\n",len);
	return 0;
}
//strlen()����
//int main(){
//	int len = strlen("abc");
//	printf("%d\n",len);
//	return 0;
//}
  /*
int main(){
	 //const����ָ���ʱ��
	// const���� * ����ߣ���ʾָ��ָ�������(*p)����ͨ��ָ��(p)���ı�,����ָ�����(p)�����ǿ��Ըı��
	//const���� * ���ұߣ���ʾָ��ָ�������(*p)����ͨ��ָ��(p)���ı䣬����ָ�����(p)�����ǲ������޸ĵ�
	const int num = 20;
	int n = 20;
	int const *p = &num;
	//*p = 20;
	p = &n;
	printf("%d\n", num);
		return 0;
  
}
*/
//const ����ָ��İ�ȫ��ʹ��const��ʹ��ָ����������������޸�
//char * my_strcpy(char *dest,const char *src){
//   char* ret = dest;
//	//assert-����-<assert.h>
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//}
//int main(){
//	char arr1[] = "hello";
//	char arr2 = "XXXXXXX";
//	char *p = NULL;
//	my_strcpy(p,arr1);
//	printf("%s\n",arr1);
//	return 0;
//}

//�鿴�ó������������������ԭ��
//������ѭ��
//�ڴ���ջ����ʹ��ϰ�ߣ���ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�
//���飺�����±����������ַ�ɵ͵���
//����Խ����ʣ�ʹ��i�ĵ�ַ��arr[12]�ĵ�ַ��ͬ��ʹ��i��ֵ�б�Ϊ0���Ӷ�������ѭ��
  
//int main(){
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//
//}

//�����⽲�⣺ ��linux x86_64 gcc �����£�����ĳ�������ʲô���⣬���н����ԭ��
//int main(){
//	long i;
//	long a[16];
//
//	for (i = 0; i <= 17;i ++){
//		a[i] = 0;
//		printf("%d",i);
//	}
//	return 0;
//}

//���ԣ��鿴���ö�ջ
//void test2(){
//	printf("test2()\n");
//}
//void test1(){
//	test2();
//}
//void test(){
//	test1();
//}
//int main(){
//	test();
//	return 0;
//}
//���ԣ��鿴���������ӡ�����ࡢ
//int main(){
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10;i++){
//		arr[i] = 0;
//	}
//	return 0;
//}

//ģ��ʵ��strcpy
//void my_strcpy(char *dest, char *src){
//	//1.
//	/*
//	while (*src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;	\
//		//�����ַ���������'\0'
//	}
//	//�����ַ���'\0'
//	*dest = *src;
//	*/
//	//2.��������Ż�
//	/*
//	while (*src != '\0'){
//		*dest++ = *src++;
//	}
//	return 0;
//	*/
//	//3.��һ���Ż�
//	//c������'\0 '��ASCII��ֵΪ0���ɽ�����Ϊ����ѭ�����ж�����
//	while (*dest++ = *src++){
//		;
//	}
//	return 0;
//}
//
//int main(){
//	char arr1[] = "hello";
//	char arr2[20] = { 0 };
//	//my_strcpy()������ģ��ʵ��strcpy()
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}
//�ַ���������strcpy(char * dest,char *src);
//int main(){
//	char arr1[] = "hello";
//	char arr2[] = { 0 };
//	strcpy(arr2,arr1);
//	printf("%s",arr2);
//
//	return 0;
//}


//	����1 �� + 2 �� + 3�� + ....n!,���������
//int main(){
//	int n = 0;
//	printf("������һ��������\n");
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n;i++){
        //n!
//		for (j = 1; j <= i;j++){
//			ret = ret *j;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("�����Ľ׳�֮��Ϊsum = %d\n",sum);
//
//	return 0;
//}

//int main(){
//	int a = 14;
//	a |= (1 << 4);
//	printf("%d\n",a);
//	return 0;
//}