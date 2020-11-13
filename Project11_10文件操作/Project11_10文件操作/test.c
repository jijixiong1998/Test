#define _CRT_SECURE_NO_WARNINGS 1
//文件操作
#include <stdio.h>
#include <stdlib.h>
//7.文件结束判定
	/**
	在文件读取过程中，不能使用feof函数的返回值直接用来判断文件的是否结束。
	而是应用于当文件读取结束的时候，判断是读取失败结束还是遇到文件尾结束。

		（1）文本文件是否读取结束判断返回值是否为EOF(fgetc),或者NULL(fgets)。
				例如：
				    fgetc判断是否为EOF
					fgets判断	返回值是否为NULL
		（2）二进制文件的读取结束判断，判断返回值是否小于实际要读的个数
				例如：
						fread判断返回值是否小于实际要读的个数。
	
	*/
//(1)文本文件的例子
//int main(){
//	int c;
//	FILE * pfile = fopen("test.txt","r");
//	if (!pfile){
//	
//		perror("file opening failed!");
//		return EXIT_FAILURE;
//	}
//	//fgetc读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(pfile)) != EOF){
//		putchar(c);
//	}
//	//判断是什么原因结束的
//	if (ferror(pfile)){
//		puts("I\O error when reading");
//	}
//	else if (feof(pfile)){
//		puts("End of file reached successfully");
//	}
//	fclose(pfile);
//	return 0;
//}
//(2)二进制文件的例子
enum{ SIZE = 5 };
int main(){
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin","wb");
	fwrite(a,sizeof(*a),SIZE,fp);
	//读double的数组
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

//6.文件的随机读写：
//(1)fseek:根据文件指针的位置和偏移量来定位文件指针。
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
//(2)ftell:返回文件指针相对于起始位置的偏移量。
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
//(3)rewind:让文件指针的位置回到 文件的其实位置
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
//5. 文件的顺序读写：
	/**
	字符输入\输出函数：	fgetc fputc
	文本行输入、输出函数：fgets fputs
	格式化输入、输出函数：fscanf fprintf
	二进制输入、输出函数：fread fwrite

	*/


//4. 文件的打开和关闭  ：读写之前应该先打开文件，在使用结束之后应该关闭文件。
//在编写程序的时候，在打开文件的而同时，都会返回一个FILE*的指针变量指向该文件，也相当于建立了指针和文件的关系。
//ANSIC规定 使用fopen函数来打开文件，fclose关闭
//	/*FILE* fopen(const char* filename, const char * mode);
//	int flose(FILE* name);*/

//3. 文件指针
	/**
	（1）缓冲文件系统中，关键的概念是“文件类型指针了”，简称“文件指针”
	每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息(如文件的名字，文件状态及文件当前的位置等)。
	这些信息是保存在一个结构体变量中的。该结构体类型是有系统声明的，取名FILE。

	
	
	*/
//（2）例如VS2008编译环境提供的stdio.h头文件中有以下的文件类型声明：
//每当打开一个文件的时候，系统会根据文件的情况自动创建一个FILE结构的变量，并填充其信息。
//一般都是通过一个FILE指针来维护这个FILE结构的变量。

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

//（3）创建一个FILE* 的指针变量
FILE *pf;//文件指针变量
//定义pf是一个指向FILE类型数据的指针变量，可以使pf指向某个文件的文件信息区（是一个结构体变量）。
//通过该文件信息区中信息能够访问该文件，即通过文件指针变量能够找到与它关联的文件。



//2.文本缓冲区
	/**
	ANSIC标准采用“缓冲文件系统”处理数据文件，所谓缓冲文件系统是指系统自动地在内存中为程序中
	每一个正在使用的文件开辟一块“文件缓冲区”，从内存向磁盘输出数据辉县送到内存中的缓冲区，装满缓冲区后才一起送到磁盘上。
	如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓冲区，然后再从缓冲区逐个的将数据送到程序数据区（程序变量等）。
	缓冲区的大小是根据C编译系统决定的。
	*/

//1.   在程序设计中一般包括两种文件：程序文件和数据文件
	/**
	程序文件：包括源程序文件（后缀.c）目标文件（Windows环境后缀为.obj）可执行程序（Windows环境后缀为.exe）
	
	数据文件：文件的内容不一定是程序，而是程序运行时读写的数据，比如程序运行需要从中读取数据的文件，
	           或者输出内容的文件 。

	文件名：一个文件要有一个唯一的文件标识，以便用户识别和引用。
	文件名包括三个部分： 文件路径 + 文件名主干 + 文件后缀
	例如：c:\code\test.txt
	为了方便，文件标识常被称为文件名

	文件类型 ：根据数据的组织形式，数据文件被称为文本文件或者二进制文件；
	数据在内存中以二进制的形式存储，如果不加转换输出到外存，就是二进制文件。
	如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII字符的形式存储的文件就是文本文件。

	数据在内存中的存储：
	字符一律以ASCII形式存储，数值型数据可以用ASCII形式存储，也可以使用二进制形式存储；

	如有整数10000，如果以ASCII码的形式输出到磁盘，则磁盘中占用5个字节（每个字符一个字节）
	而二进制形式输出，则在磁盘上只占4个字节（VS2013测试）；
	
	*/
//int main(){
//	int  a = 10000;
//	FILE *pf = fopen("test.txt", "wb");
//	fwrite(&a,4,1,pf); //二进制的形式写到文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}