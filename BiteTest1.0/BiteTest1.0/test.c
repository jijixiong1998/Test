#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.+ 的优先级高于 *=	


//2.  程序的输出结果：1
//全局变量和局部变量的名字相同时：局部优先
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
//3. 程序的输出：会发生死循环
//int main(){
//	int x = 1;
//	do{
//		printf("%2d\n", x++);
//
//	}while (x--);
//	return 0;
//}

//4.程序的输出结果为：67
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

//5. 求两个自然数的最小公倍数
  //如：输入 3  5
  //    输出 15
//(1)	此种做法算法复杂度较大
//int main(){
//
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数：");
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
//(2)  改进
//int main(){
//	int num1 = 0; 
//	int num2 = 0;
//	printf("请输入两个数：");
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

//6.  求两个自然数的最大公约数
	  //方法（1）辗转相除法
//divisor()：自定义函数求两个数的最大公约数
//int divisor(int a, int b)   
//{
//	int  temp = 0;        
//	if (a<b)             //通过比较求出两个数中的最大值和最小值*/
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	} //设置中间变量进行两数交换
//	while (b != 0)           //通过循环求两数的余数，直到余数为0
//	{
//		temp = a%b;
//		a = b;              //变量数值交换
//		b = temp;
//	}
//	return(a);            //返回最大公约数到调用函数处
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数：");
//	scanf("%d%d",&num1,&num2);
//	int ret = divisor(num1, num2);
//	printf("输入的两个数的最大公约数为：%d\n", ret);
//	return 0;
//}
	

      //方法（2）穷举法：
//int divisor(int a, int b) //自定义函数求两数的最大公约数
//{
//	int  temp = 0;          
//	temp = (a>b) ? b : a;    //采用条件表达式求出两个数中的最小值
//	while (temp>0)
//	{
//		if (a%temp == 0 && b%temp == 0) //只要找到一个数能同时被a,b所整除，则中止循环
//			break;
//		temp--;      //如不满足if条件则变量自减，直到能被a,b所整除
//	}
//	return (temp); //返回满足条件的数到主调函数处
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数：");
//	scanf("%d%d",&num1,&num2);
//	int ret = divisor(num1, num2);
//	printf("输入的数 %d 和 %d 的最大公约数为%d\n",num1 ,num2,ret);
//}

//7.   字符串倒置，以空格作为分割
   //如输入 I like beijing.   输出：beijiing. like I


//8.字符串的逆序
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
//		//逆序每个单词
//		reverse(start,end);
//		if (*end != '\0'){
//			str = end + 1;
//		}
//		else
//			str = end;
//	}
//	//在整体逆序
//	reverse(left,right);
//}
//int  main(){
//	
//	char arr[100] = { 0 };
//	printf("请输入字符串：");
//	//scanf 在接收字符串时，遇到空格就自动停止输出了
//	//scanf("%s", arr);
//	//因此可考虑使用gets()接收输入的字符串
//	//char *gets(char *buffer);
//
//	gets(arr);
//	//翻转
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


//10.求for 循环的执行次数： 4次
//int main(){
//	int x = 0; 
//	int y = 0;
//	for (x = 0, y = 0; (y = 123) && y < 4;x++){
//	//                     真
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

//12. 11 |10	 按二进制位或
//    1011 | 1010	 =  1011 = 11

