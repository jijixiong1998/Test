#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>	  
void test1(int arr[]){
	printf("%d\n", sizeof(arr));   //4
}						
void test2(char ch[]){
	printf("%d\n", sizeof(ch));	   //4
}
int main(){
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));	//40
	printf("%d\n",sizeof(ch));		 //10
	test1(arr);					  //
	test2(ch);
	return 0;
}

//sizeof() :�����������ͳ���(���ֽ�Ϊ��λ)
//int main(){
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//����������ܴ�С����λ���ֽ�
//	printf("%d\n",sizeof(int[10]));		  //40
//	printf("%d\n",sizeof(a));				//4
//	printf("%d\n",sizeof(int));				   //4
//	return 0;
//}

 //&  ȡ��ַ
// * ��ӷ��ʲ�����(�����ò�����)
//int main(){
//	int a = 10;			 //4���ֽڵĿռ�
//	int * pa = &a;		//ָ�����
//	*pa = 20;		    //* �����ò�����
//	printf("a��ֵΪ�� %d\n", a);
//	return 0;
//}

// ��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ���
//int count_one(int n){
//	int count = 0;
//	while (n){
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	//n = n & (n - 1)
//	int a = -1;
//	int ret = count_one(a);
//	printf("��������1�ĸ���Ϊ�� %d\n",ret);
//	return 0;
//
//}

//int count_one(int n){
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32;i++){
//		if (((n >> i) & 1) == 1){
//			count++;
//		}
//	}
//	return count;
//}
//int main(){
//	int a = -1;
//	int ret = count_one(a);
//	printf("����������1�ĸ���Ϊ: %d\n", ret);
//	return 0;
//}


//int main(){
//	int num = 10;
//	int count = 0;
//	while (num){
//		if (num % 2 == 1)  {
//			count++;
//		}	
//		num = num / 2;
//		printf("��������1�ĸ��� = %d",count);
//	}
//}

 //���ܴ�����ʱ����(����������)��ʵ���������Ľ���
//int main(){
//	int a = 3;			 //0011
//	int b = 5;			 //0101
//	a = a ^ b;			 //0110
//	b = a ^ b;			 //0011
//	a = a ^ b;			 //0101
//	printf("a = %d b = %d", a,b);
//	return 0;
//}
//

  //��λ���  :��Ӧ�Ķ�����λ����ͬΪ0������Ϊ1
//int main(){
//	int a = 3;		  //0011
//	int b = 5;		  //0101
//	int c = a ^b;	  //0110
//	printf("%d\n",c);  //6
//	return 0;
//}



//int main(){
//	//��(������)λ�롪��&
	//��(������λ)λ��

	//int a = 3;			//0011
	//int b = 5;		    //0101

//	int c = a & b;		//0001
//	printf("%d\n",c);	//1
	//int c = a | b;
	//printf("%d\n",c);	//7
	//return 0;
//}
//��λ������
//>>  ���Ʋ�����
//<<  ���Ʋ�����	 :�ƶ����Ƕ�����λ

//int main(){
	//����������ڴ��е�ʱ�򣬷ŵ��Ƕ�����
	//�����Ķ�������ʽ�����֣�ԭ�룬���룬����
	//-1
	//ԭ�롪��1000 0000 0000 0000 0000 0000 0000 0001
	//���롪��1111 1111 1111 1111 1111 1111 1111 1110
	//���롪��1111 1111 1111 1111 1111 1111 1111 1111
	/*int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
}*/
//int main(){
//	int a = 7;
//	//���Ʋ�������
//	//�������ƣ��ұ߶�������߲�ԭ����λ
//	//�߼����ƣ��ұ߶�������߲�0
//	int b = a >> 1;	   
//	printf("%d\n",b);
//	return 0;
//}


//int main(){
//	int a = 7;		// 0000 0000 0000 0000 0000 0000 0000 0111
//	int b = a << 1;		//���Ʋ�����������һλ����߶������ұ߲�0��
//	printf("%d\n",b);  //14
//	return 0;
//}