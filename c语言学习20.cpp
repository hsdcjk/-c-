��ι��Ұָ�룺
��1��ָ��ĳ�ʼ��
��2��С��ָ��Խ��
��3��ָ��ָ��ռ��ͷţ�����NULL�ŵ���ָ����
��4��ָ��ʹ��֮ǰ�����Ч�� 
#include<stdio.h>
int main()
{
	int a[10]={0};
	int i=0;
	int* p=a;//��a����Ԫ�صĵ�ַ��p
	for(i=0;i<=12;i++)//�Ѳ����ڸ�����ĵ�ַ��p����ᵼ��Ұָ��Ĳ��� 
	{
		//*p=i;
		//p++; 
		*p++=i;//Ϊ����++�� �ȼ�����*p���ҵ�Ԫ��a[i]�Ž�ȥ�ˣ�Ȼ��ִ��p++ 
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;//��ָ��pa���г�ʼ��
	int* pa=NULL;//��֪����ָ��paָ��˭��ʱ�򣬿��Ը�ָ��pa��һ����ָ�롣NUll������0���൱��int a=0,�Ȱ�ָ���ɿ�ָ��;��ʱָ��pa��ָ���κεط�,��ʱָ�벻�ܷ��� 
	if(p!=NUll)
	{
		*p=20;//���p������NULLʱ����ʹ��	
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10} ;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int* p=arr;
	for(i=0;i<sz;i++)
	{
		printf("%d ",*p);
		p=p+1;//p��ŵ���arr�������Ԫ�ص�ַ����p+1��ʱָ��2 
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10} ;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int* p=arr;
	for(i=0;i<5;i++)
	{
		printf("%d ",*p);
		p+=2;//p��ŵ���arr�������Ԫ�ص�ַ
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10} ;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int* p=&arr[9];//��int* p=arr��ͬ 
	for(i=0;i<5;i++)
	{
		printf("%d ",*p);
		p=p-2;//p��ŵ���arr[9]Ԫ�ص�ַ����p+3��ʱָ��2 
	}
	return 0; 
}

#include<stdio.h>
#define N_VALUES 5
float values[N_VALUES];//����һ��float��Ϊvalues�ģ��Ҵ�СΪ5������ 
float *vp;//����һ��float���͵�ָ����� 
int main()
{
	for(vp=&values[0];vp<&values[N_VALUES])��//��������Ԫ�ظ�ֵ��vp��vp++�� ��һ��ʵ�֣�����ʽ3ʡ�� 
	{
		*vp++;//�Ǻ���++���Ȱ�vpָ��Ԫ�ظĳ�0��Ȼ��++��ʹ��vpָ����һ��Ԫ�� ����Ѹ�����Ԫ��ȫ���ĳ�0 
	}
	return 0; 
}

#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	printf("%d\n",&arr[9]-&arr[0]);//������ַ����õ��м��Ԫ�ظ���Ϊ9��
	printf("%d\n",&arr[0]-&arr[9]);//С��ַ�����ַ�õ��ľ���ֵ���м��Ԫ�ظ��� 
	return 0; 
}


#include<stdio.h>
#define N_VALUES 5
float values[N_VALUES];
float *vp; 
int main()
{
	for(vp=&values[N_VALUES];vp>&values[0])//values[5]�Ѿ�����������ķ�Χ 
	{
		*--vp=0;//����ǰ��--��������--vp��Ȼ����м����ã��ҵ�values[4]�Ŀռ䡣vp������ڶ���λ��ʱ��vp>&values[0],Ȼ��--���ٰ�0��ֵ����һ��λ�á���5��Ԫ�ظĳ�0 
	}
	for(vp=&values[N_VALUES-1];vp>=&values[0],vp--)//���ѡ���һ��д�� 
	{
		*vp=0;//��7��10�е�������ͬ 
	}
	return 0; 
}

#include<stdio.h>//������������main����֮ǰʱ��main��������Ͳ���Ҫ�ٴ�����������ֱ�ӵ���
int my_strlen(char* str)//����������ӹ�������������Ԫ�صĵ�ַ,����char* str���ڴ�ʱ��str���� 
{                       ////����������ĺ�����ϳ���һ����䶨����main����֮��  
	char* start=str;
	char* end=str;
	while(*end!='\0')
	{
		end++;
	}
	return end-start;
}
int main()
{
	char arr[]="bit";//ʵ���Ϸ������'b' 'i' 't' '\0'
	int len=my_strlen(arr);//��arr�����ھ��е�str����ζ��str���ָ��ָ��arr����ʼλ�� 
	printf("%d\n",len);
	return 0; 
}

#include<stdio.h>
int main()
{
	int arr[10]={0};
	printf("%p\n",arr);//arr������Ԫ�صĵ�ַ
	printf("%p\n",arr+1);//�׵�ַ+1�����ڶ���λ�ã�����б���һ�ж�4���ֽ� 
	printf("%p\n",&arr);//arr������������ 
	printf("%p\n",&arr+1);//���б���һ�ж�40���պ���arr������ֽڳ��� 
	return 0; 
}
//&arr��&����������������������Ԫ�ص�ַ����ʱ��������������������
//sizeod(arr)����ʱ��������ʾ������������ 

#include<stdio.h>
int main()
{
	int arr[10]={0};
	int* p=arr;
	int i=0;
	for(i=0;i<10;i++)
	{ 
		printf("%p ===== %p\n",p+i,&arr[i]);//p+i��&arr[i]�Ľ����һ���� 
	}
	for(i=0;i<10;i++)
	{ 
		*(p+i)=i;
		printf("%d ",arr[i]);
	}
	return 0; 
}


#include<stdio.h>
int main()
{
	int a=10;
	int* pa=&a;//pa��һ��ָ�������int*��һ��ָ������
	int** ppa=&pa;//���ڴ����õ�pa�ĵ�ַ�浽ppa ,ppa���Ƕ���ָ�롣int* ����ppaָ��Ķ�������͵�ָ�룬�ڶ���*����ppa��ָ�� 
	printf("%d\n",**ppa);//ppa�����ŵ���pa�ĵ�ַ����ǰ���*���ҵ�pa���������ŵ���a�ĵ�ַ���ټ�*�����ҵ�a 
	**ppa=20;
	printf("%d\n",**ppa); 
//	int*** pppa=&ppa;//pppa������ָ�� 
	return 0; 
}

#include<stdio.h>
int main()
{
	int a=10,b=20,c=30;
	int* arr[3]={&a,&b,&c}; 
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(arr[i]));//ͨ��abc�ĵ�ַ�ҵ�abc��ֵ 
	} 
	return 0;	
} 
//ָ������ʵ�����Ǵ��ָ�������





