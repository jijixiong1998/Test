#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.+ �����ȼ����� *=	


//2.  �������������1
//ȫ�ֱ����;ֲ�������������ͬʱ���ֲ�����
//int a = 1;
//void test(){
//	int a = 2;
//	a += 1;
//}
//int main(){
//	test();
//	printf("%d\n",a);
//	return 0;
//}
//3. �����������ᷢ����ѭ��
//int main(){
//	int x = 1;
//	do{
//		printf("%2d\n", x++);
//
//	}while (x--);
//	return 0;
//}

//4.�����������Ϊ��67
//8
//7    6
//6     5      5    4
//5 4  4 3	  4 3   3 2


//int cnt = 0;
//int fib(int n){
//	cnt++;
//	if (n == 0){
//		return 1;
//	}
//	if (n == 1){
//		return 2;
//	}
//	else{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main(){
//	
//	fib(8);
//	printf("%d",cnt);	  //67
//	return 0;
//}

//5. ��������Ȼ������С������
  //�磺���� 3  5
  //    ��� 15
//(1)	���������㷨���ӶȽϴ�
//int main(){
//
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������");
//	scanf("%d%d",&num1,&num2);
//	int i = num1;
//	while (i)
//	{
//		if (i % num1 == 0 && i % num2 == 0){
//			break;
//		}
//		i++;
//	}
//	printf("%d\n",i);
//	return 0;
//}
//(2)  �Ľ�
//int main(){
//	int num1 = 0; 
//	int num2 = 0;
//	printf("��������������");
//	scanf("%d%d",&num1,&num2);
//	int i = 1;
//	int tmp = num1;
//	while (i){
//		if (tmp * i %num1 == 0 && tmp * i % num2 == 0){
//			break;
//		}
//		i++;
//	}
//	printf("%d\n", tmp * i);
//	return 0;
//
//}

//6.  ��������Ȼ�������Լ��
	  //������1��շת�����
//divisor()���Զ��庯���������������Լ��
//int divisor(int a, int b)   
//{
//	int  temp = 0;        
//	if (a<b)             //ͨ���Ƚ�����������е����ֵ����Сֵ*/
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	} //�����м����������������
//	while (b != 0)           //ͨ��ѭ����������������ֱ������Ϊ0
//	{
//		temp = a%b;
//		a = b;              //������ֵ����
//		b = temp;
//	}
//	return(a);            //�������Լ�������ú�����
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������");
//	scanf("%d%d",&num1,&num2);
//	int ret = divisor(num1, num2);
//	printf("����������������Լ��Ϊ��%d\n", ret);
//	return 0;
//}
	

      //������2����ٷ���
//int divisor(int a, int b) //�Զ��庯�������������Լ��
//{
//	int  temp = 0;          
//	temp = (a>b) ? b : a;    //�����������ʽ����������е���Сֵ
//	while (temp>0)
//	{
//		if (a%temp == 0 && b%temp == 0) //ֻҪ�ҵ�һ������ͬʱ��a,b������������ֹѭ��
//			break;
//		temp--;      //�粻����if����������Լ���ֱ���ܱ�a,b������
//	}
//	return (temp); //����������������������������
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������");
//	scanf("%d%d",&num1,&num2);
//	int ret = divisor(num1, num2);
//	printf("������� %d �� %d �����Լ��Ϊ%d\n",num1 ,num2,ret);
//}

//7.   �ַ������ã��Կո���Ϊ�ָ�
   //������ I like beijing.   �����beijiing. like I


//8.�ַ���������
//void reverse(char *left ,char *right){
//	while (left < right){
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_string(char *str){
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//
//	while (*str != '\0'){
//	
//		char * start = str;
//		char * end = str;
//		while (*end != ' ' && *end != '\0'){
//			end++;
//		}
//		//����ÿ������
//		reverse(start,end);
//		if (*end != '\0'){
//			str = end + 1;
//		}
//		else
//			str = end;
//	}
//	//����������
//	reverse(left,right);
//}
//int  main(){
//	
//	char arr[100] = { 0 };
//	printf("�������ַ�����");
//	//scanf �ڽ����ַ���ʱ�������ո���Զ�ֹͣ�����
//	//scanf("%s", arr);
//	//��˿ɿ���ʹ��gets()����������ַ���
//	//char *gets(char *buffer);
//
//	gets(arr);
//	//��ת
//	// beijing. like I
//	reverse_string(arr);
//	printf("%s",arr);
//	return 0;
//}




//9.
//int main(){
//	int a = 0, c = 0;
//	do{
//		--c;	//-1
//		a = a - 1;	//a = -1
//	} while (a > 0);
//	printf("%d\n", c);
//}


//10.��for ѭ����ִ�д����� 4��
//int main(){
//	int x = 0; 
//	int y = 0;
//	for (x = 0, y = 0; (y = 123) && y < 4;x++){
//	//                     ��
//	}
//	return 0;
//}

//11.
//int main(){
//	int year = 1009;
//	int *p = &year;
//	printf("%d\n", *p += 1);	 //1010
//	printf("%d\n", (*p)++);		 //1010
//	printf("%d\n", ++(*p));		 //1012
//	printf("%d\n", *p++);	  //1012
//	return 0;
//}

//12. 11 |10	 ��������λ��
//    1011 | 1010	 =  1011 = 11

