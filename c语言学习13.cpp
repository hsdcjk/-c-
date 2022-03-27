#define _CRT_SECURE_NO_WARNINGS 1
void bubble_sort(int arr[], int sz)//下面的是数组，则这里必须也应该以数组相对应，此处arr[]实际上是一个指针
{
	int i = 0;
	//	int sz = sizeof(arr) / sizeof(arr[0]);//传数组的参的时候，传到实际上是数组首字母的地址。sizeof(arr)是指针大小
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;//如果这一趟要排的数据已经有序，则flag=1
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//如果该数组的元素都不需要交换时，flag=0
			}
		}
		if (flag == 1)
		{
			break;//break只能用于循环或者开关中
		}
	}
}
#include <stdio.h>
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);//对arr进行排序,从小到大。应该先把数组大小算好在传到上面函数去
	for (i = 0; i < sz; i++)
	{
		printf(" %d", arr[i]);
	}  
	return 0;
}



#include<stdio.h>
int main()
{      //数组名一般表示数组首元素，但是有两个例外
	int arr[] = { 1,2,3,4,5,6,7 };//不要忘记[]
	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof(数组名)，其中的数组名代表整个数组
	&arr;//&数组名，数组名代表整个数组
	printf("%p\n", arr);//打印arr的地址。数组名就是我们的首元素地址
	printf("%p\n", &arr[0]);//打印数组中首元素地址
	printf("%d\n", *arr);//通过*arr,可以找到1，则证明arr代表的是首元素地址
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };//不要忘记[]
	printf("%p\n", arr);
	printf("%p\n", arr + 1);
	printf("%p\n", &arr);//6,8行结果相同，只是因为arr从1开始，代表的是整个数组的地址
	printf("%p\n", &arr + 1);//第7，9行结果不一样，一个整形4个字节，两行结果刚好差arr数组字节的大小
	return 0;
}








