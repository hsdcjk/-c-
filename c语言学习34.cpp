#include<stdio.h>
#include<stdlib.h>
//函数指针数组 ，可以存放多个函数指针的地址 
int Add(int x,int y)//加法函数 
{
	return x+y;
}
int Sub(int x,int y)//减法函数 
{
	return x-y;
}
int Mul(int x,int y)//乘法函数 
{
	return x*y;
}
int Div(int x,int y)//除法函数 
{
	return x/y;
}
int main()
{
	int (*pa)(int x,int y)=Add;//pa中可以存放Sub，Mul和Div的地址，因为这些函数的返回地址跟Add一样 
	int (*parr[4])(int x,int y)={Add,Sub,Mul,Div};//此处pa先与[]结合，说明parr是数组，元素为4. 去掉数组名和大小，剩下int (*)(int x,int y)为函数数组类型 。parr是函数指针的数组 
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\n",parr[i](2,3));//通过parr找到该数组的四个元素 
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
int Add(int x,int y)//加法函数 
{
	return x+y;
}
int Sub(int x,int y)//减法函数 
{
	return x-y;
}
int Mul(int x,int y)//乘法函数 
{
	return x*y;
}
int Div(int x,int y)//除法函数 
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
		printf("请选择：");
		scanf("%d",&input);
		printf("请输入两个操作数:");
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
				printf("退出\n");
				break;
			dedault:
				printf("选择错误：");
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
int Add(int x,int y)//加法函数 
{
	return x+y;
}
int Sub(int x,int y)//减法函数 
{
	return x-y;
}
int Mul(int x,int y)//乘法函数 
{
	return x*y;
}
int Div(int x,int y)//除法函数 
{
	return x/y;
} 
int main()
{
	int x=0;
	int y=0;
	int input=0;
	int (*pfArr[5])(int x,int y)={0,Add,Sub,Mul,Div};//让0把第一个位置占了，使其与menu中的数字相对应 
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		if(input>=1 && input<=4)
		{
			printf("请输入两个操作数：");
	 		scanf("%d%d",&x,&y);
			int ret=pfArr[input](x,y);//使用函数的时候参数不能带参数类型 
			printf("%d\n",ret);
		}
		else if(input==0)
		{
			printf("退出：");
		}
		else
		{
			printf("选择错误："); 
		}
	}while(input);//input!=0就不会输出，这是判断的一种方法 
	system("pause");
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
//回调函数：一个通过函数指针调用的函数 
//指向函数指针数组的指针 
void menu()
{
	printf("**********************\n");
	printf("**  1.add        2.sum**\n");
	printf("**  3.mul        4.div **\n");
	printf("**************************"); 
}
int Add(int x,int y)//加法函数 
{
	return x+y;
}
int Sub(int x,int y)//减法函数 
{
	return x-y;
}
int Mul(int x,int y)//乘法函数 
{
	return x*y;
}
int Div(int x,int y)//除法函数 
{
	return x/y;
} 
void Calc(int (*pf)(int x,int y)) //在case1，2等类型中该函数内容是重复的，则可以将这些重复内容定义成函数。该函数属于回调函数 。pf是Add和Sub等函数的指针 
{
	int x=0;
	int y=0;
	printf("请输入两个操作数：");
	scanf("%d%d",&x,&y);
	printf("%d\na",pf(x,y));//通过该行使用函数指针pf引用函数 
}
int main()
{
	int input=0;
	do
	{
		menu();
		printf("请选择：");
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
				printf("退出\n");
				break;
			dedault:
				printf("选择错误：");
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
	int (*p)[10]=&arr;//取出一个数组的地址放到数组指针里面去
	int (*pfArr[4])(int x,int y);//pfArr是一个函数指针的数组
	int (*(*ppfArr)[4])(int x,int y)=&pfArr;//把ppfArr拿起来先与*结合变成指针，[4]代表指向元素个数为4的数组，ppfArr是一个专门放置函数指针数组地址的数组指针
	//把(*ppfArr)[4]去掉之后省下的int(*)(int x,int y)是该指针指向的数组每个元素的类型。元素类型还是函数指针。 
	
	system("pause");
	return 0;
}

//如果你把函数的指针作为参数传递给另一个函数，当这个指针被用来调用所指向的函数时，我们就说这是回调函数 
#include<stdio.h>
void print(char* str)//传过去的参数类型是char*的字符串地址 
{
	printf("hehe：%s",str);//%s的意思是以字符串的形式打印str指向的字符串 
}
void test(void (*p)(char*))//test调用的是print，则传过去的应该是函数的地址 .char是函数print返回的类型 
{
	printf("test\n");
	p("bit");//p是print的地址。把字符串bit传给print 
}
int main()
{
	test(print);//调用test函数时把print函数传过去 
	return 0;
}
