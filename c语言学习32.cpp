#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print2(int (*p)[5],int x,int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",*(*(p+i)+j));//p是第一行地址. 
		    printf("%d ",p[i][j]);
			printf("%d ",*(p[i]+j));//p[i]相当于*(p+i) ,p是第一行首地址，p+i是第i行首地址，*(p+i)是找到p+i行 
			printf("%d ",(*(p+i))[j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print2(arr,3,5);
	return 0;
}

#include<stdio.h>
int main()
{
	char ch='w';
	char *p=&ch;
	const char *p2="abcdef";//把字符串赋值给p2时，实际上p2存的是a的地址，p2找到a就能找到字符串。常量字符串的内容是不允许被修改的,const放在p2左边修饰*p2，使其无法被修改 
	int *arr[10];//把数组名arr和大小[10]，去掉之后剩下的是类型。int*,则每个元素都是int*，该数组存放整形指针
	int arr2[5];
	int (*pa)[5]=&arr2;//取出arr2的地址放到pa中去 .(*pa)代表pa是指针，[5]代表pa指向一个元素个数为5的数组，每个元素的类型是int。此时pa是数组指针
	//指针去掉名字就是他的类型。pa是数组指针的名字，去掉名字之后剩下int (*)[5]，此为数组指针类型。 
	return 0;
}

int (*parr3[10])[5];//*parr3[10]中parr3先与[10]结合，说明parr3是数组。把数组名和[]去掉,剩下int (*)[5]为元素类型，(*)代表指针，指向大小为5的数组，数组中的元素类型为int


 #include<stdio.h>
void test(int arr[])//arr是首元素地址，既能用数组接收，也能用地址接收 
{}
void test(int arr[10])//arr[10]中的10没有用处，跟上面的函数作用一致 
{}
void test(int* arr)//数组名arr是首元素地址，且该数组元素是int型。则参数写成整形指针没有问题 
{} 
void test2(int* arr[20])//传过来是数组，我也用数组接收，该数组有20元素，每个元素int* 。20可以省略 
{}
void test2(int **arr)//首元素地址是arr2，可以用*arr接收，且数组中每个元素类型是int*。则正确。int **arr可以当成int* *arr 
{}
int main()
{
	int arr[10]={0};
	int* arr2[20]={0};//arr2是整形指针的数组 ，每个元素的类型都是int* 
	test(arr);
	test2(arr2);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(int arr[3][5])//数组传参的时候写成这样没有问题，跟其本来的数组完全一致 
{}
void test1(int arr[][5])//传参时行是可以省略的 
{}
void test2(int arr[3][])//行可以省略，列不可以
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//二维数组传参
	test1(arr);
	test2(arr);
	return 0;
}

#include<stdio.h>
void test(int arr[3][5])//数组传参的时候写成这样没有问题，跟其本来的数组完全一致 
{}
void test1(int arr[][5])//传参时行是可以省略的 
{}
void test2(int arr[3][])//行可以省略，列不可以
{}
void test3(int (*arr)[5])//*arr代表arr是一个指针，指向的是五个元素的数组。
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//二维数组传参
	test1(arr);
	test2(arr);
	test3(arr);//arr是二维数组，数组名是第一行的地址。传过去则为一维数组的地址，然后test用大小为5的指针数组接收是没有问题的
	return 0;
}

//一级指针传参
#include<stdio.h>
void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + 1));
	}

}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);//此处的arr代表的是整个数组
	print(p, sz);
	return 0;
}

//二级指针传参 
#include<stdio.h>
void test(int **ptr)
{
	printf("num=%d\n",**ptr);
}
int main()
{
	int n=10;
	int *p=&n;
	int **pp=&p;//此时 
	test(pp);//pp是一个二级指针，直接传到test 
	test(&p);
	return 0;
}

//二级指针传参 
#include<stdio.h>
void test(int **p)
{}
int main()
{
	int *ptr;
	int **pp=&ptr;
	 test(&ptr);//把一级指针的地址传给test
	test(pp);
	int* arr[10];
	test(arr);//arr是首元素地址，且首元素的类型是int* 
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
//函数指针，指向函数的指针 
int Add(int x,int y)
{
	int z=0;
	z=x+y;
	return z;
}
int main()
{
	int a=10;
	int b=20;
	printf("%d\n",Add(a,b));
	printf("%p\n",&Add);//取函数Add的地址进行打印 
	printf("%p\n",Add);//&函数名和函数名都是函数的地址 
	
	int (*pa)(int x,int y)=Add;//函数Add返回值类型是int，则第一个类型用int。Add的两个参数是(int x,int y)。（*pa）可以保证pa是一个指针 
	printf("%d\n",(*pa)(2,3));//此行打印出5 
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
void print(char* str)
{
	printf("%s\n",str);
}
int main()
{
	void (*p)(char* str)= print;//函数指针的名字是p 
	(*p)("hello bit");//*p对p进行简应用。char在此行是hello bit 。p存的是函数的地址，*p通过p找到该函数 
	system("pause");
	return 0;
}
