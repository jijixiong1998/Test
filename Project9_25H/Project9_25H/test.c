#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
//int main(){
//	int arr[10] = {0};
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组的内容赋值，数组是使用下标来进行访问的，下标是从0开始的
//	int i = 0;
//	for (i = 0; i <= 9;i++){
//		arr[i] = i;
//	}
//	//输出数组的内容
//	for (i = 0; i <= 9;i++){
//		printf("%d ",arr[i]);
//	}
//
//	return 0;
//}
//汉诺塔问题

//青蛙跳台阶问题

//使用非递归方法求斐波那契数
//int fib(int n){
//	int result;
//	int pre_result;
//	int next_older_result;
//	result = pre_result = 1;
//	while (n > 2){
//		n -= 1;
//		next_older_result = pre_result;
//		pre_result = result;
//		result = pre_result + next_older_result;
//	}
//	return result;
//
//}
//int main(){
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d",&n);
//	int ret = fib(n);
//	printf("第%d位的斐波那契数为 %d\n",n,ret);
//	return 0;
//}
//栈溢出：系统分配给程序的栈空间是有限的，但是如果出现了死循环或者死递归，
//这样可能导致一直开辟 栈空间，最终产生栈空间耗尽的情况，这样的现象称为栈溢出。
//求第n个斐波那契数列  1 1 2 3 5 8 13 21... ——递归方法
//int fib(int n){
//	if (n <= 2){
//		return 1;
//	}
//	else{
//		return fib(n - 1) + fib(n - 2);
//	}
//
//}
//int main(){
//	int num = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &num);
//	int ret = fib(num);
//	printf("%d",ret);
//	return 0;
//}
//使用非递归的方法——求n的阶乘
//int fatorial(int n){
//	int ret = 1;
//	while (n > 1){
//		ret *= n;
//		n--;
//	}
//	return ret;
//}
//int main(){
//	int n = 0;
//	printf("请输入一个整数：");
//	scanf("%d",&n);
//	int ret = fatorial(n);
//	printf("%d 的阶乘为 %d\n",n,ret);
//	return 0;
//}
//使用递归的方法——求n 的阶乘(不考虑溢出)
//int factorial(int n){
//	if (n <= 1){
//		return 1;
//	}
//	else{
//		return n * factorial(n - 1);
//	}
//}
//int main(){
//	int n = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d",&n);
//	int ret = factorial(n);
//	printf("%d的阶乘为%d\n",n,ret);
//	return 0;
//}
//编写函数不允许创建临时变量，求字符串的长度
//int my_strlen(const char *str){
//	if (*str == '\0'){
//		return 0;
//	}
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main(){
//	char *str= "abcdefgh";
//	int len = my_strlen(str);
//	printf("该字符串的长度为：%d\n", len);
//}
//接受一个整型值(无符号)，按照顺序打印它的每一位。如：输入1234 ，输出1  2  3 4
//int print(int num){
//	if (num > 9){
//		print(num / 10);
//	}
//	printf("%d ",num % 10);
//}
//int main(){
//	int num1 = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d",&num1);
//    print(num1);
//	return 0;
//}
//写一个函数可以交换两个整型变量的内容
//int swap(int *px,int *py){
//	int tmp = 0;
//	tmp = *px;
//    *px = *py;
//	*py = tmp;
//}
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	printf("两数交换之前的num1 = %d,num2 = %d\n",num1,num2);
//	int ret = swap(&num1,&num2);
//	printf("两数交换之后num1 = %d,num2 = %d\n",num1,num2);
//	return 0;
//}

//写一个代码打印1-100之间所有3的倍数的数字
	//求两个整数的最大值
//int get_max(int a,int b){
//	return (a > b) ? (a) : (b);
//}
//int main(){
//	int num1 = 10;
//	int num2 = 20;
//	int ret = get_max(num1,num2);
//	printf("两者中的最大值为：%d\n",ret);
//	return 0;
//}
//打印杨辉三角
  //方法一
/*
int main()
{
	int i, j, n = 0;
	//首先定义二维数组计数符号i,j 还有杨辉三角行数的初始化
	int a[100][100] = { 0 };
	//二维数组大小可自定，但切记不可使其超过整形数组的大小
	while (n < 1 || n >100)
		//在输入的值不正确时自动初始化问题，重新输入
	{
		printf("请输入要打印的杨辉三角行数>:");
		scanf("%d", &n);
	}
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
		//每一行第一个为1，用第一个for循环的输入
	}
	for (i = 1; i < n; i++)//第一层循环i决定第几行
	{
		for (j = 1; j <= i; j++)//第二层循环借用i限制每行字符数目
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)//一个for循环逐行打印叫a的二维数组
	{
		for (j = 0; j <= i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}
*/
//方法二
/*
int main()
{
	int i, j, n = 0;
	//首先定义二维数组计数符号i,j 还有杨辉三角行数的初始化
	int a[100][100] = { 1 };
	//二维数组大小可自定，但切记不可使其超过整形数组的大小
	while (n < 1 || n >100)
		//在输入的值不正确时自动初始化问题，重新输入
	{
		printf("请输入要打印的杨辉三角行数>:");
		scanf("%d", &n);
	}
	for (i = 1; i < n; i++)//第一层循环i决定第几行
	{
		a[i][0] = 1;
		for (j = 1; j <= i; j++)//第二层循环借用i限制每行字符数目
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 0; i < n; i++)//一个for循环逐行打印叫a的二维数组
	{
		for (j = 0; j <= i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}
//把每一行的第一个初始化1的操作包入第一个for循环中，并且改动二维数组初始化值为1
	 */

//方法三

/*
int main()
{
	int i, j, n = 0;
	//首先定义二维数组计数符号i,j 还有杨辉三角行数的初始化
	int a[100][100] = { 0, 1 };
	//只有2个初值，即a[0][0]=1，a[0][1]=2，其余数组元素的初值均为0
	//二维数组大小可自定，但切记不可使其超过整形数组的大小
	while (n < 1 || n >100)
		//在输入的值不正确时自动初始化问题，重新输入
	{
		printf("请输入要打印的杨辉三角行数>:");
		scanf("%d", &n);
	}
	for (i = 1; i < n; i++)//第一层循环i决定第几行
	{
		for (j = 1; j <= i; j++)//第二层循环借用i限制每行字符数目
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 1; i < n; i++)//一个for循环逐行打印叫a的二维数组
	{
		for (j = 1; j <= i; j++)
			printf("%5d", a[i][j]);
		printf("\n");
	}
	return 0;
}
//优化于方法一二，取消二维数组中第一列赋值为1的做法，且在最后输出时略有改动
//int a[100][100] = {0,1};此处赋值知识已单独开设一文，请自行查找本人博客
*/
//方法四
/*
int main()
{
	int i, j, n = 0;
	//首先定义二维数组计数符号i,j 还有杨辉三角行数的初始化
	int a[100][100] = { 0, 1 };
	//二维数组大小可自定，但切记不可使其超过整形数组的大小
	while (n < 1 || n >100)
		//在输入的值不正确时自动初始化问题，重新输入
	{
		printf("请输入要打印的杨辉三角行数>:");
		scanf("%d", &n);
	}
	for (i = 1; i < n; i++)//第一层循环i决定第几行
	{
		for (j = 1; j <= i; j++)//第二层循环借用i限制每行字符数目
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//优化于解法三，仅将赋值输出同时进行，且注意换行符的位置更替。
*/
//方法五
/*

int main()
{
	int i, j, n = 0;
	int l, r;
	//首先定义二维数组计数符号i,j 还有杨辉三角行数的初始化
	int a[100] = { 0, 1 };
	while (n < 1 || n >100)
		//在输入的值不正确时自动初始化问题，重新输入
	{
		printf("请输入要打印的杨辉三角行数>:");
		scanf("%d", &n);
	}
	for (i = 1; i < n; i++)
	{
		l = 0;
		for (j = 1; j <= i; j++)
		{
			r = a[j];
			a[j] = l + r;
			l = r;
			printf("%5d", a[j]);
		}
		printf("\n");
	}
	return 0;
}
//解法五使用一个一维数组，再加两个临时变量进行操作
*/
 /*
 5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
 */
//int main()
//{
//	for (int a = 1; a <= 5; a++)
//	{
//		for (int b = 1; b <= 5; b++)
//		{
//			for (int c = 1; c <= 5; c++)
//			{
//				for (int d = 1; d <= 5; d++)
//				{
//					for (int e = 1; e <= 5; e++)
//					{
//						if (120 == a*b*c*d*e)
//						{
//							if (b == 2 && a != 3 || a == 3 && b != 2)
//							{
//								if (b == 2 && e != 4 || b != 2 && e == 4)
//								{
//									if (c == 1 && d != 2 || d == 2 && c != 1)
//									{
//										if (c == 5 && d != 3 || c != 5 && d == 3)
//										{
//											if (e == 4 && a != 1 || a == 1 && e != 4)
//											{
//												printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
以下为4个嫌疑犯的供词:
A说：不是我。
B说：是C。
C说：是D。
D说：C在胡说
已知3个人说了真话，1个人说的是假话。
现在请根据这些信息，写一个程序来确定到底谁是凶手。
*/
//int main(){
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd';killer ++){
//		if (3 == (killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')){
//			printf("killer = %c\n",killer);
//		}
//	}
//
//	return 0;
//
//}
  //杨辉三角的打印
/*
   1
  1 1
 1 2 1
1 3 3 1
*/
//# define ROW 10 //定义行数
//int main(){
//	int i = 0;
//	int j = 0;
//	int a[ROW][ROW];
//	for (i = 0; i < ROW;i++){
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (i = 2; i < ROW;i++){
//		for (j = 1; j < i;j++){
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	for (i = 0; i < ROW;i++){
//		for (j = 0; j < 2 * (ROW - i); j++){
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++){
//			printf("%5d",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//指针
//内存是电脑上特别重要的存储器，计算机中所有程序的运行都是在内存中进行的
//所以为了有效的使用内存，就把内存划分成一个个小的内存单元，每个内存单元的大小是一个字节
//为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号被称为内存单元的地址


	//static修饰函数
 //声明以下函数
//extern int Add(int a, int b);
//int main(){
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("两数之和为：%d\n",ret);
//
//	return 0;
//}
/*内存分为：栈区：局部变量
            堆区：动态内存分配
			静态区：全局变量、 静态变量

static 修饰局部变量：改变了这个局部变量的生命周期
			*/
 //static修饰全局变量时，只能在自己所在的源文件内部使用，不能在其他原文件内部看到（使用）
//声明外部符号
//extern int g_val;
//int main(){
//	printf("%d\n",g_val);
//	return 0;
//}