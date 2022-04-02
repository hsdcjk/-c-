#define _CRT_SECURE_NO_WARNINGS 1	
#include<stdio.h>
int main()
{
	short s = 0;//short是短整形，字节是2
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//整形a占4字节，放到s之后，s说了算，则改行打印出来2
	printf("%d\n", s);//上一行s=a+5是不进行真实运算的，则s仍然等于0
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;//0的二进制序列：00000000000000000000000000000000。内存中存放的是补码
	printf("%d\n", ~a);//~的意思是按位（二进制位）取反，二进制位全部取反，取反之后仍然是补码
	   //打印的是原码，原码取反+1=补码。反码=11111111111111111111111111111110
				 //符号位不变，其他位按位取反10000000000000000000000000000001。
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 11;//00000000000000000000000000001011
			   //00000000000000000000000000000100。按位或，上下两个为0才是0，有一个为1就是1
	a = a | (1 << 2);//1是00001，向左移动两位是00000000000000000000000000000100，移动后是4。
	printf("%d\n", a);//改行结束后，a=15
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	//printf("%d\n", ++a);//先++，后使用a的值，a++是真实计算的，该行结束之后a=11
	printf("%d\n", a++);//先使用a的值，在++。应该打印出10
	printf("%d\n", a);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = (int)3.14;//3.14是double类型，不能直接传到整形a,将a强制转化为整形
	printf("%d\n", a);
	return 0;
}

#include<stdio.h>
void test(int arr[])//数组在传参的时候传过来的是首字母的地址，则arr[]相当于指针
{
	printf("%d\n", sizeof(arr));//arr[]是指针大小，其大小由平台而定，平台32位，指针大小为4，平台64位，指针大小位8
}
int main()
{
	int arr[10] = { 0 };
	test(arr);
	return 0;
}
 

#include<stdio.h>
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;//&&的特点是，左边算出假，右边不管是什么结果都不计算
	i = a++ && ++b && d++;//a++，a先使用后++。a为0，且与&&并用，则后面的++b和d++不计算。a=a++，则a=1，其余不变
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	return 0;
}

#include<stdio.h>
int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;//||的特点是，左边有一个为真则全为真，后面不需要算。a=1为真，其后不算
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	b = (a > 5 ? 3 : -3);//如果a>5,表达式=3，否则表达式=-3。该行执行完之后，b=-3
	printf("%d\n", b);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = (a > b ? a : b);//a>b吗？如果是，则max=a，否则max=b
	printf("max=%d\n", max);
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = (a > b ? a : b);//a>b吗？如果是，则max=a，否则max=b
	printf("max=%d\n", max);
	return 0;
}

#include<stdio.h>
struct stu//创建一个结构体类型(结构体名字叫struct stu)来表示学生,与int和float等相似
{
	char name[20];//学生名字
	int age;//学生年龄
	char id[20];//学生学号
};
int main()
{    //使用struct stu这个类型创建一个学生变量
	struct stu s1 { "张三", 20, "201901035" };;//s1是一个活生生的学生对象,mane=张三,age=20,id=201901035
	struct stu* ps = &s1;//s1是对象，在内存中开辟了空间给他，ps是s1的指针变量。s1的类型是struct stu，*代表是指针
	printf("%s\n", s1.name);//%s是一种字符串的输出格式说明符，输出字符串。
	printf("%d\n", s1.age);//结构体变量.成员名
	printf("%s\n", s1.id);//如果用%d，打印的应该是id所在地址。此处打印的id应该为字符串，所以用%s
	printf("%s\n", (*ps).name);//(*ps)相当于s1
	printf("%s\n", ps->name);//ps是指针。该行代表ps指向对象的内容。结构体指针->成员名
	return 0;
}


#include<stdio.h>
//整形提升的时候是按照符号位提升的。a：00000011。最高位是0，则高位全部补0。00000000000000000000000000000011
int main()
{                   //只能放一个字节（8个比特位的内容），挑最小，最低位的字节放进去。放进去的：00000011
	char a = 3;//000000000000000000000000000000011。3是整数占四个直接，char占一个字节，只能截断
	char b = 127;//0000000000000000000000000001111111。b真正放的是：01111111
	char c = a + b;              //a:00000000000000000000000000000011
	printf("%d\n", c);           //b:00000000000000000000000001111111
	return 0;                    //c:00000000000000000000000010000010
	//c中真实放的是10000010。要打印就要整形提升，11111111111111111111111110000010，此时仍是补码
	//补码-1取反等于原码。10000000000000000000000011111110，则打印出-126
}



