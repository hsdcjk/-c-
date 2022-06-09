#include<stdio.h>
int main()
{
	int a[]={1,2,3,4};
	printf("%d\n",sizeof(a+0));//a+0不是数组名，且a是首元素地址，则该行打印出首元素地址的大小.结果是4/8 
	printf("%d\n",sizeof(a+1));//a是首元素地址，则a+1是第二个元素的地址，结果是4/8 
	printf("%d\n",sizeof(&a));//&a取出的是数组的地址，但是数组的地址也是地址，地址的大小是4/8
	printf("%d\n",sizeof(*&a));//&a取出数组a的地址，*进行简引用，得到整个数组。可以说*和&相互抵消了。结果是16 
	printf("%d\n",sizeof(&a+1));//&a取出一个数组的地址+1后跳过一个数组的字节大小，但仍然是地址，则结果是4/8。&a+1和a+1的结果不同 
	printf("%d\n",sizeof(&a[0]));//取第一个元素的地址 
	return 0;
}
//sizeof(数组名)-数组名代表整个数组
//&数组名-数组名代表整个数组
//其余数组名代表首元素地址 

#include<stdio.h>
int main()
{
	char arr[]={'a','b','c','d','e','f'};
	printf("%d\n",sizeof(arr+0));//arr是首元素地址，+0后仍然是地址。结果是4/8
	printf("%d\n",sizeof(*arr));//arr是首元素地址，*解引用时得到第一个元素。*&arr的结果才为6
	printf("%d\n",sizeof(*&arr));
	printf("%d\n",sizeof(&arr[0]+1));//第二个元素的地址，结果是4/8 
	return 0;
}



#include<stdio.h>
#include<string.h>
//strlen函数用于求字符串长度 ,\0之前是字符长度 ，传给strlen函数的是一个地址 
int main()
{
	char arr[]={'a','b','c','d','e','f'};
	printf("%d\n",strlen(arr));//找到第六位f时没有找到\0。则一直往下找，直至找到为止，结果是随机值，devc++上随机值刚好为6 
	printf("%d\n",strlen(arr+0));//arr是首元素地址，+0之后仍然是首元素地址，函数仍然是从首元素开始计算字符串长度 ，结果是随机值 
	//printf("%d\n",strlen(*arr));//arr是首元素地址，*简引用之后得到第一个元素a，但是strlen应该传递地址，a的asc码值是97。则该行代表的意思是从位置第97的数据开始计算，导致错误 
	//printf("%d\n",strlen(&arr));strlen的原型，strlen(const char *str)。报错的原因是&arr是一个数组指针，而strlen函数中放的是字符指针 ，不相匹配，所以报错 
	printf("%d\n",strlen(&arr[0]+1));//&arr[0]+1去第二个元素地址，满足strlen函数的要求，则该函数从第二个元素开始计算长度，直到随机值 
	return 0;
}
