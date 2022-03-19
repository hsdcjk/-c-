#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Max(int x, int y)//不管返回的是x还是y都是整形，则Max也应该为整形
{
	if (x > y)
		return x;//将x的值返回到Max中
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
	printf("%d\n", sizeof(a));//整数a占四个字节，则输出4
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//arr共占24个字节，arr[0]=1占四个字节，则输出6
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;//int四个字节，32个比特位。a的2进制数是a=00000000000000000000000000000000
	int b = ~a;//~是按（2进制）位取反，获得的是补码                b=11111111111111111111111111111111
	//b是有符号位的整形，最高位是符号位，符号位是1表示负数，0表示正数
	printf("%d\n", b);//打印的是这个数的原码
	//原码符号位不变，其他位按位取反得到反码，反码加一得到补码
	//补码：11111111111111111111111111111111
	//反码：11111111111111111111111111111110
	//原码：10000000000000000000000000000001      1代表负数，则原码位-1
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;
	int b = a++;//后置++，先把a的值赋给b，然后a+1，此时a=11
	int c = a--;//先把a赋值给c，a然后+1.此时a=10
	int d = --a;//a先-1，然后把值赋给d，此时a=9
	printf("a=%d\nb=%d\nc=%d", a, b, c);
	return 0;
}



//0表示假，非0表示真
#include<stdio.h>
int main()
{
	int a = 3, b = 5, c = 0;//0表示假
	int d = a && b;//a和b都为非零，都为真,整体为真
	int e = a && c;
	printf("d=%d\ne=%d\n", d, e);
	return 0;
}



#include<stdio.h>
int main()
{
	int a = 10, b = 20, max;
	max = (a > b ? a : b);//如果a>b成立，则把a赋值给max，否则，把b赋值给max
	printf("max=%d", max);
	return 0;
}



#include<stdio.h>
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;//把z返回给Add中
}
int main()
{
	int a = 10, b = 20;
	int arr[3] = { 1,2,3 };
	int sum = Add(a, b);//()是函数调用操作符
	printf("%d\n", arr[1]);//[]叫下标引用操作符，
	printf("sum=%d", sum);

	return 0;
}

//寄存器最快，其次高速缓存，再次是内存，最后是硬盘
//register int a = 10;//register代表寄存器。此语句代表建议把a定义成寄存器变量，编译器判断是否放入寄存器



#include<stdio.h>
void test()//不用返回值的会使用void
{
	static int a = 1;//加了static后，a变成一个静态的局部变量
	//static的作用是修饰局部变量，局部变量的生命周期变长,a出循环体不消失，进入循环体还存在
	a++;
	printf("a=%d\n", a);
}//a每一次经过该结构体时a=2。但是出该结构体时a会消失
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();//该结构体运行五次，打印五次a，每一次打印出来的a等于2
		i++;
	}
	return 0;
}


#include<stdio.h>
extern int Add(int, int);//声明外部函数Add（Add在另外一个文件中定义）
int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}
//在另外一个文件中定义一个叫Add的函数，extern可以在这个项目中使用另一个项目中的Add函数
int Add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}
//如果另一个项目中的函数被static修饰，则这个项目无法调用该函数


#define MAX 100  //用#define定义标识符常量，以后计算机看见MAX则默认它为100
#include<stdio.h>
int main()
{
	int a = MAX;
	printf("%d", a);
	return 0;
}


#include<stdio.h>
#define MAX(X,Y) (X>Y ? X:Y)//define中宏函数的定义
int main()
{
	int a = 10, b = 20, max;
	max = MAX(a, b);//根据第三行，该行相当于max=(a>b?a:b)
	printf("max=%d", max);
	return 0;
}

#include<stdio.h>
int main()
{
	int a = 10;//向内存申请四个字节，
	int* p = &a;//专门用来存放地址的变量叫指针变量。指针变量p的类型是int*
	printf("%p\n", &a);//%p的意思是取地址,打印出来000000FCC8EFFA94（16进制）是a的地址
	printf("%p\n", p);//把a的地址存进p中了
	*p;//*的意思是解引用操作符。对p进行解引用操作，找到它所指向的对象a
	*p = 20;//意思是通过p找到a。*p其实上就是a，并且把a的值改成20
	printf("%d", a);
	return 0;
}

#include<stdio.h>
int main()
{
	char ch = 'w';//char是四个字节诶，32个比特位，刚好存放32位的地址。
	char* pc = &ch;//ch是字符，不能用int，应该用char
	*pc = 'a';//把ch中的字符改成字符a
	printf("%c\n", ch);
	return 0;
}


