#include<stdio.h>
#include<stdlib.h>
//����ָ������ �����Դ�Ŷ������ָ��ĵ�ַ 
int Add(int x,int y)//�ӷ����� 
{
	return x+y;
}
int Sub(int x,int y)//�������� 
{
	return x-y;
}
int Mul(int x,int y)//�˷����� 
{
	return x*y;
}
int Div(int x,int y)//�������� 
{
	return x/y;
}
int main()
{
	int (*pa)(int x,int y)=Add;//pa�п��Դ��Sub��Mul��Div�ĵ�ַ����Ϊ��Щ�����ķ��ص�ַ��Addһ�� 
	int (*parr[4])(int x,int y)={Add,Sub,Mul,Div};//�˴�pa����[]��ϣ�˵��parr�����飬Ԫ��Ϊ4. ȥ���������ʹ�С��ʣ��int (*)(int x,int y)Ϊ������������ ��parr�Ǻ���ָ������� 
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",parr[i](2,3));//ͨ��parr�ҵ���������ĸ�Ԫ�� 
	}
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("**********************\n");
	printf("**  1.add        2.sum**\n");
	printf("**  3.mul        4.div **\n");
	printf("**************************"); 
}
int Add(int x,int y)//�ӷ����� 
{
	return x+y;
}
int Sub(int x,int y)//�������� 
{
	return x-y;
}
int Mul(int x,int y)//�˷����� 
{
	return x*y;
}
int Div(int x,int y)//�������� 
{
	return x/y;
} 
int main()
{
	int x=0;
	int y=0;
	int input=0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		printf("����������������:");
		scanf("%d%d",&x,&y);
		switch(input)
		{
			case 1:
				printf("%d\n",Add(x,y));
				break;	
			case 2:
				printf("%d\n",Sub(x,y));
				break;	
			case 3:
				printf("%d\n",Mul(x,y));
				break;
			case 4:
				printf("%d\n",Div(x,y));
				break;
			case 0:
				printf("�˳�\n");
				break;
			dedault:
				printf("ѡ�����");
				break; 
		} 
	}while(input);
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("**********************\n");
	printf("**  1.add        2.sum**\n");
	printf("**  3.mul        4.div **\n");
	printf("**************************"); 
}
int Add(int x,int y)//�ӷ����� 
{
	return x+y;
}
int Sub(int x,int y)//�������� 
{
	return x-y;
}
int Mul(int x,int y)//�˷����� 
{
	return x*y;
}
int Div(int x,int y)//�������� 
{
	return x/y;
} 
int main()
{
	int x=0;
	int y=0;
	int input=0;
	int (*pfArr[5])(int x,int y)={0,Add,Sub,Mul,Div};//��0�ѵ�һ��λ��ռ�ˣ�ʹ����menu�е��������Ӧ 
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		if(input>=1 && input<=4)
		{
			printf("������������������");
	 		scanf("%d%d",&x,&y);
			int ret=pfArr[input](x,y);//ʹ�ú�����ʱ��������ܴ��������� 
			printf("%d\n",ret);
		}
		else if(input==0)
		{
			printf("�˳���");
		}
		else
		{
			printf("ѡ�����"); 
		}
	}while(input);//input!=0�Ͳ�������������жϵ�һ�ַ��� 
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
//�ص�������һ��ͨ������ָ����õĺ��� 
//ָ����ָ�������ָ�� 
void menu()
{
	printf("**********************\n");
	printf("**  1.add        2.sum**\n");
	printf("**  3.mul        4.div **\n");
	printf("**************************"); 
}
int Add(int x,int y)//�ӷ����� 
{
	return x+y;
}
int Sub(int x,int y)//�������� 
{
	return x-y;
}
int Mul(int x,int y)//�˷����� 
{
	return x*y;
}
int Div(int x,int y)//�������� 
{
	return x/y;
} 
void Calc(int (*pf)(int x,int y)) //��case1��2�������иú����������ظ��ģ�����Խ���Щ�ظ����ݶ���ɺ������ú������ڻص����� ��pf��Add��Sub�Ⱥ�����ָ�� 
{
	int x=0;
	int y=0;
	printf("������������������");
	scanf("%d%d",&x,&y);
	printf("%d\na",pf(x,y));//ͨ������ʹ�ú���ָ��pf���ú��� 
}
int main()
{
	int input=0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
	switch(input)
		{
			
			case 1:
				Calc(Add);
				break;	
			case 2:
				Calc(Sub);
				break;	
			case 3:
				Calc(Mul);
				break;
			case 4:
				Calc(Div);
				break;
			case 0:
				printf("�˳�\n");
				break;
			dedault:
				printf("ѡ�����");
				break; 
		}  
	}while(input);
	system("pause");
	return 0;
}

#include<stdio.h> 
#include<stdlib.h>
int Add(int x,int y)
{
	return x+y;
}
int main()
{
	int arr[10]={0};
	int (*p)[10]=&arr;//ȡ��һ������ĵ�ַ�ŵ�����ָ������ȥ
	int (*pfArr[4])(int x,int y);//pfArr��һ������ָ�������
	int (*(*ppfArr)[4])(int x,int y)=&pfArr;//��ppfArr����������*��ϱ��ָ�룬[4]����ָ��Ԫ�ظ���Ϊ4�����飬ppfArr��һ��ר�ŷ��ú���ָ�������ַ������ָ��
	//��(*ppfArr)[4]ȥ��֮��ʡ�µ�int(*)(int x,int y)�Ǹ�ָ��ָ�������ÿ��Ԫ�ص����͡�Ԫ�����ͻ��Ǻ���ָ�롣 
	
	system("pause");
	return 0;
}

//�����Ѻ�����ָ����Ϊ�������ݸ���һ�������������ָ�뱻����������ָ��ĺ���ʱ�����Ǿ�˵���ǻص����� 
#include<stdio.h>
void print(char* str)//����ȥ�Ĳ���������char*���ַ�����ַ 
{
	printf("hehe��%s",str);//%s����˼�����ַ�������ʽ��ӡstrָ����ַ��� 
}
void test(void (*p)(char*))//test���õ���print���򴫹�ȥ��Ӧ���Ǻ����ĵ�ַ .char�Ǻ���print���ص����� 
{
	printf("test\n");
	p("bit");//p��print�ĵ�ַ�����ַ���bit����print 
}
int main()
{
	test(print);//����test����ʱ��print��������ȥ 
	return 0;
}
