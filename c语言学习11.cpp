#define _CRT_SECURE_NO_WARNINGS 1
//��n�Ľײ�
#include<stdio.h>
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;//��ִ�н�������ܷ���ȥ������forѭ�������
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac1(n);//ѭ���ķ�ʽ��n�Ľײ�
	printf("sum=%d\n", ret);
	return 0;
}


#include <stdio.h>
//��n�Ľײ�
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);//ѭ���ķ�ʽ��n�Ľײ�
	printf("sum=%d\n", ret);
	return 0;
}


//쳲���������ǰ������֮�͵��ڵ�������
#include <stdio.h>
int Fib(int n)////n=50ʱ�����ݹ�������
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}


