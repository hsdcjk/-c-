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
	int (*paAdd)(int , int)=Add;//������Add���Ǻ�����ַ�Ĵ������Ǻ���ʵ��Ĵ�����������������Ϊ�����ĵ�ַ ��Add�Ǻ����ĵ�ַ���ŵ�ָ�����paAdd����paAdd��ŵ���Add�ĵ�ַ����Add��paAdd��һ���� 
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
}
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	struct Stu s[3]={{"����"��20},{"����",30},{"����",40}}; 
	qsort(arr,sz,sizeof[0],cmp_int);//��һ��λ�÷�������Ԫ�ص�ַ���ڶ���λ�÷������С��������λ�÷�����Ԫ�����͵Ĵ�С�����ĸ����ݺ��� 
	return 0;
}
