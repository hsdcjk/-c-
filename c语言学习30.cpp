#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(int arr[])//下面arr是首元素地址，则arr[]本质上是指针，或者void 
{
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
}
int main()
{
	int arr[10] = { 0 };
	test(arr);
	return 0;
}

#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	char* pc = arr;//数组名赋给pc，则pc相当于指向该字符数组
	printf("%s\n", arr);
	printf("%s\n", pc);
	return 0;
}

#include<stdio.h>
int main()
{
	char* p = "abcdef";//内存中放一个字符串"abcdef"，叫常量字符串.实际上是把a的地址赋值给p
	printf("%c\n", *p);//p里面存的是a的地址，则*p就是a
	printf("%s\n",p);//从p存放的地址处打印一个字符串 
	return 0;
}

#include<stdio.h>
int main()
{
	char arr1[]="abcdef";//创建的是两个不同的内存空间 
	char arr2[]="abcdef";
	char *p1="abcdef";//该行与下面一行都是常量字符串，常量字符串理论上不可修改 
	char *p2= "abcdef";//p1与p2是两块不同的内存空间，但p1和p2都指向同一块内存空间 “abcdef”的空间 
	if(arr1==arr2)//arr1与arr2在两个不同的空间，则arr1与arr2自然不一样 
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	if(p1==p2)//都指向同一块内存空间，则p1==p2 
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10]={0};
	char ch[5]={0};
	int *parr[4];//存放整形指针的数组,指针数组
	char *pch[5];//存放字符指针的数组，指针数组 
	return 0;
}

#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	int *arr[4]={&a,&b,&c,&d};
	for(int i=0;i<4;i++)
	{
		printf("%d ",*(arr[i]));//arr[i]代表元素地址，*arr[i]代表该地址的元素 
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={2,3,4,5,6};
	int arr3[]={3,4,5,6,7};
	int *parr[]={arr1,arr2,arr3};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		//parr[i]          //parr[0]是arr1首元素的地址，parr[1]是arr2首元素的地址 
		{
			printf("%d ",*(parr[i]+j));//i是0，j是0时指向1，j是1时指向2 
		}
		printf("\n");
	 } 
	return 0;
}


