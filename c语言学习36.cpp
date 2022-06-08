#include<stdio.h>
int cmp_int(void *e1,void *e2)
{
	return *(int*)e1-*(int*)e2;
}
void Swap(char *buf1,char *buf2,int width)
{
	int i=0;
	for(i=0;i<width;i++)
	{
		char tmp=*buf1;
		*buf1=*buf2;
		*buf2=tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void *base,int sz,int width,int (*cmp)(void *e1,void *e2))//width是元素所占的字节 
{
	int i=0;
	//趟数 
	for(i=0;i<sz-1;i++)
	{
		//每一趟的对数
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//cmp函数使用时第一个元素大于第二个元素时，则结果会大于0。base是数组地址，将其强制转化为char*，因为char占一个字节，则（char*）base+width就跳过width个字节
			//该代码是实现升序，且cmp函数的结果>0则进行交换
			{
				Swap((char*)base+j*width,(char*)base+(j+1)*width,width);
			}
		 } 
	}
}
void test4()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//使用该函数时，应该知道如何比较数组中的元素 
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_Stu_by_age(void *e1,void *e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}
void test5()
{
	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wangwu",30}};
	int sz=sizeof(s)/sizeof(s[0]);
	bubble_sort(s,sz,sizeof(s[0]),cmp_Stu_by_age);	
}
int main()
{
	 test4();
	return 0;
}
