#include<stdio.h>
int main()
{
	{
		int a=10;//在4到6行复合语句内定义的变量只能在此复合语句内使用 
	}
	printf("%d\n",a);
	return 0;
}

#include<stdio.h>
void Init(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		arr[i]=0;
	}
} 
void Printf(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[10]={0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Init(arr,sz);//把数组初始化为0 
	Printf(arr,sz);
	return 0;
}

#include<stdio.h>
void Printf(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
void Reverse(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Printf(arr,sz);
	Reverse(arr,sz);
	Printf(arr,sz);
	return 0;
}

#include<stdio.h>
int main()//一对数组元素的交换 
{
	int arr1[]={1,3,5,7,9};
	int arr2[]={2,4,6,8,0};
	int tmp=0;
	int i=0;
	int sz=sizeof(arr1)/sizeof(arr1[0]);
	for(i=0;i<sz;i++)
	{
		tmp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=tmp;
		printf("%d %d ",arr1[i],arr2[i]);
	}
	
	return 0;
}

#include<stdio.h>
int main() 
{
	int arr[]={1,2,3,4,5};
	short* p=(short*)arr;//把数组arr强制转化为short*类型,short*可以一下子访问两个字节
	int i=0;
	for(i=0;i<4;i++)//for循环四次 
	{
		*(p+i)=0;//i=0时，只能把arr[0]==1的一半位置改成0，i=1是才能把数组中第一个元素改成0 
	} //该代码块把8个字节的内容改为0，且一个整数的字节为4
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);//只能把前两个元素改成0	
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int a=0x11223344;
	char* pc=(char*)&a;//a取地址的先后是44332211
	*pc=0;//char只能访问一个字节，则只能把44改成00 ，修改之后还回来是11223300
	printf("%x\n",a);//%x的意思是以16进制形式输出整数 
	return 0;
}

#include<stdio.h>
int main()
{
	int i;//i是全局变量不初始化则默认为0。局部变量不初始化则默认为随机值
	i--;//此时i变成-1 
	if(i>sizeof(i))//sizeof返回的值不可能是负数，sizeof真正计算返回的值 是无符号数。当一个整数和无符号数运算（加减乘除和比较），会把整形i先转化为无符号数。 
	{              //i为负数，二进制表示是最高位符号位是1，转化为无符号数后，该1不代表负数，而有实际意义，此时数很大（11111111111111111111111111111111），原码变成补码+1后输出 
		printf(">\n");	
	} 
	else
	{
		printf("<\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	a=5;
	c=++a;//a先++之后赋值给c，此时c=6，a=6
	b=++c,c++,++a,a++;//逗号表达式会从左到右依次计算。此刻c=8，++a后a变成7，然后赋值给b，此时b=7，a++后变成8
	b+=a++ + c;//+的优先级比+=高，则先计算a++ + c，算该+号是a还是8，则b+=16，此时b= 23，a=9
	printf("a=%d b=%d c=%d",a,b,c); 
	return 0;
}
