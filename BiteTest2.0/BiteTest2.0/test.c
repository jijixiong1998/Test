#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//10.//牛特网：小乐乐与字符串
//如China的英文缩写：'CHN'，那么给定字符串s,统计s中子串"CHN"的个数
//如：输入CCHNCHHN     输出  7
int main(){
	char str[8000];
	printf("请输入字符串：");
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

//9. offsetof宏的实现
//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明


//8.  题目名称：交换奇偶位
//题目内容：写一个宏，可以将一个整数的奇数位和偶数位交换

//宏实现
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
	//得到所有的奇数位，偶数位为0；
	//0000 1010——	10
	//0101 0101——0xaaaaaaaa
	//0000 0101——  交换后的结果5

	//(a & 0x55555555) << 1;
	//得到所有的偶数位，奇数位为0；
	//(a & 0xaaaaaaaa) >> 1;
	//0000 1010——	10
	//1010 1010——0xaaaaaaaa
	//0000 0101——  交换后的结果5


	return 0;
}
*/

//7. 模拟实现一个函数，将一个字符串中的每个空格替换成“%20”。
//如：字符串 We Are Happy.   经过替换之后的字符串为：We%20Are%20Happy.
//void replaceSpace(char *str,int length){
//	//1.数空格
//	int i = 0;
//	int spacecount = 0;		 //空格数
//	for (i = 0; i < length; i++){
//		if (str[i] == ' '){
//			spacecount++;
//		}
//	}
//	//2.从后往前处理字符串
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


//6.	题目描述：给定一个数N,将其转变成一个Fibonacci数(通过N+1或者N-1)，所需要的最少次数
// Fibonacci数列：1 1 2 3 5 8 13 21 34......
//int main(){
//	int n = 0;
//	int f1 = 0;
//	int f2 = 1;
//	int f3 = 0;
//	printf("请输入一个整数：");
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
//	//0000 1010——10
//	return a;
//}
//int main(){
//	printf("%d\n", fun(21));	//10 
//	return 0;
//
//}


//4.该程序的c输出结果： -1
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


//3.  该程序会出现：陷入死循环
//int main(){
//int x = 1;
//	do{
//		printf("%d\n", x++);//  1   x = 2
//
//	} while (x--); //x = 1
//}


//2.将字符串的偶数位变为大写
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
//	printf("%d\n", j);	  //程序的输出结果为173
//	return 0;
//}