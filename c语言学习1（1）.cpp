#include<stdio.h>
int main()    //main是主函数，代码从此开始执行，有且仅有一个。   #int在main前面的意思是，main在调用之后返回一个整形值。 
{
	printf("Hello world\n");
	return 0;              //0是整数，与第二行相互呼应 
}




//(1)char是字符数据类型。          表示字符a，b，c等时用到
//(2)short是短整形类型。           如果我们需要表示的整数比较小，那么我们可以使用 short 来定义，这样可以节省系统资源。
//(3)long是长整型                  用法与short相对 
//(4)float是单精度浮点数 
//(5)double的精度比float要高 ，小数点后面的位数更高，更精准 


#include<stdio.h>
int main()
{
	char ch ='A';//char是字符类型，用这种类型创建一个变量叫ch。向内存申请的空间叫ch ，用等号的形式向其中放入字符A， 
	printf("%c\n",ch);//%c对应的是打印字符格式的数据 。我以字符的形式打印ch 
	return 0;
}





#include<stdio.h>
int main()
{
	int age=20;//向内存申请四个字节用来存放age      //定义变量：类型+变量名，最后赋值 
	printf("%d\n",age);
	return 0;
}


//%c是打印字符 
//%p是以地址的形式进行打印 
//%x打印16进制数字 



#include<stdio.h>
int main()
{
	double d=3.14;
	printf("%lf\n",d);   //lf在此处代表的是double 
	return 0;
}



#include<stdio.h>
int main()
{
	printf("%d\n",sizeof(char));//1代表char占了一个字节 
	printf("%d\n",sizeof(int));//4代表int占了四个字节 
	printf("%d\n",sizeof(long));//4或者8            long的大小>=int的大小。该编译器中long大小为4个字节，但其他的编译器中long可能为8个字节 
	printf("%d\n",sizeof(long long));//8
	printf("%d\n",sizeof(short));//2
	printf("%d\n",sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	return 0;
}
//int是四个字节，32个比特位
//short int是两个字节，16个比特位，能表示的最大数是2*16-1=65535(short int能表示的最大数) 
//每一种类型的细化利于充分利用计算机的空间 


//计算机单位:(1)bit比特位是最基本单位等于一个位（2） byte是字节，相当于8个比特位（3）kb相当于1024个字节 （4）mb是1024个kb （5）gb是1024个mb 

 
//  计算机是硬件，可以通电。正电是1，负电是0.计算机可以识


#include<stdio.h>
int a=100;//全局变量和局部变量名字相同时，优先执行局部变量          //全局变量的生命周期是整个程序的生命周期 
int main()
{//进入中括号，局部变量生命周期开始 
	int a=10;
	printf("%d\n",a);//局部变量和全局变量名字不要相同，不然容易误会，产生bug 
	return 0;
}//出中括号，局部变量生命周期结束 


//变量的使用 
#include<stdio.h>
int main()
{
	int num1=0;
	int num2=0;
	int sum=0;
	scanf("%d,%d",&num1,&num2);//输入的两个数字分别存入地址叫做&num1和&num2的空间。 
	sum=num1+num2;
	printf("sum=%d\n",sum);
	return 0;
}
























