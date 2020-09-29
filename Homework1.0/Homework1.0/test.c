#define _CRT_SECURE_NO_WARNINGS 1
//作业   :小程序的练习
# include <stdio.h>
# include <math.h>


//9_22作业
//2.调整奇偶数顺序
//输入一个整数数组，实现一个函数，调整数组使奇数全部都位于偶数前面
//void move_arr(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right){
//		//从左边找一个偶数
//		while ((left < right) && (arr[left] % 2 == 1)){
//			left++;
//		}
//		//从右边找一个奇数
//		while ((left < right) && (arr[right] % 2 == 0)){
//			right--;
//		}
//		if (left < right){
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = arr[left];
//		}
//	}
//}
//void print_arr(int arr[],int sz){
//	int i = 0;
//	for (i = 0; i < sz - 1;i++){
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//	int main(){
//		int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//		int sz = sizeof(arr) / sizeof(arr[0]);
//
//		print_arr(arr, sz);
//		move_arr(arr, sz);
//		print_arr(arr, sz);
//		return 0;
//	}
//1.  模拟实现strlen()函数和strcpy函数


//9-18作业

//4. 喝汽水问题
//喝汽水，1瓶汽水1元钱，2个空瓶可以换1一瓶汽水，给20元，问可以喝到多少瓶汽水。	 39瓶
//int main(){
//	int money =0;
//	int total = 0;
//	int empty = 0;
//
//	printf("请输入您的钱数：");
//	scanf("%d", &money);
//	//解法1	
//	if (money == 0){
//		total = 0;
//	}
//	else{
//		total = money * 2 - 1;
//	}
//	
//	/*
//	//解法2
//	total += money;		   //买的汽水
//	empty = money;
//
//	while (empty >= 2){
//		total += empty / 2;	//换回来的汽水，喝掉了
//		empty = empty / 2 + empty % 2; //计算手里的空瓶
//	}
//	*/
//	printf("可以喝到的汽水数total= %d\n",total);
//	return 0;
//}

//3.程序的输出结果是：  wang
//struct stu{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p){
//	printf("%s\n",(*p).name);
//}
//int main(){
//	struct stu students[3] = { { 9801, "zhhang", 20 }, { 9802, "wang", 19 }, { 9803, "zhao", 18 } };
//	fun(students + 1);			  //wang
//	return 0;
//}

//2. 输出结构体成员a的数据
//struct S{
//	int a;
//	int b;
//};
//int main(){
//	struct S a;
//	struct S *p = &a;	  //struct S a, *p = &a;
//	a.a = 99;
//	printf("%d\n",a.a);	  //(*p).a	  == a.a   == p->a
//
//	return 0;
//}

//1.结构体的两种定义:
//struct student{
//
//	int num;
//	int name[32];
//	float score;
//}stu;//stu是结构体变量名
//
//typedef struct student{
//	int num;
//	char name[32];
//	float scorer;
//}stu;//结构体类型名
//
//int main(){
//	return 0;
//}



//9-16作业

//8.打印菱形
/*
   * 
  ***
 *****
*******
 *****
  ***
   *
*/
//int main(){
//	int line = 0;
//	int i = 0;
//	scanf("%d",&line);
//	//上半部分：
//	for (i = 0; i < line;i++){
//	//打印一行：打印空格，在打印*
//		int j = 0;
//		for (j = 0; j < line - 1 - i;j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1;i++){
//	//打印一行：先打印空格，在打印*
//		int j = 0;
//		for (j = 0; j <=i ;j++){
//			printf(" ");
//		}
//		for (j = 0; j < (line - 1-i) * 2-1;j++){
//			printf("*");
//		}	
//		printf("\n");
//	}
//	return 0;
//}
//7. 打印水仙花数
//求出0 ~100000 之间的所有水仙花数
  //水仙花数是指一个n位数，其各位数字的n次方之和恰好等于该数本身，如153 = 1^3 + 5^3 + 3^3;则153是一个水仙花数

//int main(){
//	int i = 0;
//	for (i = 0; i < 100000;i++){
//	//判断i是否为自幂数
//		//1.计算i的位数——n
//		int tmp = i;
//		int count = 1;
//		int sum = 0;
//		while (tmp /= 10){
//			count++;
//		}
//		//2.获得i的每一位，计算每一位的n次方和
//		tmp = i;
//		while (tmp){
//		sum +=	pow(tmp % 10,count);
//		tmp /= 10;
//		}
//		//3.比较打印
//		if (i == sum){
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}

//6.计算求和
//求Sn = a + aa + aaa + aaaa + aaaaa;的前五项之和，其中a是一个数字；如 2 + 22 + 222 + 2222 + 22222
//int main(){
//	int a = 0;
//	int n = 0;
//	scanf("%d%d",&a,&n);
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//	for (i = 0; i < n;i++){
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d",sum);
//	return 0;
//}

//5.字符串逆序
//写一个函数，可以逆序一个字符串的内容。
//void reverseStr(char* str){
//	int len = strlen(str);	//求出字符串的长度
//	char *left = str;		  //左边字符指针
//	char *right = str + len - 1;	 //右边字符指针 = 数组首元素地址 + 字符串长度 - 1
//
//	while (left < right){
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//		
//	}
//
//}
//int main(){
//	char arr[100] = {0};
//	printf("请输入字符串：");
//	//scanf("%s",arr);	scanf()函数：遇到空格就不在往后读取内容了
//	gets(arr);	   //gets()函数：读取一行，有空格也读取内容
//	reverseStr(arr);
//	printf("逆序后的字符串为：%s\n", arr);
//	return 0;
//}

//4. 使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整型一维数组
//void print(int *p,int sz){
//	int i = 0;
//	for (i - 0; i < sz;i++){
//		//printf("%d ", *(p + i));或者
//		printf("%d ", *p);	//或者 pintf("%d ",*p++);
//		p++;
//	
//	}																	   
//}
//int main(){
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//3. 求程序输出结果
//int main(){
//	int a = 0x11223344;
//	char *pc = (char *)&a;
//	*pc = 0;
//	printf("%x\n",a);	   //11223300
//	return 0;
//}

//2.程序输出结果为：  6,12
//int main(){
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d %d\n",*pulPtr,*(pulPtr + 3));	 //6 12
//	return 0;
//}
//
//1.程序输出结果为：0  0  3  4  5
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5 };	  
//	short *p = (short *)arr;
//	int i = 0;
//	for (i = 0; i < 4;i++){
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5;i++){
//		printf("%d ",arr[i]);	
//	}
//	return 0;
//}