#define _CRT_SECURE_NO_WARNINGS 1
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

#include<stdio.h>
int main()
{
	char ch='w';
	char *p=&ch;
	const char *p2="abcdef";//���ַ�����ֵ��p2ʱ��ʵ����p2�����a�ĵ�ַ��p2�ҵ�a�����ҵ��ַ����������ַ����������ǲ������޸ĵ�,const����p2�������*p2��ʹ���޷����޸� 
	int *arr[10];//��������arr�ʹ�С[10]��ȥ��֮��ʣ�µ������͡�int*,��ÿ��Ԫ�ض���int*��������������ָ��
	int arr2[5];
	int (*pa)[5]=&arr2;//ȡ��arr2�ĵ�ַ�ŵ�pa��ȥ .(*pa)����pa��ָ�룬[5]����paָ��һ��Ԫ�ظ���Ϊ5�����飬ÿ��Ԫ�ص�������int����ʱpa������ָ��
	//ָ��ȥ�����־����������͡�pa������ָ������֣�ȥ������֮��ʣ��int (*)[5]����Ϊ����ָ�����͡� 
	return 0;
}

int (*parr3[10])[5];//*parr3[10]��parr3����[10]��ϣ�˵��parr3�����顣����������[]ȥ��,ʣ��int (*)[5]ΪԪ�����ͣ�(*)����ָ�룬ָ���СΪ5�����飬�����е�Ԫ������Ϊint


 #include<stdio.h>
void test(int arr[])//arr����Ԫ�ص�ַ��������������գ�Ҳ���õ�ַ���� 
{}
void test(int arr[10])//arr[10]�е�10û���ô���������ĺ�������һ�� 
{}
void test(int* arr)//������arr����Ԫ�ص�ַ���Ҹ�����Ԫ����int�͡������д������ָ��û������ 
{} 
void test2(int* arr[20])//�����������飬��Ҳ��������գ���������20Ԫ�أ�ÿ��Ԫ��int* ��20����ʡ�� 
{}
void test2(int **arr)//��Ԫ�ص�ַ��arr2��������*arr���գ���������ÿ��Ԫ��������int*������ȷ��int **arr���Ե���int* *arr 
{}
int main()
{
	int arr[10]={0};
	int* arr2[20]={0};//arr2������ָ������� ��ÿ��Ԫ�ص����Ͷ���int* 
	test(arr);
	test2(arr2);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(int arr[3][5])//���鴫�ε�ʱ��д������û�����⣬���䱾����������ȫһ�� 
{}
void test1(int arr[][5])//����ʱ���ǿ���ʡ�Ե� 
{}
void test2(int arr[3][])//�п���ʡ�ԣ��в�����
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//��ά���鴫��
	test1(arr);
	test2(arr);
	return 0;
}

#include<stdio.h>
void test(int arr[3][5])//���鴫�ε�ʱ��д������û�����⣬���䱾����������ȫһ�� 
{}
void test1(int arr[][5])//����ʱ���ǿ���ʡ�Ե� 
{}
void test2(int arr[3][])//�п���ʡ�ԣ��в�����
{}
void test3(int (*arr)[5])//*arr����arr��һ��ָ�룬ָ��������Ԫ�ص����顣
{}
int main()
{
	int arr[3][5] = { 0 };
	test(arr);//��ά���鴫��
	test1(arr);
	test2(arr);
	test3(arr);//arr�Ƕ�ά���飬�������ǵ�һ�еĵ�ַ������ȥ��Ϊһά����ĵ�ַ��Ȼ��test�ô�СΪ5��ָ�����������û�������
	return 0;
}

//һ��ָ�봫��
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
	int sz = sizeof(arr) / sizeof(arr[0]);//�˴���arr���������������
	print(p, sz);
	return 0;
}

//����ָ�봫�� 
#include<stdio.h>
void test(int **ptr)
{
	printf("num=%d\n",**ptr);
}
int main()
{
	int n=10;
	int *p=&n;
	int **pp=&p;//��ʱ 
	test(pp);//pp��һ������ָ�룬ֱ�Ӵ���test 
	test(&p);
	return 0;
}

//����ָ�봫�� 
#include<stdio.h>
void test(int **p)
{}
int main()
{
	int *ptr;
	int **pp=&ptr;
	 test(&ptr);//��һ��ָ��ĵ�ַ����test
	test(pp);
	int* arr[10];
	test(arr);//arr����Ԫ�ص�ַ������Ԫ�ص�������int* 
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
//����ָ�룬ָ������ָ�� 
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
	printf("%p\n",&Add);//ȡ����Add�ĵ�ַ���д�ӡ 
	printf("%p\n",Add);//&�������ͺ��������Ǻ����ĵ�ַ 
	
	int (*pa)(int x,int y)=Add;//����Add����ֵ������int�����һ��������int��Add������������(int x,int y)����*pa�����Ա�֤pa��һ��ָ�� 
	printf("%d\n",(*pa)(2,3));//���д�ӡ��5 
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
	void (*p)(char* str)= print;//����ָ���������p 
	(*p)("hello bit");//*p��p���м�Ӧ�á�char�ڴ�����hello bit ��p����Ǻ����ĵ�ַ��*pͨ��p�ҵ��ú��� 
	system("pause");
	return 0;
}
