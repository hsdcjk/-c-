#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double d = 3.14;
	double* pd = &d;//代表pd指向的是double的变量d
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(d));//如果是32位存它，则是4个字节。如果是64位存它，则是8个字节。
	//看个人电脑而定，存的地址在同一平台是相同的
	return 0;
}

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char*));//类型的大小实际上就是创建这个类型所占空间大小,且只与平台有关
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	return 0;
}

#include<stdio.h>
//创建一个结构体类型
struct Book//struct是结构体关键字。类型名叫book
{
	char name[14];//name叫书名。“c语言程序设计”是七个字（不分英文和汉字），则需要占14个字节长度
	short price;//价格类型是short
};//;不可缺少，专门用来结束这个数组定义
int main()
{   //利用该结构体类型创建一个该类型的变量
	struct Book b1 = { "c语言程序设计",55 };
	struct Book* pb = &b1;//把b1的地址放进pb这个指针变量中。把struct Book*这种类型的指针写出来
	printf("书名：%s\n", b1.name);//b1其中有price和name成员,b1.name就是找到b1当中的名字
	b1.price = 10;//书的价格改为10元
	printf("价格:%d元\n", b1.price);
	printf("书名：%s\n", (*pb).name);//通过*pb.name找到书名。%s代表字符串型
	printf("书名：%s\n", pb->name);//通过pb->name找到pb中的name成员
	return 0;
}


