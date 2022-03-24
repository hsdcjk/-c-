#include<stdio.h>
//一个函数自己直接或间接调用自己的过程叫递归
#include<stdio.h>
int main()
{
	printf("哈哈\n");
	main();//main()函数自己调用自己，任何函数调用都会向内存申请空间
	return 0;//函数main()不停调用自己，直到栈区溢满则停止
}
//栈区：局部变量和函数的形参的创建位置。
//堆区：动态开辟的内存
//静态区：全局


//将123分别以1 2 3的形式打印出来
//unsigned是无符号整形，16位系统中能储存范围是-32768到32767，unsigned的数据范围是0到65535
#include<stdio.h>
void printf(int n)//只需要打印，不需要返回，所以用void
{
	if (n > 9)//n>9时才不断递归下去，大于9时就中断
	{
		printf(n / 10);//该行执行完后会调用函数printf(int n),然后把n/10返回给第五行
	}
	printf("%d\t", n % 10);//当第九行执行完之后，才会开始执行第11行。打印1后，返回第九行结束的阶段又开始执行第11行
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	printf(num);
	return 0;
}
//递归存在限制条件，当满足该限制条件时，递归不在继续
//每次递归调用之后越来越接近这个限制条件


//创建一个函数求字符串函数
#include<stdio.h>
int my_strlen(char* str)//arr是其中第一个字符的地址并传给str。记得定义函数的后面不需要加;
{
	int count = 0;//必须要=0，不然后面的count++无法执行
	while (*str != '\0')
	{
		count++;
		str++;//地址+1，可以从b的地址,转到i的地址
	}
	return count;//不要忘记把count返回去
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//把arr传到my_strlen()中去
	printf("len=%d\n", len);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
	return 0;
}


//创建一个函数求字符串函数
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//本来指向b，strlen+1后就指向i了
	}
	else
		return 0;//第一个字符是\0,则字符串长度为0
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}





