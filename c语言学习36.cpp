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
void bubble_sort(void *base,int sz,int width,int (*cmp)(void *e1,void *e2))//width��Ԫ����ռ���ֽ� 
{
	int i=0;
	//���� 
	for(i=0;i<sz-1;i++)
	{
		//ÿһ�˵Ķ���
		int j=0;
		for(j=0;j<sz-1-i;j++)
		{
			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)//cmp����ʹ��ʱ��һ��Ԫ�ش��ڵڶ���Ԫ��ʱ�����������0��base�������ַ������ǿ��ת��Ϊchar*����Ϊcharռһ���ֽڣ���char*��base+width������width���ֽ�
			//�ô�����ʵ��������cmp�����Ľ��>0����н���
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
	//ʹ�øú���ʱ��Ӧ��֪����αȽ������е�Ԫ�� 
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
