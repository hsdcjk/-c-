//arr-首元素的地址 
//arr[0]-首元素的地址 
//&arr-数组的地址 
#include<stdio.h>
int main()
{
	int *p=NULL;//如果不知道给他赋什么值时先赋空值NULL,,整形指针可以存放整形的地址 
	char *pc=NULL;//pc是字符指针，是指向字符的指针，可以存放字符的地址 
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p[10]=&arr;//p是指针数组(b本质上是数组)([]的结合性比*高),把数组arr的地址存到p中        该行错误,p是数组，不能把指针&arr放入 
	int (*p)[10]=&arr;//(*p),*跟p先结合则p是指针，此时p代表指针数组。把数组arr地址存进去
	 
	return 0;
}

#include<stdio.h>
int main()
{
	char *arr[5];//元素类型是指针 
	char* (*pa)[5]=&arr;//先把*pa用()括起来，确保其为指针。[5]意思是pa能指向的数组是五个元素的，元素的类型是char*
	int arr2[10]={0};
	int (*pa2)[10]=&arr2;//()把p括起来代表pa2是指针。pa2指向的数组有10个元素，且指向元素的类型是int 
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int (*pa)[10]=&arr;//&arr代表该数组的地址（不是数组首元素的地址） 
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",(*pa)[i]);//pa是数组的地址，*pa是对pa简引用以找到该数组。(*pa)[i]代表拿到*pa代表的数组中的每个元素 
	 } 
	for(i=0;i<10;i++)
	{
		printf("%d ",*(*pa+1));//pa是&arr的地址，*可以理解为与&抵消，则*pa==arr。 
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=arr;//p指向第一个元素 
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
void print1(int arr[3][5],int x,int y)//定义一个3行5列的数组接受 
{
	int i=0;int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5],int x,int y)
{
	int i=0;
	for(i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("%d ",*(*(p+i)+j));//p+i意味着第一行地址p跳过i行。*(p+i)代表找到该行，相当于拿到该行的数组名，，+j代表找到下表为j的元素。*(*(p+i))，相当于找到i行j列的元素 
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);//把数组及行列传过去
	print2(arr,3,5);//把数组第一行地址传过去 
	system("pause");
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i=0;
	int *p=arr;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
		printf("%d ",*(arr+i));
		printf("%d  ",arr[i]);//arr[i]等价于*(arr+i),又等价于*(p+i) 
	}
	return 0;
}


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


int arr[5];//arr是一个5元素的整形指针
int *parr1[10];//parr1是一个数组，数组大小为10，每个元素类型是 int*
int (*parr2)[10];//parr2是一个数组指针，该指针指向一个数组，数组有10个元素，每个元素类型是int 
int (*parr3[10])[5];//parr3是数组名，[10]是元素个数。剩下的int (* )[5]是元素类型，类型是一个数组指针，这个指针能指向五个元素的一个数组 ，数组中每个元素是int 
