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
	int (*paAdd)(int , int)=Add;或者是int (*paAdd)(int , int)=& Add;//函数名Add不是函数地址的代表，而是函数实体的代表。但函数名可以作为函数的地址 。Add是函数的地址，放到指针变量paAdd，则paAdd存放的是Add的地址，则Add和paAdd是一回事 
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
int main()
{
	int a=10;
	char ch='w';
	int *pa=&a;
	void *p=&a;//void是空的意思，void*叫无类型的指针，可以接收任意类型的地址。可以把整形a的地址给p 
	p=&ch;//也可以把字符类型的ch给p； 
	p=&a;//此时p放入的是整形a的值 
	*p=0;//该行代表是通过对p简引用找到a，并且把a的值改成0。但因为p是无类型的指针，无法确定简引用是访问多少个字节。所以对于void*类型的指针无法进行简引用操作。
	p++;//加减时也需要知道字节大小，则void*类型的指针也不能++或者-- 
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
};
int cmp_int(const void *e1,const void *e2)//用于比较两个整形值。e1和e2是你用于比较两个值的地址 
{
	
}
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	struct Stu s[3]={{"张三"，20},{"李四",30},{"老王",40}}; 
	qsort(arr,sz,sizeof[0],cmp_int);//第一个位置放数组首元素地址，第二个位置放数组大小，第三个位置放数组元素类型的大小，第四个传递函数 (该函数是你依据因为比较对象和方法不同而创建出来的一个函数)
	return 0;
}


//void qsort(void *base,size_t num,size_ width,int (*cmp)(const void *e1,const void *e2));
//第一个是地址，第二个是数组大小，第三个是数组元素的字节大小，第四个是自己所制定的函数的指针，且格式需一样 



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp_int(const void *e1,const void *e2)//用于比较两个整形值。e1和e2是你用于比较两个值的地址 ,且类型时void*，则e1和e2可以接收任意类型的数据  
{
	return *(int*)e1 -*(int*)e2;//e1的类型是void*，不可以直接进行简引用，则强制类型转化为int* 。升序是*(int*)e1-*(int*)e2,降序是*(int*)e2-*(int*)e1 
	//如果前面的数e1大于后面的数e2，则返回值<0,如果相等则返回0，否则返回>0 
}
void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int cmp_float(const void *e1,const void *e2)
{
	return *(int*)e1 -*(int*)e2;
}
void test2()
{
	float f[]={9.0,8.0,7.0,6.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);
	for(int i=0;i<sz;i++)
		printf("%f ",f[i]);
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_Stu_by_age(const void *e1,const void *e2)//用于按照结构体年龄大小进行比较 
{
	return ((struct Stu*)e1)->age -((struct Stu*)e2)->age;//把e1强制转化为结构体指针 。格式是结构体指针->成员变量，并不需要解引用 
}
int cmp_Stu_by_name(const void *e1,const void *e2)//用于按照结构体名字大小进行比较 ，格式不变 
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);//比较两个名字（字符串），不能直接用>=<比较，应该用字符串比较函数strcmp 
	//strcmp函数第一个大于第二个，返回大于0的数字。第一个小于第二个返回小于0的数字。相等时返回0 
}
void test3()
{
	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wamhwu",10}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_Stu_by_age);
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}


