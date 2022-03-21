#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入密码：123456\n。123456\n放置到输入缓冲区，123456被scanf读走，\n被getchar（）读走，\n在ASC表是第十位
int main()
{
	int ret, ch;
	char password[20] = { 0 };//先赋值0，现在还不知道赋值多少进去
	printf("请输入密码：");
	scanf("%s", password);//输入字符串密码，并存放在password的数组。scanf只会把空格前面的字符串读走
	getchar();//该getchar（）把剩余的\n读走
	while ((ch = getchar() != '\n'))//一直执行，直到把\n（回车）输入到getchar()中
	{
		;//不需要while函数的执行，只需要这个空函数
	}
	printf("请确认(Y/N):");
	ret = getchar();
	if (ret == 'Y')//千万注意这是等于，不是赋值啊
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");//输入密码后还敲了一个回车，回车(\n)被留下来给getchar读走，回车是10，不是Y则走else
	}
	return 0;
}

//如果输入123456 ABCD。程序仍然不是我们想要的结果，应该用while函数


#include<stdio.h>
int main()
{
	int i = 0;//先创建好i变量，不知道赋值什么合适，则i=0
	for (i = 1; i <= 10; i++)//函数初始化，判断和调整三部分结合到一起,i++属于调整部分
	{
		if (i == 5)
			continue;//经过这步时，直接跳到第六行i++的调整部分
		printf("%d\n", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)//在for循环体内改变循环变量，防止for循环失去控制，在此处i一直=5
			printf("哈哈\n");
		printf("呵呵\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)//建议使用前闭后开的写法。i=0是闭，i<10是开
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	for (;;)//for循环的初始化，调整和判断都可以省略。但for循环的判断被省略就默认恒为真，就一直循环
	{
		printf("哈哈\n");
	}

	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)//i=2时，j=10，进入该循环后立刻退出，以此类推。第6行的for执行玩后跳转到i++，然后在判断
	{
		for (; j < 10; j++)//i=1时进入该循环，j=10时退出该循环。如果加上j=0时（每一次经过时j=0），打印100个哈哈
			printf("哈哈\n");//则该程序只打印10个哈哈
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//++y和y++本质上是一样的
		printf("哈哈\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k=0的部分本来应该是判断语句，现在是把0赋值给k。这k=0表达式的结果是k（0）
	{                                   ////0为假，则循环压根不进去，所以是0次循环。如果k为非零则死循环
		k++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	do//{}放在do和while之间
	{
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	return 0;
}

#include<stdio.h>
int main()
{
	int i = 1;
	do//{}放在do和while之间
	{
		if (5 == i)
			break;//5==i时跳出循环
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int k = 1;
	scanf("%d", &n);//这里不能用%d\n，因为\n是换行，输入一个数字后不会立刻执行，而是等着输入下一个数，则错误
	for (i = 1; i <= n; i++)
	{
		k = k * i;
	}
	printf("k=%d\n", k);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int k = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)//n=1,n<=3执行完直接进入循环，循环结束再跳到表达式三n++。然后判断n<=3,然后继续进入循环
	{
		k = 1;//下面的for循环结束后，k是可以累计的，每次k=1才行
		for (i = 1; i <= n; i++)//每次进入该循环，从i=1开始
		{
			k = k * i;
		}
		sum = sum + k;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10;//写一个有序代码，在其中找到7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//sz实际上是该数组中元素的个数
	for (i = 0; i <= sz; i++)
	{
		if (k == arr[i])
		{
			printf("找到该数，下标为：%d\n", i);
			break;
		}
	}
	if (k > sz)
		printf("找不到\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int k = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//表示左下标
	int right = sz - 1;//表示右下标
	while (left <= right)//while函数记得带上括号，括号中带上判断条件
	{                 //查到最后一个时left=right,时还没有找到我想要的数，则永远无法找到
		int mid = (left + right) / 2;//取左右下标的平均值
		if (arr[mid] > k)//中间元素大于我要找的元素
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)//中间元素小于我要找的元素
		{
			left = mid + 1;
		}
		else
		{
			printf("下标是： % d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("永远无法找到");
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<windows.h>//使用Sleep的头文件
#include<stdlib.h>//使用system的头文件
int main()
{     //char arr3="a,c,b",实际上数组arr3元素为a，b，c，\n四个元素
	char arr1[] = "welcome to bit!!!!!!";//元素个数不给定
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//代表右下标。有疑问可以看第四行
	int right = strlen(arr1) - 1;//第九行和第十行的表达结果是一样的
	while (left <= right)//left和right中间有元素时才可以执行
	{
		arr2[left] = arr1[left];//把第一个#换成w
		arr2[right] = arr1[right];//把最后一个#换成！
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);//休息1000毫秒等于休息一秒
		system("cls");//systerm是执行系统命令的一个函数，cls是清空屏幕
	}

	return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)//此处密码是字符串，类型要注意
	{
		printf("请输入密码;");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//等号不能用来比较两个字符床是否相等，应该使用strcmp函数。
									   //password不能用等于号，应该用逗号
		{                              //如果password="123456"，则这个函数结果返回值为零
			printf("登录成功");
			break;
		}
		else
			printf("密码错误");
	}
	if (i == 3)
	{
		printf("三次密码均错误");
	}
	return 0;
}