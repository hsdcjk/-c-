#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)//���ܷ���ֵ��x����y������������������
{
	if (x > y)
		return x;//��x���ظ�max
	else
		return y;//��y���ظ�max
}
int main()
{
	int num1 = 10, num2 = 20, max;
	max = Max(num1, num2);//��num1��num2��ֵ����Max���бȽϣ�ͨ������ֵ�����������max������Max��������ķ���ֵ
	printf("max=%d\n", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("���������ָ���Ϊ:%d\n", sizeof(arr) / sizeof(arr[0]));//ÿһ������ռ�ֽ�һ���������ֽڳ�һ�������ֽڴ�С
	return 0;
}

#include<stdio.h>
int main()
{                                                //b���з���λ�����Σ����������λ�Ƿ���λ�����λ��1��ʾ����
	int a = 0;//ռ���ֽڣ�32����λ��0�����Ʊ�ʾ��ʽ     00000000000000000000000000000000
	int b = ~a;//~����˼�ǰ�λ��������λ��ȡ��bȡ��a����11111111111111111111111111111111
	//ԭ�����λ���䣬����λ��λȡ���õ����룬�����һ�ò��롣
	//���룺11111111111111111111111111111111
	//���룺11111111111111111111111111111110
	//ԭ�룺10000000000000000000000000000001��1��ʾ��������������Ϊ-1
	printf("%d\n", b);//��ӡ�����������ԭ��
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;//����++���Ȱ�a��ֵ����b��aȻ��+1,��ʱa=11
	int c = ++a;//ǰ��++��a��++��Ȼ���a��ֵ����b��a���������к�a=12
	int d = a--;//�Ȱ�a��ֵ��d��Ȼ��a+1����ʱa=11
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = (int)3.14;//float����ǿ��ת��Ϊint����
	printf("%d", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;//��������
	int c = 0;//0�Ǽ�
	int d = a && b;
	int e = a && c;
	int f = a || c;
	printf("%d\n%d\n%d\n", d, e, f);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10, b = 20, max;
	max = (a > b ? a : b);//�ж�a>b�����a>b����a��ֵ��max������b��ֵ��max
	printf("%d\n", max);
	return 0;
}


