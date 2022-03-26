#include <stdio.h>
//创建一个数组
int main()
{
	//int count = 10;
	//int arr[count];这样子创建数组是不行的，中括号内必须为常数
	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认为0
	char arr2[5] = { 'a','b' };//不完全初始化，剩下的元素默认为0
	char arr4[5] = { 'a',98 };//此行结果与第九行一样，因为b的asc码值为98
	char arr3[5] = "ab";//不完全初始化，第三个放\0，其他位置默认为0
	char arr7[] = "abc";//不给指定大小的时候，数组会根据初始化的内容，来确定数组元素的数量，后面又\0，共4字符
	char arr6[] = { 'a','b','c' };//只有abc三个字符,占三个字节
	printf("%d\n", sizeof(arr7));//
	printf("%d\n", sizeof(arr6));
	printf("%d\n", strlen(arr7)); //strlen求的是\0之前的字符串长度
	printf("%d\n", strlen(arr6));//结果是随机值，知道遇到\0
	return 0;
}


#include <stdio.h>
int main()
{
	char arr[] = "abcdrf";
	printf("%c\n", arr[3]);//打印出d
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%c\t", arr[i]);//打印出abcdef
	}
	return 0;
}



#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//数组在内存中是连续存放的
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);//去除下标为i的地址，%p是取地址符号。把i放到[]当中去
	}//运行完成后，每个数地址的结果刚好差4。一个int的字节大小刚好为4
	return 0;
}



//写一个二维数组
#include <stdio.h>
int main()
{
	int arr1[3][4] = { 1,2,3,4,5 };//代表是3行4列的数组。第一行4个放满之后会把5放到第二行。
	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };//二维数组中行可以省略，列不可以省略
	int arr3[3][4] = { {1,2,3 },{ 4, 5} };//把123放在第一行，把45放在第二行，未满部分用0代替
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr3[i][j]);//把123放在第一行，45放在第2行
			printf("&arr3[%d][%d]=%p\n", i, j, &arr3[i][j]);//二维数组按照顺序连续的
		}
		printf("\n");
	}
	return 0;
}