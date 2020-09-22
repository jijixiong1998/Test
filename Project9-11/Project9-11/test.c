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

//sizeof() :操作数的类型长度(以字节为单位)
//int main(){
//	int a = 10;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算数组的总大小，单位是字节
//	printf("%d\n",sizeof(int[10]));		  //40
//	printf("%d\n",sizeof(a));				//4
//	printf("%d\n",sizeof(int));				   //4
//	return 0;
//}

 //&  取地址
// * 间接访问操作符(解引用操作符)
//int main(){
//	int a = 10;			 //4个字节的空间
//	int * pa = &a;		//指针变量
//	*pa = 20;		    //* 解引用操作符
//	printf("a的值为： %d\n", a);
//	return 0;
//}

// 编写代码实现：求一个整数存储在内存中的二进制中1的个数
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
//	printf("二进制中1的个数为： %d\n",ret);
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
//	printf("二进制数中1的个数为: %d\n", ret);
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
//		printf("二进制中1的个数 = %d",count);
//	}
//}

 //不能创建临时变量(第三个变量)，实现两个数的交换
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

  //按位异或  :对应的二进制位，相同为0，相异为1
//int main(){
//	int a = 3;		  //0011
//	int b = 5;		  //0101
//	int c = a ^b;	  //0110
//	printf("%d\n",c);  //6
//	return 0;
//}



//int main(){
//	//按(二进制)位与——&
	//按(二进制位)位或

	//int a = 3;			//0011
	//int b = 5;		    //0101

//	int c = a & b;		//0001
//	printf("%d\n",c);	//1
	//int c = a | b;
	//printf("%d\n",c);	//7
	//return 0;
//}
//移位操作符
//>>  右移操作符
//<<  左移操作符	 :移动的是二进制位

//int main(){
	//整数存放在内存中的时候，放的是二进制
	//整数的二进制形式有三种：原码，反码，补码
	//-1
	//原码——1000 0000 0000 0000 0000 0000 0000 0001
	//反码——1111 1111 1111 1111 1111 1111 1111 1110
	//补码——1111 1111 1111 1111 1111 1111 1111 1111
	/*int a = -1;
	int b = a >> 1;
	printf("%d\n", b);
	return 0;
}*/
//int main(){
//	int a = 7;
//	//右移操作符：
//	//算术右移：右边丢弃，左边补原符号位
//	//逻辑右移：右边丢弃，左边补0
//	int b = a >> 1;	   
//	printf("%d\n",b);
//	return 0;
//}


//int main(){
//	int a = 7;		// 0000 0000 0000 0000 0000 0000 0000 0111
//	int b = a << 1;		//左移操作符：左移一位，左边丢弃，右边补0；
//	printf("%d\n",b);  //14
//	return 0;
//}