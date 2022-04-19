如何规避野指针：
（1）指针的初始化
（2）小心指针越界
（3）指针指向空间释放，即把NULL放到该指针中
（4）指针使用之前检查有效性 
#include<stdio.h>
int main()
{
	int a[10]={0};
	int i=0;
	int* p=a;//把a的首元素的地址给p
	for(i=0;i<=12;i++)//把不属于该数组的地址给p，则会导致野指针的产生 
	{
		//*p=i;
		//p++; 
		*p++=i;//为后置++。 先简引用*p，找到元素a[i]放进去了，然后执行p++ 
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;//对指针pa进行初始化
	int* pa=NULL;//不知道给指针pa指向谁的时候，可以给指针pa赋一个空指针。NUll本质是0，相当于int a=0,先把指针搞成空指针;此时指针pa不指向任何地方,此时指针不能访问 
	if(p!=NUll)
	{
		*p=20;//如果p不等于NULL时才能使用	
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10} ;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int* p=arr;
	for(i=0;i<sz;i++)
	{
		printf("%d ",*p);
		p=p+1;//p存放的是arr数组的首元素地址，则p+1此时指向2 
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10} ;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int* p=arr;
	for(i=0;i<5;i++)
	{
		printf("%d ",*p);
		p+=2;//p存放的是arr数组的首元素地址
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10} ;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int* p=&arr[9];//与int* p=arr不同 
	for(i=0;i<5;i++)
	{
		printf("%d ",*p);
		p=p-2;//p存放的是arr[9]元素地址，则p+3此时指向2 
	}
	return 0; 
}

#include<stdio.h>
#define N_VALUES 5
float values[N_VALUES];//创建一个float名为values的，且大小为5的数组 
float *vp;//定义一个float类型的指针变量 
int main()
{
	for(vp=&values[0];vp<&values[N_VALUES])；//把数组首元素赋值给vp。vp++在 下一行实现，则表达式3省略 
	{
		*vp++;//是后置++，先把vp指的元素改成0，然后++，使得vp指向下一个元素 。则把该数组元素全部改成0 
	}
	return 0; 
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9]-&arr[0]);//两个地址相减得到中间的元素个数为9个
	printf("%d\n",&arr[0]-&arr[9]);//小地址减大地址得到的绝对值是中间的元素个数 
	return 0; 
}


#include<stdio.h>
#define N_VALUES 5
float values[N_VALUES];
float *vp; 
int main()
{
	for(vp=&values[N_VALUES];vp>&values[0])//values[5]已经超过了数组的范围 
	{
		*--vp=0;//属于前置--，进来先--vp，然后进行简引用，找到values[4]的空间。vp在数组第二个位置时，vp>&values[0],然后--，再把0赋值给第一个位置。把5个元素改成0 
	}
	for(vp=&values[N_VALUES-1];vp>=&values[0],vp--)//最好选择第一种写法 
	{
		*vp=0;//与7到10行的作用相同 
	}
	return 0; 
}

#include<stdio.h>//当函数定义在main函数之前时，main函数里面就不需要再次声明，可以直接调用
int my_strlen(char* str)//下面第五行扔过来的是数组首元素的地址,则用char* str。在此时将str定义 
{                       ////当函数定义的函数体较长，一般把其定义在main函数之后  
	char* start=str;
	char* end=str;
	while(*end!='\0')
	{
		end++;
	}
	return end-start;
}
int main()
{
	char arr[]="bit";//实际上放入的是'b' 'i' 't' '\0'
	int len=my_strlen(arr);//把arr传给第九行的str，意味着str这个指针指向arr的起始位置 
	printf("%d\n",len);
	return 0; 
}

#include<stdio.h>
int main()
{
	int arr[10]={0};
	printf("%p\n",arr);//arr代表首元素的地址
	printf("%p\n",arr+1);//首地址+1，到第二个位置，则该行比上一行多4个字节 
	printf("%p\n",&arr);//arr代表整个数组 
	printf("%p\n",&arr+1);//该行比上一行多40，刚好是arr数组的字节长度 
	return 0; 
}
//&arr，&数组名。其数组名不是首元素地址，此时的数组名代表整个数组
//sizeod(arr)，此时数组名表示的是整个数组 

#include<stdio.h>
int main()
{
	int arr[10]={0};
	int* p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{ 
		printf("%p ===== %p\n",p+i,&arr[i]);//p+i和&arr[i]的结果是一样的 
	}
	for(i=0;i<10;i++)
	{ 
		*(p+i)=i;
		printf("%d ",arr[i]);
	}
	return 0; 
}


#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;//pa是一级指针变量，int*是一级指针类型
	int** ppa=&pa;//在内存中拿到pa的地址存到ppa ,ppa就是二级指针。int* 代表ppa指向的对象的类型的指针，第二颗*代表ppa是指针 
	printf("%d\n",**ppa);//ppa里面存放的是pa的地址，其前面加*则找到pa，怕里面存放的是a的地址，再加*，则找到a 
	**ppa=20;
	printf("%d\n",**ppa); 
//	int*** pppa=&ppa;//pppa是三级指针 
	return 0; 
}

#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int* arr[3]={&a,&b,&c}; 
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(arr[i]));//通过abc的地址找到abc的值 
	} 
	return 0;	
} 
//指针数组实际上是存放指针的数组





