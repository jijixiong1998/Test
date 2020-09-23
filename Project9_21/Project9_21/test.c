#define _CRT_SECURE_NO_WARNINGS 1

# include <stdio.h>
# include <string.h>
# include <assert.h>

//对其使用const和assert进行优化
int my_strlen(const char* str){

	assert(str != NULL);

	int count = 0;
	while (*str != '\0'){
		*str++;
		count++;
	}
	return count;
}
//模拟实现strlen()函数
/*
int my_strlen(char *str){
	int count = 0;
	while (*str != '\0'){
		*str++;
		count++;
	}
	return count;
}
*/
int main(){
	char arr1[] = "hello";
	int len = my_strlen(arr1);
	printf("%d\n",len);
	return 0;
}
//strlen()函数
//int main(){
//	int len = strlen("abc");
//	printf("%d\n",len);
//	return 0;
//}
  /*
int main(){
	 //const修饰指针的时候，
	// const放在 * 的左边，表示指针指向的内容(*p)不能通过指针(p)来改变,但是指针变量(p)本身是可以改变的
	//const放在 * 的右边，表示指针指向的内容(*p)可以通过指针(p)来改变，但是指针变量(p)本身是不可以修改的
	const int num = 20;
	int n = 20;
	int const *p = &num;
	//*p = 20;
	p = &n;
	printf("%d\n", num);
		return 0;
  
}
*/
//const 保护指针的安全，使用const可使得指针变量不可以随意修改
//char * my_strcpy(char *dest,const char *src){
//   char* ret = dest;
//	//assert-断言-<assert.h>
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//}
//int main(){
//	char arr1[] = "hello";
//	char arr2 = "XXXXXXX";
//	char *p = NULL;
//	my_strcpy(p,arr1);
//	printf("%s\n",arr1);
//	return 0;
//}

//查看该程序的输出结果，分析其原因
//产生死循环
//内存中栈区的使用习惯：先使用高地址空间，再使用低地址空间
//数组：随着下标的增长，地址由低到高
//数组越界访问，使得i的地址与arr[12]的地址相同，使得i的值有变为0，从而导致死循环
  
//int main(){
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//
//}

//面试题讲解： 在linux x86_64 gcc 环境下，下面的程序会出现什么问题，运行结果即原因
//int main(){
//	long i;
//	long a[16];
//
//	for (i = 0; i <= 17;i ++){
//		a[i] = 0;
//		printf("%d",i);
//	}
//	return 0;
//}

//调试：查看调用堆栈
//void test2(){
//	printf("test2()\n");
//}
//void test1(){
//	test2();
//}
//void test(){
//	test1();
//}
//int main(){
//	test();
//	return 0;
//}
//调试：查看变量、监视、反汇编、
//int main(){
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i < 10;i++){
//		arr[i] = 0;
//	}
//	return 0;
//}

//模拟实现strcpy
//void my_strcpy(char *dest, char *src){
//	//1.
//	/*
//	while (*src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;	\
//		//拷贝字符串不包含'\0'
//	}
//	//拷贝字符串'\0'
//	*dest = *src;
//	*/
//	//2.对其进行优化
//	/*
//	while (*src != '\0'){
//		*dest++ = *src++;
//	}
//	return 0;
//	*/
//	//3.进一步优化
//	//c语言中'\0 '的ASCII码值为0，可将其作为进入循环的判断条件
//	while (*dest++ = *src++){
//		;
//	}
//	return 0;
//}
//
//int main(){
//	char arr1[] = "hello";
//	char arr2[20] = { 0 };
//	//my_strcpy()函数：模拟实现strcpy()
//	my_strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}
//字符串拷贝：strcpy(char * dest,char *src);
//int main(){
//	char arr1[] = "hello";
//	char arr2[] = { 0 };
//	strcpy(arr2,arr1);
//	printf("%s",arr2);
//
//	return 0;
//}


//	计算1 ！ + 2 ！ + 3！ + ....n!,不考虑溢出
//int main(){
//	int n = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n;i++){
        //n!
//		for (j = 1; j <= i;j++){
//			ret = ret *j;
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("该数的阶乘之和为sum = %d\n",sum);
//
//	return 0;
//}

//int main(){
//	int a = 14;
//	a |= (1 << 4);
//	printf("%d\n",a);
//	return 0;
//}