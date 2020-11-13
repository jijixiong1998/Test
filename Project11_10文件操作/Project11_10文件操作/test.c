#define _CRT_SECURE_NO_WARNINGS 1
//�ļ�����
#include <stdio.h>
#include <stdlib.h>
//7.�ļ������ж�
	/**
	���ļ���ȡ�����У�����ʹ��feof�����ķ���ֱֵ�������ж��ļ����Ƿ������
	����Ӧ���ڵ��ļ���ȡ������ʱ���ж��Ƕ�ȡʧ�ܽ������������ļ�β������

		��1���ı��ļ��Ƿ��ȡ�����жϷ���ֵ�Ƿ�ΪEOF(fgetc),����NULL(fgets)��
				���磺
				    fgetc�ж��Ƿ�ΪEOF
					fgets�ж�	����ֵ�Ƿ�ΪNULL
		��2���������ļ��Ķ�ȡ�����жϣ��жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
				���磺
						fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
	
	*/
//(1)�ı��ļ�������
//int main(){
//	int c;
//	FILE * pfile = fopen("test.txt","r");
//	if (!pfile){
//	
//		perror("file opening failed!");
//		return EXIT_FAILURE;
//	}
//	//fgetc��ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(pfile)) != EOF){
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(pfile)){
//		puts("I\O error when reading");
//	}
//	else if (feof(pfile)){
//		puts("End of file reached successfully");
//	}
//	fclose(pfile);
//	return 0;
//}
//(2)�������ļ�������
enum{ SIZE = 5 };
int main(){
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin","wb");
	fwrite(a,sizeof(*a),SIZE,fp);
	//��double������
	while ((ret_code = fread(&b,sizeof(double),1,fp)) >= 1){
		printf("%lf\n", b);
	}
	if (feof(fp)){
		printf("Error reading test.bin:unexpected end of file\n");
	}
	else if (ferror(fp)){
		printf("Error reading text.bin");
	}
	fclose(fp);
	return 0;
}

//6.�ļ��������д��
//(1)fseek:�����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ�롣
//int fseek(FILE *stream,long int offset,int origin) ;
//int main(){
//	FILE * pfile;
//	pfile = fopen("example.txt","wb");
//	fputs("jijixiong,jiijixiong",pfile);
//	fseek(pfile, 9, SEEK_SET);
//	fputs("haha", pfile);
//	fclose(pfile);
//	return 0;
//}
//
//(2)ftell:�����ļ�ָ���������ʼλ�õ�ƫ������
//long int ftell(FILE* stream);
//int main(){
//	FILE * pfile;
//	long size;
//	pfile = fopen("myfile.txt","rb");
//	if (pfile = NULL){
//		perror("Error opening file");
//	}
//	else{
//		fseek(pfile,0,SEEK_SET);
//		size = ftell(pfile);
//		fclose(pfile);
//		printf("size of myfile.txt:%ld bytes.\n",size);
//	}
//	return 0;
//}
//
//(3)rewind:���ļ�ָ���λ�ûص� �ļ�����ʵλ��
//void rewind(FILE * stream)
//int main(){
//
//	int n;
//	FILE * pfile;
//	char buffer[27];
//	pfile = fopen("myfile.txt", "w+");
//	for (n = 'A'; n <= 'Z'; n++)
//		fputc(n, pfile);
//	rewind(pfile);
//	fread(buffer,1,26,pfile);
//	fclose(pfile);
//	buffer[26] = '\0';
//	puts(buffer);
//	return 0;
//}
//5. �ļ���˳���д��
	/**
	�ַ�����\���������	fgetc fputc
	�ı������롢���������fgets fputs
	��ʽ�����롢���������fscanf fprintf
	���������롢���������fread fwrite

	*/


//4. �ļ��Ĵ򿪺͹ر�  ����д֮ǰӦ���ȴ��ļ�����ʹ�ý���֮��Ӧ�ùر��ļ���
//�ڱ�д�����ʱ���ڴ��ļ��Ķ�ͬʱ�����᷵��һ��FILE*��ָ�����ָ����ļ���Ҳ�൱�ڽ�����ָ����ļ��Ĺ�ϵ��
//ANSIC�涨 ʹ��fopen���������ļ���fclose�ر�
//	/*FILE* fopen(const char* filename, const char * mode);
//	int flose(FILE* name);*/

//3. �ļ�ָ��
	/**
	��1�������ļ�ϵͳ�У��ؼ��ĸ����ǡ��ļ�����ָ���ˡ�����ơ��ļ�ָ�롱
	ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ(���ļ������֣��ļ�״̬���ļ���ǰ��λ�õ�)��
	��Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������ϵͳ�����ģ�ȡ��FILE��

	
	
	*/
//��2������VS2008���뻷���ṩ��stdio.hͷ�ļ��������µ��ļ�����������
//ÿ����һ���ļ���ʱ��ϵͳ������ļ�������Զ�����һ��FILE�ṹ�ı��������������Ϣ��
//һ�㶼��ͨ��һ��FILEָ����ά�����FILE�ṹ�ı�����

//struct _iobuf{
//	char *_ptr;
//	int *_cnt;
//	char *_base;
//	int _flag;
//	int file;
//	int _charbuf;
//	int _bufsize;
//	char *_tmpfname;
//};
//typedef struct _iobuf FILE;

//��3������һ��FILE* ��ָ�����
FILE *pf;//�ļ�ָ�����
//����pf��һ��ָ��FILE�������ݵ�ָ�����������ʹpfָ��ĳ���ļ����ļ���Ϣ������һ���ṹ���������
//ͨ�����ļ���Ϣ������Ϣ�ܹ����ʸ��ļ�����ͨ���ļ�ָ������ܹ��ҵ������������ļ���



//2.�ı�������
	/**
	ANSIC��׼���á������ļ�ϵͳ�����������ļ�����ν�����ļ�ϵͳ��ָϵͳ�Զ������ڴ���Ϊ������
	ÿһ������ʹ�õ��ļ�����һ�顰�ļ��������������ڴ������������ݻ����͵��ڴ��еĻ�������װ�����������һ���͵������ϡ�
	����Ӵ����������������ݣ���Ӵ����ļ��ж�ȡ�������뵽�ڴ滺������Ȼ���ٴӻ���������Ľ������͵���������������������ȣ���
	�������Ĵ�С�Ǹ���C����ϵͳ�����ġ�
	*/

//1.   �ڳ��������һ����������ļ��������ļ��������ļ�
	/**
	�����ļ�������Դ�����ļ�����׺.c��Ŀ���ļ���Windows������׺Ϊ.obj����ִ�г���Windows������׺Ϊ.exe��
	
	�����ļ����ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ��������������Ҫ���ж�ȡ���ݵ��ļ���
	           ����������ݵ��ļ� ��

	�ļ�����һ���ļ�Ҫ��һ��Ψһ���ļ���ʶ���Ա��û�ʶ������á�
	�ļ��������������֣� �ļ�·�� + �ļ������� + �ļ���׺
	���磺c:\code\test.txt
	Ϊ�˷��㣬�ļ���ʶ������Ϊ�ļ���

	�ļ����� ���������ݵ���֯��ʽ�������ļ�����Ϊ�ı��ļ����߶������ļ���
	�������ڴ����Զ����Ƶ���ʽ�洢���������ת���������棬���Ƕ������ļ���
	���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת������ASCII�ַ�����ʽ�洢���ļ������ı��ļ���

	�������ڴ��еĴ洢��
	�ַ�һ����ASCII��ʽ�洢����ֵ�����ݿ�����ASCII��ʽ�洢��Ҳ����ʹ�ö�������ʽ�洢��

	��������10000�������ASCII�����ʽ��������̣��������ռ��5���ֽڣ�ÿ���ַ�һ���ֽڣ�
	����������ʽ��������ڴ�����ֻռ4���ֽڣ�VS2013���ԣ���
	
	*/
//int main(){
//	int  a = 10000;
//	FILE *pf = fopen("test.txt", "wb");
//	fwrite(&a,4,1,pf); //�����Ƶ���ʽд���ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}