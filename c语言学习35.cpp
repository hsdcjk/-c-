#include<stdio.h>
int Add(int x,int y)
{
	return x+y;
 } 
int main()
{
	//ָ������ 
	int* arr[10];
	//����ָ�� 
	int* (*pa)[10]=&arr;//(*pa)����pa��ָ�룬[10]�����ָ��ָ��Ԫ�ظ���Ϊ10�����顣int*����������ÿ��Ԫ������
	//����ָ��
	int (*paAdd)(int , int)=Add;������int (*paAdd)(int , int)=& Add;//������Add���Ǻ�����ַ�Ĵ������Ǻ���ʵ��Ĵ�����������������Ϊ�����ĵ�ַ ��Add�Ǻ����ĵ�ַ���ŵ�ָ�����paAdd����paAdd��ŵ���Add�ĵ�ַ����Add��paAdd��һ���� 
	//paAdd��һ����ź�����ַ��ָ�� (int ,int)������Add�Ĳ������͡���ǰ���int ����Add�ķ���������int 
	int sum=(*paAdd)(1,2);//(*paAdd)�ҵ��ú�����Ȼ��Ѳ���1��2����ȥ
	int wun=paAdd(1,2);//int wun=Add(1,2),��ΪpaAdd��Addһ���������ֱ����һ�� 
	printf("%d\n",sum);
	printf("%d\n",wun);
	return 0;
}

	//����ָ�������
	int (*pArr[5])(int,int);//ȥ�������������С��ʣ�µ�int (*)(int,int)ָ��������int�ĺ�����ָ�룬������ÿ��Ԫ�ص����͡�
	//ָ����ָ�������ָ��
	int (*(*ppArr)[5])(int,int)=&pArr;//(*ppArr)֤������ָ�룬[5]����ָ��5��Ԫ�ص����顣����Ԫ��������int (*)(int,int)����ָ�롣
	//pArr���������壬һ����������Ԫ�صĵ�ַ��Ҳ����&pArr[0]�ĵ�ַ��pArr��һ���������������飬&pArr�����������׵�ַ������pArr��&pArr��ȡ�õĵ�ַ����ͬ��
	
	
	
	#include<stdio.h>
//�ص�������һ��ͨ������ָ����е��õĺ���������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ�������������ָ�뱻����������ָ��ĺ����ǣ����Ǿ�˵���ǻص����� 
 void bubble_sort(int* a,int sz)//���ݹ��������������ָ������������ ������ð�����򡣻���void bubble_sort(int arr[],int sz)void
{
	for(int i=0;i<sz-1;i++)
	{
		for(int j=0;j<sz-1-i;j++)//���˼�� 
		{
			if(arr[j]>arr[j+1])//���ݴ�������������Ԫ�ص�ַ&arr[0]�ҵ������飬Ȼ�����ø����� 
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	 } 
}
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);//�������ַ�ͺ����������ݸ����� ��arr==&arr[0],��arr[0]������arr��һ������ֵ������д����һ�����ε�ֵ�ĵ�ַ���ݸ�����������������int* arr���� 
	{
		printf("%d ",arr[i]);
	}
	return 0;
} 

#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;
	char ch='w';
	//char* pc=&a;//a�����Σ��ñ��뻷���²�a�ĵ�ַ�ܷŵ�ָ������Ϊchar���ַ�ָ��pc
	void* p=&a;//ȥ��ַa�ŵ�p��ȥ��p�ĵ�ַ��void*����void����յ���˼��void*���������͵�ָ�룬p�޾�������
	*p=0;//���г���void*��ָ�벻�ܽ��м����ò�������Ϊָ��p���Բٿص����Ͳ���ȷ��
	p++;//����Ҳ����ָ��Ӽ�����ʱҲ��Ҫȷ�����ͣ��ſ���ȷ�����������ֽ� 
	p=&ch;//p�п��Է�char*��ָ�룬Ҳ���Է�int*��ָ�롣void*���͵�ָ����Խ����������͵ĵ�ַ 
	return 0;
}


#include<stdio.h>
int main()
{
	int a=10;
	char ch='w';
	int *pa=&a;
	void *p=&a;//void�ǿյ���˼��void*�������͵�ָ�룬���Խ����������͵ĵ�ַ�����԰�����a�ĵ�ַ��p 
	p=&ch;//Ҳ���԰��ַ����͵�ch��p�� 
	p=&a;//��ʱp�����������a��ֵ 
	*p=0;//���д�����ͨ����p�������ҵ�a�����Ұ�a��ֵ�ĳ�0������Ϊp�������͵�ָ�룬�޷�ȷ���������Ƿ��ʶ��ٸ��ֽڡ����Զ���void*���͵�ָ���޷����м����ò�����
	p++;//�Ӽ�ʱҲ��Ҫ֪���ֽڴ�С����void*���͵�ָ��Ҳ����++����-- 
	return 0;
}



#include<stdio.h>
 void bubble_sort(int* a,int sz)
{
	for(int i=0;i<sz-1;i++)
	{
		for(int j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	 } 
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_int(const void *e1,const void *e2)//���ڱȽ���������ֵ��e1��e2�������ڱȽ�����ֵ�ĵ�ַ 
{
	
}
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	struct Stu s[3]={{"����"��20},{"����",30},{"����",40}}; 
	qsort(arr,sz,sizeof[0],cmp_int);//��һ��λ�÷�������Ԫ�ص�ַ���ڶ���λ�÷������С��������λ�÷�����Ԫ�����͵Ĵ�С�����ĸ����ݺ��� (�ú�������������Ϊ�Ƚ϶���ͷ�����ͬ������������һ������)
	return 0;
}


//void qsort(void *base,size_t num,size_ width,int (*cmp)(const void *e1,const void *e2));
//��һ���ǵ�ַ���ڶ����������С��������������Ԫ�ص��ֽڴ�С�����ĸ����Լ����ƶ��ĺ�����ָ�룬�Ҹ�ʽ��һ�� 



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp_int(const void *e1,const void *e2)//���ڱȽ���������ֵ��e1��e2�������ڱȽ�����ֵ�ĵ�ַ ,������ʱvoid*����e1��e2���Խ����������͵�����  
{
	return *(int*)e1 -*(int*)e2;//e1��������void*��������ֱ�ӽ��м����ã���ǿ������ת��Ϊint* ��������*(int*)e1-*(int*)e2,������*(int*)e2-*(int*)e1 
	//���ǰ�����e1���ں������e2���򷵻�ֵ<0,�������򷵻�0�����򷵻�>0 
}
void test1()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0;i<sz;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
int cmp_float(const void *e1,const void *e2)
{
	return *(int*)e1 -*(int*)e2;
}
void test2()
{
	float f[]={9.0,8.0,7.0,6.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);
	for(int i=0;i<sz;i++)
		printf("%f ",f[i]);
}
struct Stu
{
	char name[20];
	int age;
};
int cmp_Stu_by_age(const void *e1,const void *e2)//���ڰ��սṹ�������С���бȽ� 
{
	return ((struct Stu*)e1)->age -((struct Stu*)e2)->age;//��e1ǿ��ת��Ϊ�ṹ��ָ�� ����ʽ�ǽṹ��ָ��->��Ա������������Ҫ������ 
}
int cmp_Stu_by_name(const void *e1,const void *e2)//���ڰ��սṹ�����ִ�С���бȽ� ����ʽ���� 
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);//�Ƚ��������֣��ַ�����������ֱ����>=<�Ƚϣ�Ӧ�����ַ����ȽϺ���strcmp 
	//strcmp������һ�����ڵڶ��������ش���0�����֡���һ��С�ڵڶ�������С��0�����֡����ʱ����0 
}
void test3()
{
	struct Stu s[3]={{"zhangsan",20},{"lisi",30},{"wamhwu",10}};
	int sz=sizeof(s)/sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_Stu_by_age);
}
int main()
{
	test1();
	test2();
	test3();
	return 0;
}


