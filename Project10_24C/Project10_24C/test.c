#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>
//�ַ�������
//1.���Ȳ������Ƶ��ַ�������������strcpy  strcmp  strcat
// char *strcpy(char *strDec,const char *strSrc)

//2.���������Ƶ��ַ���������strncpy  strncat  strncmp
//char *strncpy(char *strDec,const char *strSrc,size_t count)

//10.strtok
//char* strtok(char* str,const char* separate)
/*sep����ʱ���ַ����������������ָ������ַ�����
��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı��
strtok�����ҵ�str����һ��ǣ��������� \0  ��β������һ��ָ�������ǵ�ָ�룬
(ע��strtok ������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ����޸ġ�)
 strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ�����λ�á�
 strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
 ����ַ����в����ڸ���ı�ǣ��򷵻�NULLָ�롣
 */
int main(){
	//1856554511@qq.com.hah	   �ָ���@
	//192.168.100.24   ���ʮ����
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

//9.  KMP�㷨�����Ӵ�


// 8.strstr():���Ӵ��ĺ���
// char * strstr(const char *,const char *)
//int main(){
//	char arr[] = "abcabcdef";
//	char * ret = strstr(arr,"abcd");
//	if (ret !=NULL){
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//7. �ȽϺ���strncmp  
//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "abdeee";
//	int ret = strncmp(arr1,arr2,5);
//	printf("%d\n", ret);
//	return 0;
//}

//6. �ж�һ���ַ����ǲ�������һ���ַ�����ת������
	//����2	  :
//int main(){
//	char arr1[20] = "abcdef";
//	char arr2[] = "bcdefa";
//	if (strlen(arr1) != strlen(arr2)){
//		printf("NO\n");
//	}							 //���ַ������ѶȽ����жϣ�������תǰ���ַ����ĳ������
//	strncat(arr1, arr1, 6);	 
//		char *ret = strstr(arr1,arr2);
//		if (ret ==NULL){
//			printf("NO\n");
//		}
//		else{
//			printf("YES\n");
//		}
	//�⺯��strstr():
	//abcdef		//abcdefabcdef
	//bcdefa		 //�Ӵ�
	//cdefab
	//defabc
	//efabcd
	//fabcde

//	return 0;
//}
//����1  :��ٷ����������ȫ�����г������ڽ��бȽ�

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
//	char arr2[] = "cdefaq";//�ж�arr2�ǲ����ַ���arr����ת�����ַ�������
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
//	//����ת����������ת�����ַ�
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


//4.1���ж�strncpy������ʵ��
//char *my_strncpy(char *dst, const char *src, size_t count){
//	char *start = dst;
//	while (count && (*dst ++ = *src ++)){	   //copy  string
//		count--;
//	}
//	if (count){					//pad out with zeros����0���
//		while (--count)
//			*dst++ = '\0';
//	}
//	return start;
//}
//4.   strncpy
//char *strncpy(char *dst,const char *src,size_t num);
//����num���ַ���Դ�ַ�����Ŀ��ռ�
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��\0��ֱ��num��
//int main(){
//	char arr1[20] = { 0 };
//	char arr2[] = "hello jijixiong";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n",arr1);
//	return 0;
//}
  //3.1ģ��ʵ��strcmp����
//����2 :���е�ʵ��
//int my_strcmp(const char * src,const char * dst){
//	int ret = 0;
//	while(!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst == '\0'){	//�ַ������(�����Ϊ0)����������\0���������
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
//����1
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
//		printf("�ַ���1С���ַ���2��\n");
//	}
//	else if (ret == 0){
//		printf("�ַ���1�����ַ���2��\n");
//	}
//	else if (ret > 0){
//		printf("�ַ���1�����ַ���2��\n");
//	}
//	return 0;
//}
//3. strcmp()	
/*
��׼�涨��
��һ���ַ������ڵڶ����ַ������򷵻ش���0������
��һ���ַ������ڵڶ����ַ������򷵻�0
��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������

*/
//int strcmp(const char *str1,const char *src2);
//int main(){
//	int ret = strcmp("hello","haha");
//	//printf("%d\n", ret);	 //1
//	if (ret < 0){
//		printf("�ַ���1С���ַ���2��\n");
//	}
//	else if (ret == 0){
//		printf("�ַ���1�Ȼ��ַ���2��\n");
//
//	}
//	else if (ret > 0){
//		printf("�ַ���1�����ַ���2��\n");
//	}
//	return 0;
//}
//2.3strcat()������������Լ����Լ�׷�ӣ���Ϊ��׷��ʱ�Ḳ�ǵ���\0��, �Ӷ�һֱ��׷�ӣ��Ҳ�����\0�����������
//int main(){
//	char arr[20] = "hello";
//	strcat(arr, arr);
//	return 0;
//}

//2.2 ģ��ʵ��strcat
//char * my_strcat(char *dest,const char *src){
//	char * ret = dest;
//
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1.��Ŀ�ĵؿռ�ġ�\0'
//	/*while (dest){}*/
//	while (*dest != '\0'){
//		dest++;
//	}
//	//2.��������
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
//	//��ʽ����
//	printf("%s\n",my_strcat(arr1,arr2));
//		return 0;
//}
//2. �ַ���ƴ�Ӻ���strcat()
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

//1.1ģ��ʵ��strcpy()����
//strcpy�����ܰ�src���Ƶ�dest,Ϊʲô����Ҫchar *���͵ķ���ֵ
//Ϊ��ʵ����ʽ���ʵ�Ч��
//char * my_strcpy(char *dest, const char *src){
//	char *ret = dest;
//	assert(dest);
//	assert(src);
//	//�����ַ�������
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//	/*while (*src != '\0'){
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest =*src;	   //������\0��
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
//1.�ַ���������char *strcpy(char *dest,const char *src)
//Դ�ַ��������ԡ�\0���������ὫԴ�ַ����ġ�\0��������Ŀ��ռ�
//int main(){
//	char *str1 = "jijixiong";
//	char arr[20] = { 0 };
//
//	strcpy(arr, str1);
//	printf("%s\n",arr);
//
//	return 0;
//}