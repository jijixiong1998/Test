#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//10.//ţ������С�������ַ���
//��China��Ӣ����д��'CHN'����ô�����ַ���s,ͳ��s���Ӵ�"CHN"�ĸ���
//�磺����CCHNCHHN     ���  7
int main(){
	char str[8000];
	printf("�������ַ�����");
	scanf("%s", &str);
	char *p = str;
	long long c = 0, ch = 0, chn = 0;
	while (*p){
		if (*p == 'C'){
			c++;
		}
		if (*p == 'H'){
			ch += c;
		}
		if (*p == 'N'){
			chn += ch;
		}
		p++;
	}

	printf("%lld\n", chn);
}

//9. offsetof���ʵ��
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��


//8.  ��Ŀ���ƣ�������żλ
//��Ŀ���ݣ�дһ���꣬���Խ�һ������������λ��ż��λ����

//��ʵ��
#define BITCHANGE(n)  ((((n) & 0x55555555) << 1) + (((n) & 0xaaaaaaaa) >> 1));
int main(){
	int a = 10;
	int b = BITCHANGE(a);
	printf("%d\n", b);
	return 0;
}
/**
int main(){
	int a = 10;
	int b = (((a & 0x55555555) << 1) + ((a & 0xaaaaaaaa) >> 1));
	printf("%d\n", b);		 //5
	//�õ����е�����λ��ż��λΪ0��
	//0000 1010����	10
	//0101 0101����0xaaaaaaaa
	//0000 0101����  ������Ľ��5

	//(a & 0x55555555) << 1;
	//�õ����е�ż��λ������λΪ0��
	//(a & 0xaaaaaaaa) >> 1;
	//0000 1010����	10
	//1010 1010����0xaaaaaaaa
	//0000 0101����  ������Ľ��5


	return 0;
}
*/

//7. ģ��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
//�磺�ַ��� We Are Happy.   �����滻֮����ַ���Ϊ��We%20Are%20Happy.
//void replaceSpace(char *str,int length){
//	//1.���ո�
//	int i = 0;
//	int spacecount = 0;		 //�ո���
//	for (i = 0; i < length; i++){
//		if (str[i] == ' '){
//			spacecount++;
//		}
//	}
//	//2.�Ӻ���ǰ�����ַ���
//	int newlen = length + spacecount * 2 - 1;
//	for (i = length - 1; i >= 0;i--){
//		if (str[i] == ' '){
//			str[newlen--] = '0';
//			str[newlen--] = '2';
//			str[newlen--] = '%';
//		}
//		else{
//			str[newlen--] = str[i];
//		}
//	}
//
//}
//
//int main(){
//
//	return 0;
//}


//6.	��Ŀ����������һ����N,����ת���һ��Fibonacci��(ͨ��N+1����N-1)������Ҫ�����ٴ���
// Fibonacci���У�1 1 2 3 5 8 13 21 34......
//int main(){
//	int n = 0;
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = 0;
//	printf("������һ��������");
//	scanf("%d",&n);
//	while (1){
//		if (f2 == n){		
//			printf("%d\n",0);
//			break;
//		}
//		else if (f2 > n) {
//			if(abs(f1 - n) > abs(f2 - n)){
//				printf("%d\n", abs(f2 - n));
//				break;
//			}
//			else{
//				printf("%d\n",abs(f1 - n));
//				break;
//			}
//		}
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	return 0;
//}


//5.
//int fun(int a){
//	a ^= (1 << 5) - 1;
//	//21 ^= (1 << 5) - 1
//	//21 ^= 32 - 1
//	//21 ^ 31
//	//0001 0101 
//	//0001 1111
//	//0000 1010����10
//	return a;
//}
//int main(){
//	printf("%d\n", fun(21));	//10 
//	return 0;
//
//}


//4.�ó����c�������� -1
//int main(){
//	int a = -3;
//	//0000 0000 0000 0000 0000 0000 0000 0011
//	//1111 1111	1111 1111 1111 1111 1111 1100
//	//1111 1111 1111 1111 1111 1111 1111 1101
//	unsigned int b = 2;
//	//0000 0000 0000 0000 0000 0000 0000 0010
//	long c = a + b;
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	printf("%ld\n",c);		//-1
//	return 0;
//}


//3.  �ó������֣�������ѭ��
//int main(){
//int x = 1;
//	do{
//		printf("%d\n", x++);//  1   x = 2
//
//	} while (x--); //x = 1
//}


//2.���ַ�����ż��λ��Ϊ��д
//int main(){
//	char a = 0,ch ;
//	
//	while ((ch = getchar())!='\n'){
//		if (a % 2 != 0 &&(ch >= 'a' && ch <='z')){
//			ch = ch - 'a' + 'A';
//			a++;
//			putchar(ch);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//1.
//int main(){
//	// 7  4  1   -2(254)  251......5  2  -1(255) 252 ...3  0
//	//1 +1 + 1   +85             		   +85 = 173
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0;i -= 3){
//		++j;
//	}
//	printf("%d\n", j);	  //�����������Ϊ173
//	return 0;
//}