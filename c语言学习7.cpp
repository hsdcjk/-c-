#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	;//是语句，属于空语句
	int age1 = 20;
	if (age1 < 18)
		printf("未成年\n");//如果不符合条件，则不执行不输出
	int age2 = 10;
	if (18 <= age2 < 28)//先执行18<=age2,结果为假则为0。变成0<28，为真，则输出’青年‘
		printf("青年\n");
	if (age2 < 18)//这是正确方式
		printf("未成年\n");
	else if (age2 >= 18 && age2 < 28)
		printf("成年\n");

	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)//该语句为假，直接什么都不输出
		if (b == 2)
			printf("呵呵\n");
		else
			printf("哈哈\n");//else和他离得最近的且未匹配的if进行匹配，则该行与第八行的if匹配
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 4;
	if (num = 5)//不是判断相等，这是赋值。把5赋值给num了，则第10行5==num也是可以执行的
	{
		printf("呵呵\n");
	}//这是代码易错点
	if (6 == num)
		printf("呵呵\n");//这样写代码可以报错，减少出错概率
	return 0;
}


#include<stdio.h>
//switch语句是一种分支语句，常常用于多分支的情况
int main()
{
	int day;
	scanf("%d", &day);//&千万不可以忘记
	switch (day)//switch后面的括号放整形表达式(必须为整形)，表达式是几，他就从case几进去
	{                            //switch用于判断，case是入口
	case 1://case后面的必须是整形常量表达式
		printf("星期一\n"); break;//程序遇到break便会跳出该代码块
	case 2:
		printf("星期二\n"); break;
	case 3:
		printf("星期三\n"); break;
	case 4:
		printf("星期四\n"); break;
	case 5:
		printf("星期五\n"); break;
	case 6:
		printf("星期六\n"); break;
	case 7:
		printf("星期七\n"); break;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1://这个必须是冒号：
	case 2:
	case 3:
		printf("呵呵\n");//switch语句里面是可以出现if语句的，不能出现continue
	case 4:
	case 5:
		printf("工作日\n"); break;
	case 6:
	case 7:
		printf("休息日\n"); break;
	default://case和default没有顺序，可以放在case前面
		printf("输入错误\n"); break;
	}
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;//从这里进入执行，此时m=3
	case 2:n++;//此时n=2
	case 3:
		switch (n)//switch允许嵌套使用
		{
		case 1:n++;
		case 2:m++; n++; break;//此时n=2，从这里进入执行。执行完后m=4，n=3
		}
	case 4:m++; break;//执行完后m=5，n=3
	default:break;
	}
	printf("m=%d\nn=%d\n", m, n);
	return 0;
}

#include<stdio.h>
int main()
{
	while (1)//这是一个死循环。1为真，则需要执行该语句，且一直执行
		printf("哈哈\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i < 10)
	{
		if (i == 5)//i=5时，continue执行
			continue;//continue的作用是终止本次循环，continue后面的代码不再继续，回到循环while的上面判断是否需要继续运行
		printf("%d\n", i);//只会输出1，2，3，4
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;//i=6时，直接执行第11行。i有机会发生改变，则不会陷入死循环
		if (i == 5)//i=5时跳过后面的循环，则i=5不打印。
			continue;
		printf("%d\n", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int ch = getchar();//用ch接收从getchar（）中返回来的字符
	putchar(ch);//putchar与getchar对应，是输出
	printf("%c\n", ch);//第六和第七行是一模一样的
	return 0;
}

#include<stdio.h>
int main()
{//EOF--end of file,是文件结束标志，本质上等于-1
	int ch = 0;//getchar如果遇到ctrl+z的情况，getchar就会获取一个EOF放到ch里面，此时为假就会停止。
	while ((ch = getchar()) != EOF)//应该是() !=(),这样的格式
	{
		putchar(ch);//键盘上输入EOF时没有用的，计算机时分别输入E，输入O，和输入F
	}
	return 0;
}

