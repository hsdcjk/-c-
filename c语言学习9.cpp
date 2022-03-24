#define _CRT_SECURE_NO_WARNINGS 1
//在屏幕上输出99乘法表
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);//必须为%d*%d才能打印出结果
		}                                      //\t的作用相当于按下tab键
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
#include<cstring>//是strcpy的头文件
int main()
{
	char arr1[] = "bit";//把arr1拷贝到arr2里面去
	char arr2[20] = "#########";
	strcpy(arr2, arr1);//strcpy括号中第一个为目的地，且是把arr1拷贝到arr2里面去
	printf("%s\n", arr2);//%s的意思是输出字符串
	return 0;//字符串结束的标志是\0，strcpy连\0都会拷贝过去
}
//打印到arr2应该为bit\0#####，但是\0是字符串结束标志，则其后面的字符并不打印


#include<stdio.h>
#include<cstring>//是strcpy的头文件
int main()
{
	char arr[] = "Hello world";//把这块内存空间中的Hello设置成*
	memset(arr, '*', 5);//代表在arr数组中的一些字符进行替换，把其后面5个字符替换成*
	printf("%s\n", arr);
	return 0;
}


#include<stdio.h>
int get_max(int x, int y)//a和b都是整数，所有用int x和int y。x和y返回的值都是整数，则函数定义前加int
{
	if (x > y)
		return x;//把x返回给get_max
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//把a传给int x，把b传给int y
	int MAX = get_max(100, 300);
	printf("max=%d\nMAX=%d\n", max, MAX);
	return 0;
}


//写一个函数来交换两个整型变量的内容
#include<stdio.h>
void swap1(int x, int y)//void的意思是空，没有返回值。函数名括号后面的变量叫形参
{         //x放的应该是10，y放的应该是20。x和y，a和b都有自己独立的空间。改变x和y不会影响外面的a和b
	int tmp;
	tmp = x;
	x = y;      //形式参数只有在函数被调用时才会实例化，才会分配内存单元,形式参数调用完后会自动销毁
	y = tmp;
}
//void swap2的作用是连接void swap1和int main（）	
void swap2(int* pa, int* pb)//用pa和pb接受从第22行传来的地址,传址调用,在这个函数有可能改变函数外面变量的话时考虑
{
	int tmp;//把a和b的地址相互交换，他们对应的值自然也会交换
	tmp = *pa;//找的是外边的a
	*pa = *pb;
	*pb = tmp;//找的是外边的b

}
int main()
{
	int a = 10;
	int b = 20;//a和b都是真实传递的变量，叫实参
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	swap1(a, b);//把a和b传给swap，让其交换。只需要交换，并不需要返回
	swap2(&a, &b);//把a和b的地址传过去
	printf("a=%d b=%d\n", a, b);
	return 0;
}


//设计一个函数求出100到200之间的素数
#include<stdio.h>
int is_prime(int n)//用int n来接受下面的i，判断i是否为素数,返回的是1或者0，为整形
{
	int k;
	for (k = 2; k <= n / 2; k++)
	{
		if (n % k == 0)
			return 0;
		//els             这是错误的，不能因为有一个数无法整除他就认为他是素数
		//	return 0;
	}
	return 1;//k>=n时来到这里，证明没有素数
}
int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)//如果i为素数，则is_prime（）函数返回值是1
			printf("%d\t", i);
	}
	return 0;
}


//写一个函数判断1000到2000年间有多少个闰年
#include<stdio.h>
int is_runnian(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_runnian(year) == 1)//如果year为闰年，则返回1输出
			printf("%d\t", year);
	}
	return 0;
}


//写一个函数实现有序数组的二分查找
#include<stdio.h>
int binary_searche(int arr[], int k, int sz)//此时arr[]本质上是一个指针
{
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//左下标为0
	int right = sz - 1;
	//int mid = (left + right) / 2;此处代表二分查找只查一次
	while (left <= right)//代表中间有元素可以被查找
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//无元素查找时只能返回-1。这是写代码时程序出错点
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//关于数组不能直接传，可以先算出个数后给到函数
	int ret = binary_searche(arr, k, sz);//在arr中找k,ret接收返回值,不能输入arr[]
	if (ret == -1)                   //数组命此时此刻代表的是数组第一个元素的地址
	{
		printf("找不到指定的数字");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}


//写一个函数，每调用一次函数，就会将num的值增加1
#include<stdio.h>
void Add(int* p)//p为指针变量,p相当于num的地址
{
	(*p)++;//++的优先级高一些，++作用于p。*p才代表num
}
int main()
{
	int num = 0;
	Add(&num);//函数内部会改变num，函数要操作外面的num，应该采用传地址的形式
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//第一个printf打印的是第二个printf的返回值，第二个printf打印的是
	return 0;             //第三个函数的返回值
}
//先调用printf("%d",


