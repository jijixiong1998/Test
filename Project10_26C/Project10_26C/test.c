#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�������	  ���ڴ���غ���
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <ctype.h>
//�ַ�������

//11.	   memset
//  void *memset(void *dest,int c(�����õ��ַ�),size_t count);
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memset(arr, 0, 40);
//	return 0;
//}

//12.	memcmp	�ڴ�Ƚϣ����ԱȽ��������͵�����
//int main(){
//
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 3, 3, 3 };
//	int ret = memcmp(arr1,arr2,20);
//	printf("%d\n",ret);
//	return 0;
//}

//9.  �ص�����
//void *my_memove(void *dest,const void * src,size_t count){
//	assert(dest);
//	assert(src);
//	if (dest < src)	{
//	
//	//ǰ����>�󿽱�
//		while (count--){
//			*(char *)dest = *(char *)src;
//			dest = (char *)dest + 1;
//			src = (char *)src + 1;
//			
//		}
//	}
//	else{
//	//�󡪡�>ǰ����
//		/*
//		dest > src
//		1   2           3   4  5         6   7   8	          9
//		��345������678��λ��
//		
//		*/
//		while (count--){
//			*((char *)dest + count) = *((char *)src + count);
//		}
//
//	}
//}

//��
//void my_memove(void * dst,void *src,size_t count){
//	void * ret = dst;
//	if (dst <= src || (char *)dst >= (char *)src + count){
//			 //copy fron lower adresses to high adresses
//		    //non_Overlapping Buffers
//		while (count--){
//			*(char *)dst = *(char *)src;//			dst = (char *)dst + 1;
//			src = (char *)src + 1;
//
//		}
//	}
//	else{
//		 //	Overlapping Buffers
//		//Copy from higher adresses to lower adresses
//		dst = (char *)dst + count - 1;
//		src = (char *)src + count - 1;
//    }
//	return ret;
//}

//int main(){
//		int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//		my_memmove(arr1 + 1,arr1,16);
//		return 0;
//	}
//8. memmove()
//int main(){
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	memmove(arr1 + 1,arr1,16);
//	return 0;
//}

//7.   ģ��ʵ��memcpy
//void *my_memcpy(void *dest,void *src,size_t count){
//	void * ret = dest;
//	assert(dest);
//	assert(src);
//	while (count--){
//	//����һ���ֽ�
//		*(char *)dest = *(char *)src;
//		dest = (char *)dest + 1;	//++(char *)dest;
//		src = (char *)src + 1;
//	}
//	return ret;
//}
//int main(){
//
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[] = { 0 };
//	my_memcpy(arr1,arr2,sizeof(arr1));
//	return 0;
//
//}

//6. memcpy
//void *memcpy(void *dest,const void *src,size_t count)
//����memcpy��src��λ�ÿ�ʼ���ֵcount���ַ������ݵ�dest���ڴ�λ��
//���������������\0����ʱ�򲢲���ͣ����
//strcpy������������\0����ʱ��ͻ�ͣ����
//����src��dest���κε��ص�����ֵ�Ľ������δ����ġ�


//int main(){
//	int arr1[] = {1,2,3,4,5};
//	int arr2[10] = { 0 };
//
//	memcpy(arr2, arr1, sizeof(arr1));
//
	//01 00 00 00  02 00 00 00 00
	//strcpy
	//strcoy������'\0'֮�����ͣ����
	
//	return 0;
//}
//5.int isdigit(int c)
//int  main(){
//	char c = 'Z';
//
//	return 0;
//}




 //4.strerror  :���ش����룬����Ӧ�Ķ������Ϣ
//�����ÿ⺯�����������ʱ�򣬾ͻ���Щ������
//����������errno���ȫ�ֱ�����
//#include <errno.h>
//int main(){
//	//printf("%s\n",strerror(errno));	//No error
//
//	FILE *pf = fopen("test.txt", "r");
//	if (pf == NULL){
//		//printf("%s\n",strerror(errno));
//        //printf("%s\n",perror("����λ�ã�"););
//	}
//	else{
//		printf("�򿪳ɹ���\n");
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}

//3.KMP �㷨

//2.ģ��ʵ��strtsr

//char * my_strstr(const char *str1,const char *str2){
//	assert(str1);
//	assert(str2);
//	 //
//	const char *s1 = str1;
//	const char *s2 = str2;
//	const char *cp = str1;
//
//	if (*s2 == '\0'){
//		return (char*)str1;
//	}
//	while (*cp  != '\0'){
//	//һ��ƥ����ҵĹ���
//		s1 = cp;
//		s2 = str2;
//		while (*s1 != '\0' &&*s2 != '\0' &&*s1 == *s2){
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0'){
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//	    
//}
//int main(){
//
//	char *str1 = "bcdef";
//	char *str2 = "cdef";
//	printf("%s\n",my_strstr(str1,str2));
//}
 //1.strstr
//int main(){
//	char *str1 = "abcdef";
//	char * str2 = "cde";
//	char *ret = (str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}