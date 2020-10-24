#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//字符串函数
//1.长度不受限制的字符串操作函数：strcpy  strcmp  strcat
// char *strcpy(char *strDec,const char *strSrc)

//2.长度受限制的字符串函数：strncpy  strncat  strncmp
//char *strncpy(char *strDec,const char *strSrc,size_t count)

//10.strtok
//char* strtok(char* str,const char* separate)
/*sep参数时个字符串，定义了用作分隔符的字符集合
第一个参数指定一个字符串，它包含了0个或者多个有sep字符串中一个或者多个分隔符分割的标记
strtok函数找到str的下一标记，并将其用 \0  结尾，返回一个指向这个标记的指针，
(注：strtok 函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可以修改。)
 strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串的位置。
 strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
 如果字符串中不存在更多的标记，则返回NULL指针。
 */
int main(){
	//1856554511@qq.com.hah	   分隔符@
	//192.168.100.24   点分十进制
	char arr1[] = "1856554511@qq.com@hah";
	char tmp[30] = { 0 };
	strcpy(tmp,arr1);
	char arr2[] = "@.";

	char *p = NULL;
	for (p = strtok(tmp, arr2); p != NULL;p = strtok(NULL,arr2)){
		printf("%s\n",p);
	}

	/*char* p = strtok(tmp, arr2);
	printf("%s\n",p);

	p = strtok(NULL,arr2);
	printf("%s\n", p);

	p = strtok(NULL,arr2);
	printf("%s\n",p);
	return 0;*/
}

//9.  KMP算法：找子串


// 8.strstr():找子串的函数
// char * strstr(const char *,const char *)
//int main(){
//	char arr[] = "abcabcdef";
//	char * ret = strstr(arr,"abcd");
//	if (ret !=NULL){
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//7. 比较函数strncmp  
//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "abdeee";
//	int ret = strncmp(arr1,arr2,5);
//	printf("%d\n", ret);
//	return 0;
//}

//6. 判断一个字符串是不是另外一个字符串旋转得来的
	//方法2	  :
//int main(){
//	char arr1[20] = "abcdef";
//	char arr2[] = "bcdefa";
//	if (strlen(arr1) != strlen(arr2)){
//		printf("NO\n");
//	}							 //对字符串长难度进行判断，进行旋转前后，字符串的长度相等
//	strncat(arr1, arr1, 6);	 
//		char *ret = strstr(arr1,arr2);
//		if (ret ==NULL){
//			printf("NO\n");
//		}
//		else{
//			printf("YES\n");
//		}
	//库函数strstr():
	//abcdef		//abcdefabcdef
	//bcdefa		 //子串
	//cdefab
	//defabc
	//efabcd
	//fabcde

//	return 0;
//}
//方法1  :穷举法，，将结果全部罗列出来，在进行比较

//void left_move(char *str, int n){
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < n; i++){
//
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++){
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main(){
//	char arr1[20] = "abcdef";
//	char arr2[] = "cdefaq";//判断arr2是不是字符串arr左旋转两个字符得来的
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len;i++){
//		left_move(arr1,1);
//		if (strcmp(arr1, arr2) == 0){
//			printf("YES\n");
//			break;
//		}
//	}
//	if (i == len){
//		printf("NO\n");
//	}
//	
//	return 0;
//}

//abcdef
//bcdefa
//cdefab

//int main(){
//	
//	char arr[] = "abcdef";
//	
//	//左旋转函数，左旋转两个字符
//	left_move(arr,2);
//	printf("%s\n", arr);
//return 0;
//}

//5.strncat
//cahr * strncat(char *dst,const char *src,size_t num);
//int main(){
//	char arr[20] = "hello";
//	char arr2[] = "jijixiong";
//	strncat(arr,arr2,5);
//	printf("%s\n",arr);
//	return 0;
//}


//4.1库中对strncpy函数的实现
//char *my_strncpy(char *dst, const char *src, size_t count){
//	char *start = dst;
//	while (count && (*dst ++ = *src ++)){	   //copy  string
//		count--;
//	}
//	if (count){					//pad out with zeros。用0填充
//		while (--count)
//			*dst++ = '\0';
//	}
//	return start;
//}
//4.   strncpy
//char *strncpy(char *dst,const char *src,size_t num);
//拷贝num个字符从源字符串到目标空间
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加\0，直到num个
//int main(){
//	char arr1[20] = { 0 };
//	char arr2[] = "hello jijixiong";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n",arr1);
//	return 0;
//}
  //3.1模拟实现strcmp函数
//方法2 :库中的实现
//int my_strcmp(const char * src,const char * dst){
//	int ret = 0;
//	while(!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst == '\0'){	//字符串相等(即相减为0)，且遇到‘\0’，则结束
//		++src;
//		++dst;
//	}
//	if (ret < 0){
//		ret = -1;
//	}
//	else if (ret > 0){
//		return 1;
//	}
//	return ret;
//}
//方法1
//int my_strcmp(const char *str1,const char *str2){
//	//abc \0
//	//abc  \0
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2){
//		if (*str1 == '\0')
//			return 0;
//			str1++;
//			str2++;
//		
//	}
//	/*if (*str2 > str2){
//		return 1;
//	}
//	else {
//		return - 1;
//	}*/
//	return *str1 - *str2;
//}
//int main(){
//	int ret = my_strcmp("abcd", "abcd");
//	if (ret < 0){
//	
//		printf("字符串1小于字符串2！\n");
//	}
//	else if (ret == 0){
//		printf("字符串1等于字符串2！\n");
//	}
//	else if (ret > 0){
//		printf("字符串1大于字符串2！\n");
//	}
//	return 0;
//}
//3. strcmp()	
/*
标准规定：
第一个字符串大于第二个字符串，则返回大于0的数字
第一个字符串等于第二个字符串，则返回0
第一个字符串小于第二个字符串，则返回小于0的数字

*/
//int strcmp(const char *str1,const char *src2);
//int main(){
//	int ret = strcmp("hello","haha");
//	//printf("%d\n", ret);	 //1
//	if (ret < 0){
//		printf("字符串1小于字符串2！\n");
//	}
//	else if (ret == 0){
//		printf("字符串1等会字符串2！\n");
//
//	}
//	else if (ret > 0){
//		printf("字符串1大于字符串2！\n");
//	}
//	return 0;
//}
//2.3strcat()函数不能完成自己给自己追加，因为再追加时会覆盖掉‘\0’, 从而一直在追加，找不到‘\0’，程序崩溃
//int main(){
//	char arr[20] = "hello";
//	strcat(arr, arr);
//	return 0;
//}

//2.2 模拟实现strcat
//char * my_strcat(char *dest,const char *src){
//	char * ret = dest;
//
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1.找目的地空间的‘\0'
//	/*while (dest){}*/
//	while (*dest != '\0'){
//		dest++;
//	}
//	//2.拷贝数据
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//}
//int main(){
//	char arr1[20] = "hello";	   
//	char arr2[20] = "jijixiong";
//		/*my_strcat(arr1,arr2);
//		printf("%s\n",arr1);*/
//	//链式访问
//	printf("%s\n",my_strcat(arr1,arr2));
//		return 0;
//}
//2. 字符串拼接函数strcat()
//char *strcat(char *dest,const chara * src);
//int main(){
//	char arr1[20] = "hello";
//	char arr2[20] = "jijixiong";
//	strcat(arr1, arr2);
//
//	printf("%s\n",arr1);
//	
//	return 0;
//}

//1.1模拟实现strcpy()函数
//strcpy函数能把src复制到dest,为什么还需要char *类型的返回值
//为了实现链式访问的效果
//char * my_strcpy(char *dest, const char *src){
//	char *ret = dest;
//	assert(dest);
//	assert(src);
//	//拷贝字符串内容
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//	/*while (*src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest =*src;	   //拷贝‘\0’
//	*/
//}
//int main(){
//	char *str = "jijixiong";
//	char arr[20] = { 0 };
//
//	/*my_strcpy(arr,str);
//	printf("%s\n", arr);*/
//
//	printf("%s", my_strcpy(arr, str));
//
//	return 0;
//}
//1.字符串拷贝：char *strcpy(char *dest,const char *src)
//源字符串必须以‘\0’结束，会将源字符串的‘\0’拷贝到目标空间
//int main(){
//	char *str1 = "jijixiong";
//	char arr[20] = { 0 };
//
//	strcpy(arr, str1);
//	printf("%s\n",arr);
//
//	return 0;
//}