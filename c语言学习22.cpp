#include<stdio.h>
#include<stdlib.h> 
//дһ��������a�Ķ�����(����)��ʾ���м���1 
//13�Ķ�������00000000000000000000000000001101��13��2����6��1��1101���110Ϊ6��6��2����3��1��Ϊ11��3��������1��1 ��1��2����0��1 
int count_bit_one(unsigned int n)//���������ת��Ϊ�޷����� 
{
	int count=0;
	while(n)//n��=0ʱΪ�棬����� 
	{
		if(n%2==1)
		{
			count++;
		}
		n=n/2;//��n����2��0��ʱ���ڽ���ѭ�� 
	}
	return count;
}
int main()
{
	int a=0;
	scanf("%d",&a);
	int count=count_bit_one(a);
	printf("count=%d\n",count);
//	system("pause");//system�⺯����������ִ��ϵͳ���pause����ͣ������ 
	return 0;
}



#include<stdio.h>
#include<stdlib.h> 
//дһ��������a�Ķ�����(����)��ʾ���м���1 
//13�Ķ�������00000000000000000000000000001101��13��2����6��1��1101���110Ϊ6��6��2����3��1��Ϊ11��3��������1��1 ��1��2����0��1 
int count_bit_one( int n)//���������ת��Ϊ�޷����� 
{
	int count=0;
	int i=0;
	for(i=0;i<32;i++)
	{
		if(((n>>i)&1)==1)//>>�������������ƶ���&������������������λ��Ϊ1�ǣ�����Ľ����Ϊ1 
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int a=0;
	scanf("%d",&a);
	int count=count_bit_one(a);
	printf("count=%d\n",count);
	system("pause");//system�⺯����������ִ��ϵͳ���pause����ͣ������ 
	return 0;
}


#include<stdio.h>
//��ӡ�����������е�����λ��ż��λ 
//10�Ķ���������00000000000000000000000000001010 
//�����������ֱ����ԭ���ʾ�������ò����ʾ
//ԭ�����λ1���䣬����ÿһ��������λȡ���õ����룬���������ֵλ+1�õ����롣����λ0��ʾ���� 
void print(int m)
{
	int i=0;
	printf("��ӡm�Ķ����������е�����λ\n");
	for(i=30;i>=0;i-=2)
	{
		printf("%d",(m>>i)&1);//��m�Ķ�����λ��ÿһ�ζ������ƶ���λ ,32������31����31λ��ʼ��ӡ 
	}
	printf("\n");
	printf("��ӡm�Ķ����������е�ż��λ\n");
	for(i=31;i>=1;i-=2)
	{
		printf("%d",(m>>i)&1);//��m�Ķ�����λ��ÿһ�ζ������ƶ���λ ,��ʼʱ��32��ʼ��ӡ������32λ��һ���������ƶ�31λ�����32��ʼ 
	}
	printf("\n");
}
int main()
{
	int m=0;
	scanf("%d",&m);
	print(m);
	return 0;
}

#include<stdio.h>
//����ָ���ӡ���� 
void print(int* p,int sz)//��arr�ĵ�ַ��������Ԫ�صĵ�ַ������������Ԫ�صĵ�ַ����������������ָ�� 
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",*(p+i));	
	} 
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz);//������Ԫ�ظ�������ȥ���ܸ��õر�����  
	return 0;
}

#include<stdio.h>
//�������ַ��������ݷ������� (���Ǽ򵥵������ӡ)
int my_strlen(char* str)//���洫�������������е���Ԫ�ص�ַ������Ԫ�����ַ�
{
	int count=0;
	while(*str!='\0')//������\0��֤��������Ч���ַ�
	{
		count++;
		str++;//count++����֮��str++Ѱ����һ���ַ� 
	} 
	return count;
} 
void reverse_string(char* arr)//�����е�����char arr[]Ҳ����
{
	int left=0;
	int right=my_strlen(arr)-1;//ʹ��my_strlen����ַ������ȣ�-1��õ����һ�������±� .strlen�ǿ⺯�������� 
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;//������֮�����+1 
		right--;//������֮���ұ�-1	
	} 
} 
int main()
{
	char arr[]="abcdef";//����������abcdef\0,���ݸĳ�fedcba
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}


//������ö��õݹ�ķ��� 
#include<stdio.h>
//�������ַ��������ݷ������� (���Ǽ򵥵������ӡ)
int my_strlen(char* str)//���洫�������������е���Ԫ�ص�ַ������Ԫ�����ַ�
{
	int count=0;
	while(*str!='\0')//������\0��֤��������Ч���ַ�
	{
		count++;
		str++;//count++����֮��str++Ѱ����һ���ַ� 
	} 
	return count;
} 
void reverse_string(char* arr)//�����е�����char arr[]Ҳ����
{
	char tmp=arr[0];
	int len=my_strlen(arr);
	arr[0]=arr[len-1];//len-1�������һ��Ԫ�ص��±�
	arr[len-1]='\0';
	if(my_strlen(arr+1)>=2)
		reverse_string(arr+1);
	arr[len-1]=tmp; //��һ��ȫ��ִ����֮����������һ�� 
} 
int main()
{
	char arr[]="abcdef";//����������abcdef\0,���ݸĳ�fedcba
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
//����һ������ÿλ֮�� 
int DigitSum(unsigned int num)
{
	if(num>9)
	{
		return  DigitSum(num/10)+num%10;//1971���1��DigitSum(197) 
	}
	else
	{
		return num;//�����һ�����ǣ����ظ�λ�� 
	}
}
int main()
{
	unsigned int num=0;//������������и� 
	scanf("%d",&num);
	int ret=DigitSum(num);
	printf("ret=%d",ret);
	system("pause");
	return 0;
}

#include<stdio.h>
//ʹ�õݹ麯��ʵ��n��k�η�
double Pow(int n,int k)
{
	if(k<0)
		return (1.0/(Pow(n,-k)));//k<0�ǣ�-kΪ���� ����1����ָպý���ת��ΪС�� 
	else if(k==0)
		return 1;
	else
		return n*Pow(n,k-1);	
} 
int main()
{
	int n=0,k=0;
	scanf("%d%d",&n,&k);
	double ret=Pow(n,k);//����Ҫ���n��k�η������n��k����ȥ 
	printf("ret=%lf\n",ret);
	return 0;
}

