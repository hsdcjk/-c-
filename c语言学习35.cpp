#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
int main()
{
	//指针数组 
	int* arr[10];
	//数组指针 
	int* (*pa)[10]=&arr;//(*pa)代表pa是指针，[10]代表该指针指向元素个数为10的数组。int*代表该数组的每个元素类型
	//函数指针
	int (*paAdd)(int , int)=Add;//函数名Add不是函数地址的代表，而是函数实体的代表。但函数名可以作为函数的地址 。Add是函数的地址，放到指针变量paAdd，则paAdd存放的是Add的地址，则Add和paAdd是一回事 
	//paAdd是一个存放函数地址的指针 (int ,int)代表函数Add的参数类型。最前面的int 代表Add的返回类型是int 
	int sum=(*paAdd)(1,2);//(*paAdd)找到该函数，然后把参数1，2传进去
	int wun=paAdd(1,2);//int wun=Add(1,2),因为paAdd和Add一样，则两种表达结果一致 
	printf("%d\n",sum);
	printf("%d\n",wun);
	return 0;
}

	//函数指针的数组
	int (*pArr[5])(int,int);//去掉数组名和其大小，剩下的int (*)(int,int)指向类型是int的函数的指针，是数组每个元素的类型。
	//指向函数指针数组的指针
	int (*(*ppArr)[5])(int,int)=&pArr;//(*ppArr)证明其是指针，[5]代表指向5个元素的数组。数组元素类型是int (*)(int,int)函数指针。
	//pArr有两个含义，一个含义是首元素的地址，也就是&pArr[0]的地址。pArr另一个含义是整个数组，&pArr是整个数组首地址。所以pArr和&pArr所取得的地址是相同的
	
	
	
	#include<stdio.h>
//回调函数：一个通过函数指针进行调用的函数。如果把函数的指针（地址）作为参数传递给另一个函数，当这个指针被用来调用其指向的函数是，我们就说这是回调函数 
 void bubble_sort(int* a,int sz)//传递过来的数组可以用指针或者数组接收 。运用冒泡排序。或者void bubble_sort(int arr[],int sz)void
{
	for(int i=0;i<sz-1;i++)
	{
		for(int j=0;j<sz-1-i;j++)//多加思考 
		{
			if(arr[j]>arr[j+1])//根据传过来的数组首元素地址&arr[0]找到该数组，然后利用该数组 
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	 } 
}
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);//把数组地址和函数个数传递给函数 。arr==&arr[0],且arr[0]是数组arr的一个整形值。则该行代表把一个整形的值的地址传递给函数，则函数可以用int* arr接收 
	{
		printf("%d ",arr[i]);
	}
	return 0;
} 

#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;
	char ch='w';
	//char* pc=&a;//a是整形，该编译环境下不a的地址能放到指针类型为char的字符指针pc
	void* p=&a;//去地址a放到p中去，p的地址是void*。且void代表空的意思，void*代表无类型的指针，p无具体类型
	*p=0;//此行出错，void*的指针不能进行简引用操作。因为指针p可以操控的类型并不确定
	p++;//此行也报错，指针加减整数时也需要确定类型，才可以确定跳过几个字节 
	p=&ch;//p中可以放char*的指针，也可以放int*的指针。void*类型的指针可以接收任意类型的地址 
	return 0;
}



#include<stdio.h>
 void bubble_sort(int* a,int sz)
{
	for(int i=0;i<sz-1;i++)
	{
		for(int j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	 } 
}
struct Stu
{
	char name[20];
	int age;
}
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	struct Stu s[3]={{"张三"，20},{"李四",30},{"老王",40}}; 
	qsort(arr,sz,sizeof[0],cmp_int);//第一个位置放数组首元素地址，第二个位置放数组大小，第三个位置放数组元素类型的大小，第四个传递函数 
	return 0;
}
