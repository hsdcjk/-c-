#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d",&num1,&num2);
	int sum = 0;
	sum = num1 + num2;
	printf("sun = %d\n",sum);
	
	return 0;
}

#include<stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;//
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	int sum = 0;
	sum = Add(num1, num2);//num1相当于int x, num2相当于int y.  z=x+y,return z就是把num1于num2想加所得的值返回给sum.
	printf("%d\n", sum);
	return 0;

}


#include<stdio.h>
int main()
{
	const int num=4;//const-常属性，num前面加上const时，num无法改变了，num是const修饰的常变量，故执行此程序时会报错 
	printf("%d\n",num);
	
	num=8;
	printf("%d\n",num);
	
}
//const使num无法从4变成8


#include<stdio.h>
enum Color//enum是枚举类型的意思，Color是他的名字,{}中是枚举出现的所有可能性 
{
	red,//第一个排列顺序为0 
	yellow,//第二个排列顺序为1 
	blue,//第三个排列顺序为2 
};

int main()
{
	printf("%d\n",blue);
	printf("%d\n",yellow);
	printf("%d\n",red);
	return 0;
}


#include<stdio.h>
int main()
{
	
	char arr1[] = "abc";//char类型的数组，名字叫arr1，把abc存到该数组
	char arr2[] = {'a','b','c'};//由''引起的a叫字符a，多个字符放到双引号里面叫字符串 
	printf("%s\n",arr1); //打印字符串用的是%s,arr1表示打印的是arr1里面的字符串 
	printf("%s\n",arr2);
	return 0;
	 
	
}


#include<stdio.h>
#include<string.h>//strlen的头文件是string
int main()
{
	
	char arr1[] = "abc";//char类型的数组，名字叫arr1，把abc存到该数组                       //该数组 arr1里面放的是a b c \0 
	char arr2[] = {'a','b','c'};//由''引起的a叫字符a，多个字符放到双引号里面叫字符串        //该数组放的是a b c x x x x x ......直到遇到\0后停止 
	printf("%s\n",arr1); //打印字符串用的是%s,arr1表示打印的是arr1里面的字符串 
	printf("%s\n",arr2);
	printf("%d\n",strlen(arr1));//strlen-计算字符串的长度 
	printf("%d\n",strlen(arr2));//6,3行中其中的字符有很多个，会一直执行6,7行，直到找到\0后停止 。 
	return 0;
	 
	
}
//如果把第63行改为     char arr1[] = {'a','b','c','\0'}时，此数组长度为3
//字符串的结束标志是一个\0的转义字符，在计算字符串长度时\0是结束标志，不算作字符串内容 

#include<stdio.h>
int main()
{
	printf("%c\n", '\'');//如果缺少\，则前两个''为一对，会报错。\是转义字符，将’转义
}



#include<stdio.h>
int main()
{
	int line = 0;
	printf("好好学习，多敲代码\n");
	while (line < 20000)
	{
		printf("敲代码 %d\n", line);//以%d的形式将line打出
		line++;//该行代码相当于line = line + 1;


	}
	printf("好offer");
	return 0;

}


#include<stdio.h>
int main()
{
	int a = 1;//整形占四字节，共32位。a=00000000000000000000000000000001
	int b = a << 1;//代表a左移一位后赋值给b。b=00000000000000000000000000000010。//<<代表左移，>>代表右移
	int c = a << 2;
	printf("%d\n%d\n", b, c);
	printf("%d\n", a);//对a进行左移或者右移，a的值保持不变
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 4;//转化为2进制数为100     100
	int b = 5;//转化为2进制数为101     101
	int c = a & b;//                c= 100     0为假，1为真。由上往下算。
	int d = a | b;
	printf("%d\n", c);  //          d= 101
	printf("%d\n", d);

	int e = a ^ b;//^是异或的意思，对应二进制位相同为0，对应二进制位相异则为1。
	printf("%d\n", e);//             e= 001
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d\n", a);
	printf("%d\n", !a);//！的作用是逻辑反操作，10>0为真，反操作为假=0

	int b = 0;
	printf("%d\n", b);
	printf("%d\n", !b);//0为假，则反操作结果固定为1 
	printf("%d\n", sizeof(int));//int是整形，占四个字节
	printf("%d\n", sizeof(arr));//该数组占40个字节
	return 0;
}














