#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)//���ܷ��ص���x����y�������Σ���MaxҲӦ��Ϊ����
{
	if (x > y)
		return x;//��x��ֵ���ص�Max��
	else
		return y;
}
int main()
{
	int num1 = 10, num2 = 20, max;
	max = Max(num1, num2);
	printf("max=%d", max);
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));//����aռ�ĸ��ֽڣ������4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//arr��ռ24���ֽڣ�arr[0]=1ռ�ĸ��ֽڣ������6
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;//int�ĸ��ֽڣ�32������λ��a��2��������a=00000000000000000000000000000000
	int b = ~a;//~�ǰ���2���ƣ�λȡ������õ��ǲ���                b=11111111111111111111111111111111
	//b���з���λ�����Σ����λ�Ƿ���λ������λ��1��ʾ������0��ʾ����
	printf("%d\n", b);//��ӡ�����������ԭ��
	//ԭ�����λ���䣬����λ��λȡ���õ����룬�����һ�õ�����
	//���룺11111111111111111111111111111111
	//���룺11111111111111111111111111111110
	//ԭ�룺10000000000000000000000000000001      1����������ԭ��λ-1
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;//����++���Ȱ�a��ֵ����b��Ȼ��a+1����ʱa=11
	int c = a--;//�Ȱ�a��ֵ��c��aȻ��+1.��ʱa=10
	int d = --a;//a��-1��Ȼ���ֵ����d����ʱa=9
	printf("a=%d\nb=%d\nc=%d", a, b, c);
	return 0;
}



//0��ʾ�٣���0��ʾ��
#include<stdio.h>
int main()
{
	int a = 3, b = 5, c = 0;//0��ʾ��
	int d = a && b;//a��b��Ϊ���㣬��Ϊ��,����Ϊ��
	int e = a && c;
	printf("d=%d\ne=%d\n", d, e);
	return 0;
}



#include<stdio.h>
int main()
{
	int a = 10, b = 20, max;
	max = (a > b ? a : b);//���a>b���������a��ֵ��max�����򣬰�b��ֵ��max
	printf("max=%d", max);
	return 0;
}



#include<stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;//��z���ظ�Add��
}
int main()
{
	int a = 10, b = 20;
	int arr[3] = { 1,2,3 };
	int sum = Add(a, b);//()�Ǻ������ò�����
	printf("%d\n", arr[1]);//[]���±����ò�������
	printf("sum=%d", sum);

	return 0;
}

//�Ĵ�����죬��θ��ٻ��棬�ٴ����ڴ棬�����Ӳ��
//register int a = 10;//register����Ĵ����������������a����ɼĴ����������������ж��Ƿ����Ĵ���



#include<stdio.h>
void test()//���÷���ֵ�Ļ�ʹ��void
{
	static int a = 1;//����static��a���һ����̬�ľֲ�����
	//static�����������ξֲ��������ֲ��������������ڱ䳤,a��ѭ���岻��ʧ������ѭ���廹����
	a++;
	printf("a=%d\n", a);
}//aÿһ�ξ����ýṹ��ʱa=2�����ǳ��ýṹ��ʱa����ʧ
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();//�ýṹ��������Σ���ӡ���a��ÿһ�δ�ӡ������a����2
		i++;
	}
	return 0;
}


#include<stdio.h>
extern int Add(int, int);//�����ⲿ����Add��Add������һ���ļ��ж��壩
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
//������һ���ļ��ж���һ����Add�ĺ�����extern�����������Ŀ��ʹ����һ����Ŀ�е�Add����
int Add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
//�����һ����Ŀ�еĺ�����static���Σ��������Ŀ�޷����øú���


#define MAX 100  //��#define�����ʶ���������Ժ���������MAX��Ĭ����Ϊ100
#include<stdio.h>
int main()
{
	int a = MAX;
	printf("%d", a);
	return 0;
}


#include<stdio.h>
#define MAX(X,Y) (X>Y ? X:Y)//define�к꺯���Ķ���
int main()
{
	int a = 10, b = 20, max;
	max = MAX(a, b);//���ݵ����У������൱��max=(a>b?a:b)
	printf("max=%d", max);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;//���ڴ������ĸ��ֽڣ�
	int* p = &a;//ר��������ŵ�ַ�ı�����ָ�������ָ�����p��������int*
	printf("%p\n", &a);//%p����˼��ȡ��ַ,��ӡ����000000FCC8EFFA94��16���ƣ���a�ĵ�ַ
	printf("%p\n", p);//��a�ĵ�ַ���p����
	*p;//*����˼�ǽ����ò���������p���н����ò������ҵ�����ָ��Ķ���a
	*p = 20;//��˼��ͨ��p�ҵ�a��*p��ʵ�Ͼ���a�����Ұ�a��ֵ�ĳ�20
	printf("%d", a);
	return 0;
}

#include<stdio.h>
int main()
{
	char ch = 'w';//char���ĸ��ֽ�����32������λ���պô��32λ�ĵ�ַ��
	char* pc = &ch;//ch���ַ���������int��Ӧ����char
	*pc = 'a';//��ch�е��ַ��ĳ��ַ�a
	printf("%c\n", ch);
	return 0;
}


