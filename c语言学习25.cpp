#include<stdio.h>
#include<string.h>
void my_strcpy(char* dest,char* src)//只需要拷贝，不需要返回，则用void。 
{
	while(*src!='\0')
	{
		*dest=*src; 
		src++;//src是字符指针++，刚好跳到下一个元素
		dest++; 
	}
	*dest=*src;//*src='\0'时，把*src赋值给dest 
}
int main()
{
	char arr1[]="################";
	char arr2[]="bit";
	strcpy(arr1,arr2);//strcpy的函数专门用来拷贝字符串.且拷贝后的目的地arr1放在前面，拷贝的源头arr2放在后面
	printf("%s\n",arr1);//bit后面还有\0,当拷贝到\0时就停止拷贝，则只打印出bit 
	my_strcpy(arr1,arr2); 
	printf("%s\n",arr1);
	return 0;
}


