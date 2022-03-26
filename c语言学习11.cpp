#define _CRT_SECURE_NO_WARNINGS 1
//求n的阶层
#include<stdio.h>
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;//在执行结束后才能返回去，则在for循环后才行
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac1(n);//循环的方式求n的阶层
	printf("sum=%d\n", ret);
	return 0;
}


#include <stdio.h>
//求n的阶层
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
	ret = Fac2(n);//循环的方式求n的阶层
	printf("sum=%d\n", ret);
	return 0;
}


//斐波那契数：前两个数之和等于第三个数
#include <stdio.h>
int Fib(int n)////n=50时，数据过大会溢出
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


