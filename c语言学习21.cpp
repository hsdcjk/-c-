#include<stdio.h>
int main()
{
	{
		int a=10;//��4��6�и�������ڶ���ı���ֻ���ڴ˸��������ʹ�� 
	}
	printf("%d\n",a);
	return 0;
}

#include<stdio.h>
void Init(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		arr[i]=0;
	}
} 
void Printf(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int arr[10]={0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Init(arr,sz);//�������ʼ��Ϊ0 
	Printf(arr,sz);
	return 0;
}

#include<stdio.h>
void Printf(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
}
void Reverse(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Printf(arr,sz);
	Reverse(arr,sz);
	Printf(arr,sz);
	return 0;
}

#include<stdio.h>
int main()//һ������Ԫ�صĽ��� 
{
	int arr1[]={1,3,5,7,9};
	int arr2[]={2,4,6,8,0};
	int tmp=0;
	int i=0;
	int sz=sizeof(arr1)/sizeof(arr1[0]);
	for(i=0;i<sz;i++)
	{
		tmp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=tmp;
		printf("%d %d ",arr1[i],arr2[i]);
	}
	
	return 0;
}

#include<stdio.h>
int main() 
{
	int arr[]={1,2,3,4,5};
	short* p=(short*)arr;//������arrǿ��ת��Ϊshort*����,short*����һ���ӷ��������ֽ�
	int i=0;
	for(i=0;i<4;i++)//forѭ���Ĵ� 
	{
		*(p+i)=0;//i=0ʱ��ֻ�ܰ�arr[0]==1��һ��λ�øĳ�0��i=1�ǲ��ܰ������е�һ��Ԫ�ظĳ�0 
	} //�ô�����8���ֽڵ����ݸ�Ϊ0����һ���������ֽ�Ϊ4
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);//ֻ�ܰ�ǰ����Ԫ�ظĳ�0	
	} 
	return 0;
}

#include<stdio.h>
int main()
{
	int a=0x11223344;
	char* pc=(char*)&a;//aȡ��ַ���Ⱥ���44332211
	*pc=0;//charֻ�ܷ���һ���ֽڣ���ֻ�ܰ�44�ĳ�00 ���޸�֮�󻹻�����11223300
	printf("%x\n",a);//%x����˼����16������ʽ������� 
	return 0;
}

#include<stdio.h>
int main()
{
	int i;//i��ȫ�ֱ�������ʼ����Ĭ��Ϊ0���ֲ���������ʼ����Ĭ��Ϊ���ֵ
	i--;//��ʱi���-1 
	if(i>sizeof(i))//sizeof���ص�ֵ�������Ǹ�����sizeof�������㷵�ص�ֵ ���޷���������һ���������޷��������㣨�Ӽ��˳��ͱȽϣ����������i��ת��Ϊ�޷������� 
	{              //iΪ�����������Ʊ�ʾ�����λ����λ��1��ת��Ϊ�޷������󣬸�1��������������ʵ�����壬��ʱ���ܴ�11111111111111111111111111111111����ԭ���ɲ���+1����� 
		printf(">\n");	
	} 
	else
	{
		printf("<\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	a=5;
	c=++a;//a��++֮��ֵ��c����ʱc=6��a=6
	b=++c,c++,++a,a++;//���ű��ʽ����������μ��㡣�˿�c=8��++a��a���7��Ȼ��ֵ��b����ʱb=7��a++����8
	b+=a++ + c;//+�����ȼ���+=�ߣ����ȼ���a++ + c�����+����a����8����b+=16����ʱb= 23��a=9
	printf("a=%d b=%d c=%d",a,b,c); 
	return 0;
}
