#define _CRT_SECURE_NO_WARNINGS 1
void bubble_sort(int arr[], int sz)//����������飬���������ҲӦ�����������Ӧ���˴�arr[]ʵ������һ��ָ��
{
	int i = 0;
	//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ĳε�ʱ�򣬴���ʵ��������������ĸ�ĵ�ַ��sizeof(arr)��ָ���С
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//�����һ��Ҫ�ŵ������Ѿ�������flag=1
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//����������Ԫ�ض�����Ҫ����ʱ��flag=0
			}
		}
		if (flag == 1)
		{
			break;//breakֻ������ѭ�����߿�����
		}
	}
}
#include <stdio.h>
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//��arr��������,��С����Ӧ���Ȱ������С����ڴ������溯��ȥ
	for (i = 0; i < sz; i++)
	{
		printf(" %d", arr[i]);
	}  
	return 0;
}



#include<stdio.h>
int main()
{      //������һ���ʾ������Ԫ�أ���������������
	int arr[] = { 1,2,3,4,5,6,7 };//��Ҫ����[]
	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(������)�����е�������������������
	&arr;//&��������������������������
	printf("%p\n", arr);//��ӡarr�ĵ�ַ���������������ǵ���Ԫ�ص�ַ
	printf("%p\n", &arr[0]);//��ӡ��������Ԫ�ص�ַ
	printf("%d\n", *arr);//ͨ��*arr,�����ҵ�1����֤��arr���������Ԫ�ص�ַ
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };//��Ҫ����[]
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr);//6,8�н����ͬ��ֻ����Ϊarr��1��ʼ�����������������ĵ�ַ
	printf("%p\n", &arr + 1);//��7��9�н����һ����һ������4���ֽڣ����н���պò�arr�����ֽڵĴ�С
	return 0;
}








