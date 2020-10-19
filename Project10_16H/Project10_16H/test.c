#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
# include <math.h>
#include <string.h>
/*
arr——数组首元素的地址
&arr——数组的地址
arr + 1 :跳过一个元素
&arr + 1:跳过整个数组
[]的优先级要高于*号，所以必须加上()来保证p先和* 结合
指针就是一个变量，用来存放地址，地址唯一标识一块内存空间
指针的大小是固定的4/8个字节(32位平台/64位平台)
指针是有类型，指针的类型决定了指针的 +-整数的步长，指针解引永固操作的时候的权限。

*/
//13.回调函数：
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
//12. 计算器
//函数指针的数组的应用	  ——优化——简化冗余代码
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
//	//函数指针的数组
//	//int(*func_arr[])(int int)
//	p_func func_arr[4] = { add, sub, mul, div };
//		int x, y;
//		int input = 1;
//		int ret = 0;
//		do{
//			printf("********计算器********\n");
//			printf("1.add            2.sub\n");
//			printf("3.mul            4.div\n");
//			printf("**********************\n");
//			printf("请选择：");
//			scanf("%d", &input);
//
//			printf("请输入两个数：");
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
//		printf("********计算器********\n");
//		printf("1.add            2.sub\n");
//		printf("3.mul            4.div\n");
//		printf("***** 0.退出计算器****\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("请输入两个数：");
//			scanf("%d %d",&x,&y);
//			ret = add(x, y);
//			printf("ret = %d\n",ret);
//			break;
//
//		case 2:
//			printf("请输入两个数：");
//			scanf("%d  %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//
//		case 3:
//			printf("请输入两个数：");
//			scanf("%d  %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//
//		case 4:
//			printf("请输入两个数：");
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

//11.函数指针的数组：把函数的地址存到一个数组中
//int(*parr1[10])();	//parr1先和[]结合，说明parr1是数组，数组的内容是int(*)()类型的指针

//10.  
/**
int main(){
void(*pfun1)();//函数指针：pfun1先和*结合，说明pfun1是指针，指针指向的是一个函数，指向的函数无参数，返回值类型为void
void *pfun2();   //函数声明	,函数的返回值类型是void *

(*  (void(*)())  0)(); 	//将0强制类型转换为函数指针，再解引用  ，当成函数去调用，此时运行会崩溃，出现空指针访问
void(*    signal(int ,void(*)(int))   ) (int); //	函数声明,这个函数的返回值是函数指针
//					  参数列表				   参数
//		返回值:函数指针void(*)(int)
//将其简化为：
typedef void(*pfunc_t)(int);
pfunc_t sinal(int, pfunc_t);

return 0;
}
*/



//9.排序


/**
int greater(int x1,int x2){
return (x1 > x2 ? 1 : 0);
}
int less(int x1,int x2){
return (x1 < x2 ? 1 : 0);
}
//p_compare函数指针
void bubble_sort(int *arr,int sz,int(*p_compare)(int ,int)){
for (int i = 0; i < sz - 1; i++){
for (int j = 0; j < sz - 1 - i; j++){

//if(arr[j] > arr[j + 1])
//调降序less()函数进行排序
//if (less(arr[j] ,arr[j + 1])){

//调升序函数greater()进行排序
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

//降序
bubble_sort(arr,sz,less);
printf("降序序列为：");
for (int i = 0; i < sz;i++){
printf("%d ",arr[i]);
}

printf("\n");

//升序
bubble_sort(arr,sz,greater);
printf("升序序列为：");
for (int i = 0; i < sz - 1;i++){
printf("%d ",arr[i]);
}
printf("\n");
return 0;
}

*/
//冒泡排序
//排序函数
//void bubble_sort(int *arr, int sz){
//void bubble_sort(int arr[],int sz){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz- 1;i++){
//		for (j = 0; j < sz - 1 - i;j++){
//			//升序
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
////打印函数
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

//10.	 字符串旋转结果
/*
给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
思路1：将所有旋转后的结果放到一个数组里，然后进行查找，但是这种做法既不好操作，

思路2：其实ABCDE无论怎么旋，旋转后的所有结果，都包含在了ABCDEABCD这个字符串里了。
所以做法很简单，只需要将原字符串再来一遍接在后面，
然后找一找待查找的字符串是不是两倍原字符串的子集即可。
int findRound(const char * src, char * find)
{
char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
strcpy(tmp, src); //先拷贝一遍
strcat(tmp, src); //再连接一遍
return strstr(tmp, find) != NULL; //看看找不找得到
}
*/

//如果是旋转字符串  返回1  , 不是 则返回0
//int Isrotatingstr(char arr[], char str[]) {
//	char arr1[1024] = { 0 };
//	strcpy(arr1, arr);          //字符串复函数 , 把后面的字符串(arr)  赋值给  前面的字符数组(arr1)
//	strcat(arr1, arr);          //字符串连接函数 , 吧arr 连接在arr1的后面  
//	int ret = strstr(arr1, str);//判断arr 是不是 arr1 的子串  如果没有返回NULL
//	if (ret == NULL) {
//		return 0;
//	}
//	return 1;
//}
int findRotateStr(char arr[], char find[]){
	char tmp[1024] = { 0 };//辅助空间存放两倍的原字符串 ；
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
	char find[] = "BCDEFA";//待判断的字符串
	int ret = findRotateStr(arr, find);
	if (ret == 1){
		printf("str是arr的旋转字符串!\n");
	}

	else if (ret == 0){
		printf("str不是arr的旋转字符串！\n");
	}

	return 0;
}
//10_18
//9.	有36匹马，6个跑道，没有计时器等设备，用最少的比赛次数算出跑的最快的3匹马	//8c
/*

*/

//8.  烧香问题：有两根不均匀分布的香，每根香烧完的时间是1个小时，请用两根香确定一段15分钟的时间
/*
思路：从香的两端开始点燃，可确定一段30分钟的而时间
一根香燃烧的总时间是60分钟，可以用另一根香先确定30分钟，
然后再把另一根香的两头都点燃，则此时再燃烧完就正好是15分钟了
同时点两头就是半小时烧完
具体步骤：
点燃第一根香的两端和第二根香的一段；
等第一根香燃尽以后，把第二根香的另一端点燃，
从第一根香燃尽开始算起，知道第二根香燃尽，正好是15分钟
*/

//7.猜名次：5位运动员参加了10米跳水表死啊，有人让他本预测比赛结果：
/*
A选手说：B第二，我第三
B选手说：我第二，E第三
C选手说：我第一，D第二
D选手说：C最后，我第三
E选手说：我第四，A第一
比赛结束后，每位选手都说对了一半，请编确定比赛名次
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

//6.猜凶手
/*
日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
以下为四个嫌疑犯的供词：
A说：不是我；
B说：是C
C说：是D
D说：C在胡说
已知3个人说了真话，1个人说的是假话
现在请根据这些信息，写一个程序来确定到底谁是杀手

*/

//int main(){
//	int killer = 'a'; 
//	for (killer = 'a'; killer <= 'd';killer++){
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3){
//			printf("凶手是：%c\n", killer);
//		}
//	}
//	return 0;
//}
//5.打印杨辉三角


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
1 4 6 4 1	 //第一列为1，对角线也全为1

*/
//int main(){
//	int arr[100][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	printf("请输入需要打印的行数：");
//	scanf("%d",&n);
//	for (i = 0; i < n;i++){
//		for (j = 0; j < n;j++){
//			if (i == j)		  //将对角线赋值为1
//				arr[i][j] = 1;
//			if (j == 0)			 //将第1列赋值为1
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
//3.  在32位大端模式处理器上变量b等于	0x 00
//unsigned int a = 0x1234;				//0x 00  00  12  34
//unsigned char b = *(unsigned char *)&a;

//2. 程序运行结果：
//int main(){
//	//整型提升；
//	//有符号数按照符号位进行提升
//	//无符号位数提升：补0
//	unsigned char a = 200;	   //1100 1000
//	unsigned char b = 100;	   //0110 0100
//	unsigned char c = 0;
//	c = a + b;				   //1 0010 1100
//	printf("%d %d",a + b,c);		  // 300   44
//	return 0;
//}
//1.大小端字节序  ：指的是将数据在电脑上存储的字节顺序
//大端字节序列：是将数据的低位存储在高地址处，将数据的高位存储在低地址处。
//小端字节序：将数据的低位存储在低地址处，将数据的高位存储在高字节处。
//例如  0x  11  22   33  44
//低地址            高地址
//小端存储	 44   33   22   11
// 大端存储   11   22   33   44