#define _CRT_SECURE_NO_WARNINGS 1
//С����
#include <stdio.h> 
#include <string.h>  
#include <assert.h>  
#include <ctype.h>  

//1.һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�

//��дһ�������ҳ�������ֻ����һ�ε����֡�
//��1��
/***
void search(int arr[], int num)
{
	assert(arr);
	assert(num > 0);
	int *x = (int *)malloc(sizeof(int *));
	int *y = (int *)malloc(sizeof(int *));
	*x = 0;
	*y = 0;
	//ȫ�����а�λ�룬������ͬ���ְ�λ��Ϊ�㲻ͬΪһ����˽��һ����Ϊ�㣬��32������λ��������һλΪ1��
	int sum = arr[0];
	for (int i = 0; i < num; i++)
	{
		sum ^= arr[i];
	}
	//�ҵ����λ��һ�γ���1��λ�ã���Ϊpos����Ϊ��ʱ��1һ���ǲ�ͬ����������Ӧλ���ϵ�1��0���õ��ġ�
	int pos = 1;
	{
		while (sum & 1)
		{
			sum = sum >> 1;
			pos = pos << 1;
		}
	}
	//����posλ���ϵ�01ֵ��ͬ�������黮��Ϊ�������飬��������򣬵ó�ÿ���������һ�ε�����
	for (int i = 0; i < num; i++)
	{
		if (arr[i] & pos)
		{
			*x ^= arr[i];
		}
		else
		{
			*y ^= arr[i];
		}
	}
	printf("%d %d", *x, *y);
}
int main(){
	int arr[] = { 1, 2, 3, 7, 4, 5, 1, 2, 3, 7 };
	int num = sizeof(arr) / sizeof(arr[0]);
	search(arr, num);

}
*/

//(2)
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 6 };
//	//5 ^ 6
//	//101
//	//110
//	//011
//	//�������⣬
//	//���Ե�λΪ1�ɷֵ���Ϊ[1,1,3,3,5]
//	//  �Ե�λΪ0�ɷֵ���Ϊ[2,2,4,4,6]
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;	
//	int pos = 0;
//	int num1 = 0;
//	int num2 = 0;
//	for (i = 0; i < sz;i++){
//		//���������������������ret��
//		ret ^= arr[i];//��ʱret�϶���Ϊ0
//	}
//	//����ret����һλΪ1  ��˵��5 �� 6 ����һλ�Ͳ���ͬ   ����Ϊ1��
//	for (i = 0; i < 32;i++){
//		if (((ret >> i) & 1) == 1)	 //i��ʵ���ǵڼ�λΪ1 ���ж������е���һ��Ԫ�صĵ�iλΪ1 �ŵ�һ������	���ĸ�Ԫ�صĵĵ�iλΪ0����һ������
//			break;
//	}
//	pos = i;
//	//�������飬���ĸ�Ԫ�صĵ�iλΪ1 ����0
//	for (i = 0; i < sz;i++){
//		//arr[i]�������Ԫ�أ������iλ�Ƿ�Ϊ1
//		if(((arr[i] >> pos) & 1) == 1){
//			num1 ^= arr[i];
//		}		 	
//	}	
//	num2 = ret ^num1;
//	printf("%d %d",num1,num2);
//	return 0;
//}
 //2.ģ��ʵ��atoi
//atoi() �����������ַ���ת��������(int)����ԭ��Ϊ��
  //int atoi(const char * str);

//������˵����atoi() ������ɨ����� str �ַ�����
//����ǰ��Ŀհ��ַ�������ո�tab�����ȣ�����ͨ�� isspace() ��������⣩��
//ֱ���������ֻ��������Ųſ�ʼ��ת�����������������ֻ��ַ�������ʱ(��\0��)�Ž���ת��������������ء�

//������ֵ������ת���������������� str ����ת���� int ���� str Ϊ���ַ�������ô������ 0��
/**
int my_atoi(char const *p)
{
	int ret = 0;
	int a = 0;
	int flag = 1;
	assert(p != NULL);
	while (isspace(*p))
	{
		p++;
	}
	while (*p)
	{
		if (*p == '+')
			p++;
		else if (*p == '-')
		{
			p++;
			flag = -1;
		}
		else if (*p >= '0'&& *p <= '9')
		{
			a = *p - '0';
			ret = (ret * 10 + a);
			p++;
		}
		else
			return 0;
	}
	if ((flag == 1 && ret > 0x7FFFFFFF) || (flag == -1 && ret < (signed int)0x80000000))
		return 0;
	return ret*flag;
}

int main()
{
	printf("%d\n", my_atoi(" +2345"));
	printf("%d\n", my_atoi(" -2345"));
	printf("%d\n", my_atoi("+2345"));
	printf("%d\n", my_atoi("-2345"));
	printf("%d\n", my_atoi("2345"));
	printf("%d\n", my_atoi("2345"));
	printf("%d\n", my_atoi(""));
	printf("%d\n", my_atoi("123ab"));
	system("pause\n");
	return 0;
}
*/
//
/**
#define INT_MAX 2147483647
#define INT_MIN -2147483678
enum State
{
	VALID, //�Ϸ�״̬
	INVALID //�Ƿ�״̬
};
enum State state = INVALID;//��Ϊ�Ƿ�״̬������Ƚ϶࣬���Ϸ���״ֻ̬��һ�������Ϊ��ʹ�����Щ�����Խ���ʼ״̬��ʼ��Ϊ�Ƿ�״̬
int my_atoi(const char* str)
{
	long long ret = 0;
	int flag = 1;//��ʶ������
	assert(str != NULL);//��ָ��
	if (*str == '\0')//���ַ���
	{
		return 0;
	}
	while (isspace(*str))   //�հ��ַ�
	{
		str++;
	}
	if (*str == '+')
	{
		str++;
	}
	else if (*str == '-')
	{
		str++;
		flag = -1;
	}

	while (*str)
	{
		if (isdigit(*str))
		{
			ret = ret * 10 + (*str - '0')*flag;
			if (ret > INT_MAX&&ret < INT_MIN)//Խ�����
			{
				return 0;
			}
		}
		else
		{
			state = VALID;//�Ϸ�״̬
			return (int)ret;
		}
		str++;
	}
	state = VALID;
	return (int)ret;
}


int main()
{
	char *p = "  1122abcdef1122";
	int ret = my_atoi(p);
	if (state == VALID)
		printf("%d\n", ret);
	system("pause");
	return 0;
}
*/

//4. 
/**
//��Ŀ����������n�����������У�Ҫ���������н���ȥ�ز�����
//           ��νȥ�أ���ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ��
//��������������������У���һ�а���һ��������n(1 <= n <= 1000),��ʾ�ڶ������������ֵĸ�����
//          �ڶ��а���n������(��Χ1-5000)���ÿո�ָ�
//��������� ���Ϊһ�У����������˳�����ȥ��֮������֣��ÿո�ָ�
// 
// eg:���룺
// 5
// 10 12 15 12 75
// �����
// 10 120 15075
// */
//int main(){
//	int n = 0;
//	int arr[5000] = { 0 };
//	//��������
//	printf("����������������");
//	scanf("%d",&n);
//	int i = 0;
//	for (i = 0; i < n;i ++){
//		scanf("%d",&arr[i]);
//	}
//	//ȥ��
//	for (i = 0; i < n;i++){
//		int j = 0;
//		for (j = i + 1; j < n;j++){
//			 //�����ȣ���Ѻ���Ԭ����ǰ�ƶ�
//			if (arr[i] == arr[j]){
//				int k = 0;
//				for (k = j; k < n - 1;k ++){
//					arr[k] = arr[k + 1];
//				}
//				n--;
//				j--;
//			}
//		}
//	}
//	for (i = 0; i < n;i++){
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}		
//

//5.  �ж�����������

//���������ε�������a,b c���жϸ�����������(�ȱߣ���������ͨ������)
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	printf("�����������ε������ߣ�");
	while (scanf("%d%d%d", &a, &b, &c) != EOF){
		//������������������
		if (a + b > c && a + c > b && b + c > a) {
			if (a == b && b == c)
				printf("Equilateral triangle!\n");
			else if ((a == b && a != c) || (a == c && a != b) || (b == c&& a != b))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
		printf("Not a triangle!\n");
	}
		return 0;
	
}