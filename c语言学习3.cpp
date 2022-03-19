#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)//不管返回值是x还是y都是整数，故用整形
{
	if (x > y)
		return x;//将x返回给max
	else
		return y;//将y返回给max
}
int main()
{
	int num1 = 10, num2 = 20, max;
	max = Max(num1, num2);//把num1和num2的值传给Max进行比较，通过返回值进行输出。用max来接收Max这个函数的返回值
	printf("max=%d\n", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	printf("数组中数字个数为:%d\n", sizeof(arr) / sizeof(arr[0]));//每一个数子占字节一样，用总字节除一个数字字节大小
	return 0;
}

#include<stdio.h>
int main()
{                                                //b是有符号位的整形，二进制最高位是符号位，最高位是1表示负数
	int a = 0;//占四字节，32比特位。0二进制表示形式     00000000000000000000000000000000
	int b = ~a;//~的意思是按位（二级制位）取反b取反a后是11111111111111111111111111111111
	//原码符号位不变，其他位按位取反得到反码，反码得一得补码。
	//补码：11111111111111111111111111111111
	//反码：11111111111111111111111111111110
	//原码：10000000000000000000000000000001，1表示负数，则输出结果为-1
	printf("%d\n", b);//打印的是这个数的原码
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;//后置++，先把a的值赋给b，a然后+1,此时a=11
	int c = ++a;//前置++，a先++，然后把a的值赋给b。a经过第六行后a=12
	int d = a--;//先把a赋值给d，然后a+1，此时a=11
	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = (int)3.14;//float类型强制转化为int类型
	printf("%d", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;//非零是真
	int c = 0;//0是假
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
	max = (a > b ? a : b);//判断a>b，如果a>b，则将a赋值给max，否则将b赋值给max
	printf("%d\n", max);
	return 0;
}


