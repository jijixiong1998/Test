#define _CRT_SECURE_NO_WARNINGS 1
//小程序
#include <stdio.h> 
#include <string.h>  
#include <assert.h>  
#include <ctype.h>  

//1.一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。

//编写一个函数找出这两个只出现一次的数字。
//（1）
/***
void search(int arr[], int num)
{
	assert(arr);
	assert(num > 0);
	int *x = (int *)malloc(sizeof(int *));
	int *y = (int *)malloc(sizeof(int *));
	*x = 0;
	*y = 0;
	//全部进行按位与，根据相同数字按位与为零不同为一，因此结果一定不为零，且32个比特位上至少有一位为1。
	int sum = arr[0];
	for (int i = 0; i < num; i++)
	{
		sum ^= arr[i];
	}
	//找到最低位第一次出现1的位置，记为pos，因为此时的1一定是不同的两个数相应位置上的1和0亦或得到的。
	int pos = 1;
	{
		while (sum & 1)
		{
			sum = sum >> 1;
			pos = pos << 1;
		}
	}
	//根据pos位置上的01值不同，将数组划分为两个数组，并各自亦或，得出每个数组出现一次的数字
	for (int i = 0; i < num; i++)
	{
		if (arr[i] & pos)
		{
			*x ^= arr[i];
		}
		else
		{
			*y ^= arr[i];
		}
	}
	printf("%d %d", *x, *y);
}
int main(){
	int arr[] = { 1, 2, 3, 7, 4, 5, 1, 2, 3, 7 };
	int num = sizeof(arr) / sizeof(arr[0]);
	search(arr, num);

}
*/

//(2)
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	//5 ^ 6
//	//101
//	//110
//	//011
//	//分组问题，
//	//如以低位为1可分的组为[1,1,3,3,5]
//	//  以低位为0可分的组为[2,2,4,4,6]
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;	
//	int pos = 0;
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz;i++){
//		//将所有数的异或结果都存于ret中
//		ret ^= arr[i];//此时ret肯定不为0
//	}
//	//计算ret的哪一位为1  （说明5 和 6 的哪一位就不相同   相异为1）
//	for (i = 0; i < 32;i++){
//		if (((ret >> i) & 1) == 1)	 //i其实就是第几位为1 ，判断数组中的哪一个元素的第i位为1 放到一个数中	，哪个元素的的第i位为0放入一个数中
//			break;
//	}
//	pos = i;
//	//遍历数组，看哪个元素的第i位为1 或者0
//	for (i = 0; i < sz;i++){
//		//arr[i]被分组的元素，看其第i位是否为1
//		if(((arr[i] >> pos) & 1) == 1){
//			num1 ^= arr[i];
//		}		 	
//	}	
//	num2 = ret ^num1;
//	printf("%d %d",num1,num2);
//	return 0;
//}
 //2.模拟实现atoi
//atoi() 函数用来将字符串转换成整数(int)，其原型为：
  //int atoi(const char * str);

//【函数说明】atoi() 函数会扫描参数 str 字符串，
//跳过前面的空白字符（例如空格，tab缩进等，可以通过 isspace() 函数来检测），
//直到遇上数字或正负符号才开始做转换，而再遇到非数字或字符串结束时(‘\0’)才结束转换，并将结果返回。

//【返回值】返回转换后的整型数；如果 str 不能转换成 int 或者 str 为空字符串，那么将返回 0。
/**
int my_atoi(char const *p)
{
	int ret = 0;
	int a = 0;
	int flag = 1;
	assert(p != NULL);
	while (isspace(*p))
	{
		p++;
	}
	while (*p)
	{
		if (*p == '+')
			p++;
		else if (*p == '-')
		{
			p++;
			flag = -1;
		}
		else if (*p >= '0'&& *p <= '9')
		{
			a = *p - '0';
			ret = (ret * 10 + a);
			p++;
		}
		else
			return 0;
	}
	if ((flag == 1 && ret > 0x7FFFFFFF) || (flag == -1 && ret < (signed int)0x80000000))
		return 0;
	return ret*flag;
}

int main()
{
	printf("%d\n", my_atoi(" +2345"));
	printf("%d\n", my_atoi(" -2345"));
	printf("%d\n", my_atoi("+2345"));
	printf("%d\n", my_atoi("-2345"));
	printf("%d\n", my_atoi("2345"));
	printf("%d\n", my_atoi("2345"));
	printf("%d\n", my_atoi(""));
	printf("%d\n", my_atoi("123ab"));
	system("pause\n");
	return 0;
}
*/
//
/**
#define INT_MAX 2147483647
#define INT_MIN -2147483678
enum State
{
	VALID, //合法状态
	INVALID //非法状态
};
enum State state = INVALID;//因为非法状态的情况比较多，而合法的状态只有一种情况，为了使代码简单些，所以将开始状态初始化为非法状态
int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;//标识正负数
	assert(str != NULL);//空指针
	if (*str == '\0')//空字符串
	{
		return 0;
	}
	while (isspace(*str))   //空白字符
	{
		str++;
	}
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		str++;
		flag = -1;
	}

	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0')*flag;
			if (ret > INT_MAX&&ret < INT_MIN)//越界情况
			{
				return 0;
			}
		}
		else
		{
			state = VALID;//合法状态
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}


int main()
{
	char *p = "  1122abcdef1122";
	int ret = my_atoi(p);
	if (state == VALID)
		printf("%d\n", ret);
	system("pause");
	return 0;
}
*/

//4. 
/**
//题目描述：输入n个整数的序列，要求对这个数列进行去重操作；
//           所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置
//输入描述：输入包含两行，第一行包含一个正整数n(1 <= n <= 1000),表示第二行序列中数字的个数；
//          第二行包含n个整数(范围1-5000)，用空格分隔
//输出描述： 输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔
// 
// eg:输入：
// 5
// 10 12 15 12 75
// 输出：
// 10 120 15075
// */
//int main(){
//	int n = 0;
//	int arr[5000] = { 0 };
//	//输入数据
//	printf("请输入数据总数：");
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 0; i < n;i ++){
//		scanf("%d",&arr[i]);
//	}
//	//去重
//	for (i = 0; i < n;i++){
//		int j = 0;
//		for (j = i + 1; j < n;j++){
//			 //如果相等，则把后续袁术向前移动
//			if (arr[i] == arr[j]){
//				int k = 0;
//				for (k = j; k < n - 1;k ++){
//					arr[k] = arr[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	for (i = 0; i < n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}		
//

//5.  判断三角形类型

//给定三角形的三条边a,b c，判断该三角形类型(等边，等腰，普通三角形)
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	printf("请输入三角形的三条边：");
	while (scanf("%d%d%d", &a, &b, &c) != EOF){
		//满足条件就是三角形
		if (a + b > c && a + c > b && b + c > a) {
			if (a == b && b == c)
				printf("Equilateral triangle!\n");
			else if ((a == b && a != c) || (a == c && a != b) || (b == c&& a != b))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
		printf("Not a triangle!\n");
	}
		return 0;
	
}