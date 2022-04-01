#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double a = 5 % 2;//取模的时候不能带有小数
	printf("a=if\n", a);
	return 0;
}

int main()
{
	int a = 16;//a的二进制数是00000000000000000000000000010000
	int b = a >> 1;//>>是右移操作符
				   //(1)算术右移：右边丢弃，左边补符号位，0代表正数，则a二进制最右边丢弃，最左边补上原符号位0
	int c = -1;
	int d = c >> 1;
	printf("%d\n", d);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 16;//a的二进制数是00000000000000000000000000010000
	int b = a >> 1;//>>是右移操作符
				   //(1)算术右移：右边丢弃，左边补符号位，0代表正数，则a二进制最右边丢弃，最左边补上原符号位0
	int c = -1;
	int d = c >> 1;//此时在最左边补上的是1
	int e = a >> 2;
	printf("%d\n", b);//a二进制移动一位之后，a变成了8
	printf("%d\n", d);
	printf("%d\n", e);//a右移两位之后变成了4，右移有除2的效果
	return 0;
}

//正整数的原码，反码和补码是相同的
#include<stdio.h>
int main()
{
	//-1在内存中存的是补码
	int a = -1;//10000000000000000000000000000001,这是a的原码,第一个1表示负数，最后一个用表示实际数字是1
			   //11111111111111111111111111111110,这是a的反码，符号位不变，其他位按位取反
			   //11111111111111111111111111111111,这是a的补码，反码+1=补码

	return 0;
}


#include<stdio.h>
int main()
{
	int a = 5;//左移拥有乘2的效果
	int b = a << 1;//<<是左移操作符
				   //a的32个比特位00000000000000000000000000000101
				   //左移，左边丢弃，右边补0
				   //b的32个比特位00000000000000000000000000001010
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 3;//a的比特位：000000000000000000000000000000011
	int b = 5;//b的比特位：000000000000000000000000000000101
	int c = a & b;//c的值：000000000000000000000000000000001,对应的二进制为有一个为0则为0，两个都为1才是1
	int d = a | b;//d的值：000000000000000000000000000000111，一个为1则为1，两个为0才为0
	int e = a ^ b;//e的值：000000000000000000000000000000110，对应二进制位相同为0，相异为1
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	return 0;
}


//求一个正数储存在内存中二进制中1的个数
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);//假设count=3，011
	while (num)//num！=0
	{
		if (num % 2 == 1)//代表最后一位数一定为1
		{
			count++;
			num = num / 2;  //求的商，相当于把最后一位去掉。
		}
	}
	printf("%d\n", count);
	return 0;
}


//计算一个正数的二进制共有多少个1
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++)//一个正数32个比特位
	{                   //num最低位为1，则num&1==1
		if (1 == ((num >> i) & 1))//&按位与，要两边都为1才为1，有0为0。比较运算符的优先级大于按位运算符((num>>1)&1)
		{                          //i=0，向右移动0位，以此类推
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	if (!a)//a如果为假，！a为真，才会打印。一般代表的意思是a为假则打印hehe
	{
		printf("hehe");
	}
	if (a)
	{
		printf("哈哈");//代表的意思是，a为真则打印哈哈
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int* p = &a;//取出a的地址放到p中去，p代表的是指针变量，int*代表的是p的类型
	*p = 20;//通过p中存放的值找到找到他所存放的对象*p。*p就是a
	printf("%d\n", a);//上一行把20赋值给a
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);//sizeof计算类型的大小可以省去括号
	printf("%d\n", sizeof(int));//sizeof计算类型的大小不能省括号
	return 0;
}
