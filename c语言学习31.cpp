//arr-��Ԫ�صĵ�ַ 
//arr[0]-��Ԫ�صĵ�ַ 
//&arr-����ĵ�ַ 
#include<stdio.h>
int main()
{
	int *p=NULL;//�����֪��������ʲôֵʱ�ȸ���ֵNULL,,����ָ����Դ�����εĵ�ַ 
	char *pc=NULL;//pc���ַ�ָ�룬��ָ���ַ���ָ�룬���Դ���ַ��ĵ�ַ 
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p[10]=&arr;//p��ָ������(b������������)([]�Ľ���Ա�*��),������arr�ĵ�ַ�浽p��        ���д���,p�����飬���ܰ�ָ��&arr���� 
	int (*p)[10]=&arr;//(*p),*��p�Ƚ����p��ָ�룬��ʱp����ָ�����顣������arr��ַ���ȥ
	 
	return 0;
}

#include<stdio.h>
int main()
{
	char *arr[5];//Ԫ��������ָ�� 
	char* (*pa)[5]=&arr;//�Ȱ�*pa��()��������ȷ����Ϊָ�롣[5]��˼��pa��ָ������������Ԫ�صģ�Ԫ�ص�������char*
	int arr2[10]={0};
	int (*pa2)[10]=&arr2;//()��p����������pa2��ָ�롣pa2ָ���������10��Ԫ�أ���ָ��Ԫ�ص�������int 
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int (*pa)[10]=&arr;//&arr���������ĵ�ַ������������Ԫ�صĵ�ַ�� 
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",(*pa)[i]);//pa������ĵ�ַ��*pa�Ƕ�pa���������ҵ������顣(*pa)[i]�����õ�*pa����������е�ÿ��Ԫ�� 
	 } 
	for(i=0;i<10;i++)
	{
		printf("%d ",*(*pa+1));//pa��&arr�ĵ�ַ��*�������Ϊ��&��������*pa==arr�� 
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *p=arr;//pָ���һ��Ԫ�� 
	int i=0;
	for(i=0;i<10;i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
void print1(int arr[3][5],int x,int y)//����һ��3��5�е�������� 
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
			printf("%d ",*(*(p+i)+j));//p+i��ζ�ŵ�һ�е�ַp����i�С�*(p+i)�����ҵ����У��൱���õ����е�����������+j�����ҵ��±�Ϊj��Ԫ�ء�*(*(p+i))���൱���ҵ�i��j�е�Ԫ�� 
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);//�����鼰���д���ȥ
	print2(arr,3,5);//�������һ�е�ַ����ȥ 
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
		printf("%d  ",arr[i]);//arr[i]�ȼ���*(arr+i),�ֵȼ���*(p+i) 
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
			printf("%d ",*(*(p+i)+j));//p�ǵ�һ�е�ַ. 
		    printf("%d ",p[i][j]);
			printf("%d ",*(p[i]+j));//p[i]�൱��*(p+i) ,p�ǵ�һ���׵�ַ��p+i�ǵ�i���׵�ַ��*(p+i)���ҵ�p+i�� 
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


int arr[5];//arr��һ��5Ԫ�ص�����ָ��
int *parr1[10];//parr1��һ�����飬�����СΪ10��ÿ��Ԫ�������� int*
int (*parr2)[10];//parr2��һ������ָ�룬��ָ��ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ��������int 
int (*parr3[10])[5];//parr3����������[10]��Ԫ�ظ�����ʣ�µ�int (* )[5]��Ԫ�����ͣ�������һ������ָ�룬���ָ����ָ�����Ԫ�ص�һ������ ��������ÿ��Ԫ����int 
