#define _CRT_SECURE_NO_WARNINGS 1
//��ҵ   :С�������ϰ
# include <stdio.h>
# include <math.h>


//9_22��ҵ
//2.������ż��˳��
//����һ���������飬ʵ��һ����������������ʹ����ȫ����λ��ż��ǰ��
//void move_arr(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right){
//		//�������һ��ż��
//		while ((left < right) && (arr[left] % 2 == 1)){
//			left++;
//		}
//		//���ұ���һ������
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
//1.  ģ��ʵ��strlen()������strcpy����


//9-18��ҵ

//4. ����ˮ����
//����ˮ��1ƿ��ˮ1ԪǮ��2����ƿ���Ի�1һƿ��ˮ����20Ԫ���ʿ��Ժȵ�����ƿ��ˮ��	 39ƿ
//int main(){
//	int money =0;
//	int total = 0;
//	int empty = 0;
//
//	printf("����������Ǯ����");
//	scanf("%d", &money);
//	//�ⷨ1	
//	if (money == 0){
//		total = 0;
//	}
//	else{
//		total = money * 2 - 1;
//	}
//	
//	/*
//	//�ⷨ2
//	total += money;		   //�����ˮ
//	empty = money;
//
//	while (empty >= 2){
//		total += empty / 2;	//����������ˮ���ȵ���
//		empty = empty / 2 + empty % 2; //��������Ŀ�ƿ
//	}
//	*/
//	printf("���Ժȵ�����ˮ��total= %d\n",total);
//	return 0;
//}

//3.������������ǣ�  wang
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

//2. ����ṹ���Աa������
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

//1.�ṹ������ֶ���:
//struct student{
//
//	int num;
//	int name[32];
//	float score;
//}stu;//stu�ǽṹ�������
//
//typedef struct student{
//	int num;
//	char name[32];
//	float scorer;
//}stu;//�ṹ��������
//
//int main(){
//	return 0;
//}



//9-16��ҵ

//8.��ӡ����
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
//	//�ϰ벿�֣�
//	for (i = 0; i < line;i++){
//	//��ӡһ�У���ӡ�ո��ڴ�ӡ*
//		int j = 0;
//		for (j = 0; j < line - 1 - i;j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1;i++){
//	//��ӡһ�У��ȴ�ӡ�ո��ڴ�ӡ*
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
//7. ��ӡˮ�ɻ���
//���0 ~100000 ֮�������ˮ�ɻ���
  //ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ���������153 = 1^3 + 5^3 + 3^3;��153��һ��ˮ�ɻ���

//int main(){
//	int i = 0;
//	for (i = 0; i < 100000;i++){
//	//�ж�i�Ƿ�Ϊ������
//		//1.����i��λ������n
//		int tmp = i;
//		int count = 1;
//		int sum = 0;
//		while (tmp /= 10){
//			count++;
//		}
//		//2.���i��ÿһλ������ÿһλ��n�η���
//		tmp = i;
//		while (tmp){
//		sum +=	pow(tmp % 10,count);
//		tmp /= 10;
//		}
//		//3.�Ƚϴ�ӡ
//		if (i == sum){
//			printf("%d ",i);
//		}
//	}
//
//	return 0;
//}

//6.�������
//��Sn = a + aa + aaa + aaaa + aaaaa;��ǰ����֮�ͣ�����a��һ�����֣��� 2 + 22 + 222 + 2222 + 22222
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

//5.�ַ�������
//дһ����������������һ���ַ��������ݡ�
//void reverseStr(char* str){
//	int len = strlen(str);	//����ַ����ĳ���
//	char *left = str;		  //����ַ�ָ��
//	char *right = str + len - 1;	 //�ұ��ַ�ָ�� = ������Ԫ�ص�ַ + �ַ������� - 1
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
//	printf("�������ַ�����");
//	//scanf("%s",arr);	scanf()�����������ո�Ͳ��������ȡ������
//	gets(arr);	   //gets()��������ȡһ�У��пո�Ҳ��ȡ����
//	reverseStr(arr);
//	printf("�������ַ���Ϊ��%s\n", arr);
//	return 0;
//}

//4. ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά����
//void print(int *p,int sz){
//	int i = 0;
//	for (i - 0; i < sz;i++){
//		//printf("%d ", *(p + i));����
//		printf("%d ", *p);	//���� pintf("%d ",*p++);
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

//3. �����������
//int main(){
//	int a = 0x11223344;
//	char *pc = (char *)&a;
//	*pc = 0;
//	printf("%x\n",a);	   //11223300
//	return 0;
//}

//2.����������Ϊ��  6,12
//int main(){
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d %d\n",*pulPtr,*(pulPtr + 3));	 //6 12
//	return 0;
//}
//
//1.����������Ϊ��0  0  3  4  5
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