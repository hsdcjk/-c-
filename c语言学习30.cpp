#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(int arr[])//����arr����Ԫ�ص�ַ����arr[]��������ָ�룬����void 
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
	char* pc = arr;//����������pc����pc�൱��ָ����ַ�����
	printf("%s\n", arr);
	printf("%s\n", pc);
	return 0;
}

#include<stdio.h>
int main()
{
	char* p = "abcdef";//�ڴ��з�һ���ַ���"abcdef"���г����ַ���.ʵ�����ǰ�a�ĵ�ַ��ֵ��p
	printf("%c\n", *p);//p��������a�ĵ�ַ����*p����a
	printf("%s\n",p);//��p��ŵĵ�ַ����ӡһ���ַ��� 
	return 0;
}

#include<stdio.h>
int main()
{
	char arr1[]="abcdef";//��������������ͬ���ڴ�ռ� 
	char arr2[]="abcdef";
	char *p1="abcdef";//����������һ�ж��ǳ����ַ����������ַ��������ϲ����޸� 
	char *p2= "abcdef";//p1��p2�����鲻ͬ���ڴ�ռ䣬��p1��p2��ָ��ͬһ���ڴ�ռ� ��abcdef���Ŀռ� 
	if(arr1==arr2)//arr1��arr2��������ͬ�Ŀռ䣬��arr1��arr2��Ȼ��һ�� 
	{
		printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	if(p1==p2)//��ָ��ͬһ���ڴ�ռ䣬��p1==p2 
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
	int *parr[4];//�������ָ�������,ָ������
	char *pch[5];//����ַ�ָ������飬ָ������ 
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
		printf("%d ",*(arr[i]));//arr[i]����Ԫ�ص�ַ��*arr[i]����õ�ַ��Ԫ�� 
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
		//parr[i]          //parr[0]��arr1��Ԫ�صĵ�ַ��parr[1]��arr2��Ԫ�صĵ�ַ 
		{
			printf("%d ",*(parr[i]+j));//i��0��j��0ʱָ��1��j��1ʱָ��2 
		}
		printf("\n");
	 } 
	return 0;
}


