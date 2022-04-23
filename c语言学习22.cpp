#include<stdio.h>
#include<stdlib.h> 
//写一个函数求a的二进制(补码)表示中有几个1 
//13的二进制数00000000000000000000000000001101，13除2等于6余1，1101变成110为6。6除2等于3余1，为11。3除二等于1余1 。1除2等于0余1 
int count_bit_one(unsigned int n)//把输入的数转化为无符号数 
{
	int count=0;
	while(n)//n！=0时为真，则进入 
	{
		if(n%2==1)
		{
			count++;
		}
		n=n/2;//当n除以2余0的时候不在进入循环 
	}
	return count;
}
int main()
{
	int a=0;
	scanf("%d",&a);
	int count=count_bit_one(a);
	printf("count=%d\n",count);
//	system("pause");//system库函数，作用是执行系统命令，pause是暂停的作用 
	return 0;
}



#include<stdio.h>
#include<stdlib.h> 
//写一个函数求a的二进制(补码)表示中有几个1 
//13的二进制数00000000000000000000000000001101，13除2等于6余1，1101变成110为6。6除2等于3余1，为11。3除二等于1余1 。1除2等于0余1 
int count_bit_one( int n)//把输入的数转化为无符号数 
{
	int count=0;
	int i=0;
	for(i=0;i<32;i++)
	{
		if(((n>>i)&1)==1)//>>的作用是向右移动。&的作用是两个二进制位都为1是，输出的结果才为1 
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
	system("pause");//system库函数，作用是执行系统命令，pause是暂停的作用 
	return 0;
}


#include<stdio.h>
//打印二进制序列中的奇数位和偶数位 
//10的二进制序列00000000000000000000000000001010 
//计算机中正数直接用原码表示，负数用补码表示
//原码符号位1不变，其余每一个二进制位取反得到反码，反码最低数值位+1得到补码。符号位0表示正数 
void print(int m)
{
	int i=0;
	printf("打印m的二进制序列中的奇数位\n");
	for(i=30;i>=0;i-=2)
	{
		printf("%d",(m>>i)&1);//江m的二进制位数每一次都向右移动两位 ,32后面是31，从31位开始打印 
	}
	printf("\n");
	printf("打印m的二进制序列中的偶数位\n");
	for(i=31;i>=1;i-=2)
	{
		printf("%d",(m>>i)&1);//江m的二进制位数每一次都向右移动两位 ,开始时从32开始打印。共有32位，一下子向右移动31位，则从32开始 
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
//利用指针打印整数 
void print(int* p,int sz)//把arr的地址（数组首元素的地址），该数组首元素的地址是正数，则用整形指针 
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
	print(arr,sz);//把数组元素个数传过去才能更好地编译它  
	return 0;
}

#include<stdio.h>
//将参数字符串的内容反向排序 (不是简单的逆序打印)
int my_strlen(char* str)//下面传过来的是数组中的首元素地址，且首元素是字符
{
	int count=0;
	while(*str!='\0')//不等于\0则证明它是有效的字符
	{
		count++;
		str++;//count++结束之后，str++寻找下一个字符 
	} 
	return count;
} 
void reverse_string(char* arr)//括号中的内容char arr[]也可以
{
	int left=0;
	int right=my_strlen(arr)-1;//使用my_strlen算出字符串长度，-1后得到最后一个数的下标 .strlen是库函数，用于 
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;//交换完之后左边+1 
		right--;//交换完之后右边-1	
	} 
} 
int main()
{
	char arr[]="abcdef";//数组内容是abcdef\0,内容改成fedcba
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}


//多加理解该段用递归的方法 
#include<stdio.h>
//将参数字符串的内容反向排序 (不是简单的逆序打印)
int my_strlen(char* str)//下面传过来的是数组中的首元素地址，且首元素是字符
{
	int count=0;
	while(*str!='\0')//不等于\0则证明它是有效的字符
	{
		count++;
		str++;//count++结束之后，str++寻找下一个字符 
	} 
	return count;
} 
void reverse_string(char* arr)//括号中的内容char arr[]也可以
{
	char tmp=arr[0];
	int len=my_strlen(arr);
	arr[0]=arr[len-1];//len-1就是最后一个元素的下标
	arr[len-1]='\0';
	if(my_strlen(arr+1)>=2)
		reverse_string(arr+1);
	arr[len-1]=tmp; //上一行全部执行完之后再运行这一行 
} 
int main()
{
	char arr[]="abcdef";//数组内容是abcdef\0,内容改成fedcba
	reverse_string(arr);
	printf("%s\n",arr);
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
//计算一个数的每位之和 
int DigitSum(unsigned int num)
{
	if(num>9)
	{
		return  DigitSum(num/10)+num%10;//1971变成1和DigitSum(197) 
	}
	else
	{
		return num;//当最后一个数是，返回个位数 
	}
}
int main()
{
	unsigned int num=0;//输入的数有正有负 
	scanf("%d",&num);
	int ret=DigitSum(num);
	printf("ret=%d",ret);
	system("pause");
	return 0;
}

#include<stdio.h>
//使用递归函数实现n的k次方
double Pow(int n,int k)
{
	if(k<0)
		return (1.0/(Pow(n,-k)));//k<0是，-k为正。 而用1相除又刚好将其转化为小数 
	else if(k==0)
		return 1;
	else
		return n*Pow(n,k-1);	
} 
int main()
{
	int n=0,k=0;
	scanf("%d%d",&n,&k);
	double ret=Pow(n,k);//我们要算出n的k次方，则把n和k传进去 
	printf("ret=%lf\n",ret);
	return 0;
}

