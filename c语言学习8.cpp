#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year < 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)//不经过for循环，year不会归零
		{
			printf(" %d", year);//多加一个空格可以把输出的结果隔开
			count++;
		}
		if (year % 400 == 0)
		{
			printf("%d\n", year);
			count++;
		}

	}
	printf("count=%d\n", count);
	return 0;
}


//算出1到100中9的个数
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//i除以10余9，则个数为9
			count++;
		else if (i / 10 == 9)
			count++;
	}
	printf("1到100中9的个数：%d", count);
	return 0;
}


//算出1到100中9的个数
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//i除以10余9，则个数为9
			count++;
		if (i / 10 == 9)//99有两个9，如果用else，则第十行执行后该行不执行。该行只能用if与第十行if并列，一起执行
			count++;
	}
	printf("1到100中9的个数：%d", count);
	return 0;
}

//一分之一一直加到一百分之一
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;//因为11行是浮点数，应该改为double
	for (i = 1; i <= 100; i++)
	{
		//sum += 1 / i;             //   1/1=1;1/2商0，同理类推,输出结果为1
		sum += 1.0 / i;
	}
	printf("%f\n", sum);//这里也要改为浮点数
	return 0;
}


//一分之一-二分之一+三分之一，一直到一百分之一
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;          //必须用1.0/i才会得到一个浮点数
		flag = -flag;//flag在1和-1之间改变，进而把1.0/i的值改变
	}
	printf("%lf", sum);
	return 0;
}


//求数组中最大的值
#include<stdio.h>
int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];//如果max=0，数组中全为负数时，运行失败。我们可以假设，数组中第一个数为最大值
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)//如果在数组arr中有元素值大于max，则把该元素放到max中去
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}


//猜数字游戏/////////利于仔细研究，现在没有完全弄懂
#include<stdio.h>
#include<stdlib.h>//是rand（）的头文件
#include<time.h>//time函数的头文件
void menu()
{
	printf("*****************\n");
	printf("**  1.play     0.exit  **\n");
	printf("*****************\n");
}
void game()//第一步：生成一个随机数。第二部：猜数字
{          //生成的该随机数范围是0到32767之间
	int ret = 0;//最好定义在最前面
	int guess = 0;
	ret = rand() % 100 + 1;//生成随机数。rand()%100的值是0到99。该行使随机数范围变成0到100
	printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (ret > guess)
		{
			printf("猜小了\n");
		}
		else
			printf("恭喜你猜对了\n");
		break;
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//调用rand函数之前去设置随机数的一个生成器，（）之中为整形，之中需要一个时刻发生变化的数
		 //拿时间戳来设置随机数的生成起点。把time（）返回的值强制转化为unsigned int（无符整形，表示2^32-1间的数）
		 //NULL是空指针，不会产生实际效果
	do
	{
		menu();
		{
			printf("请选择：");
		}
		scanf("%d", &input);
		switch (input)
		{
		case 1://使用case时，后面跟的是冒号
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);//不要忘记带分号。输入input，输入为1则走第20行，玩完后走到这里再次判断。
	return 0;
}


#include<stdio.h>
int main()//少用goto语句
{
	goto again;//跳过第六行，从again位置开始打印
	printf("你好\n");
again:
	printf("哈哈\n");
	return 0;
}

#include<stdio.h>
#include<string>//是strcmp的头文件
#include<stdlib.h>//是system的头文件
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//在一分钟内关机
again://必须用冒号
	printf("请注意，你的电脑会在一分钟内关机，如果输入：我是猪，则取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//strcmp专门比较两个字符串，如果==0，则两个字符串相等
	{
		system("shutdown -a");//关机取消
	}
	else
	{
		goto again;
	}
}


