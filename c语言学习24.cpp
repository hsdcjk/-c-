//结构是一些值的集合，这些值称为成员变量，结构的每个成员可以是不同类型的变量 ，可以是标量，数组，指针和其他结构体 
#include<stdio.h>
//描述一个学生的一些特征如：名字，年龄，电话和性别 
typedef struct Stu//struct是结构体关键字 ，Stu叫结构体标签 .struct Stu是结构体类型。typedef的作用是把定义的结构体类型重新起个名字 
{
	char name[20];//名字是一个字符串，所以应该建立一个字符数组
	short age;
	char tele[12];
	char sex[5]; //这些叫成员变量
	 
}Stu;//s1,s2,s3;//消去typedef后利用该结构体类型直接创建三个全局的结构体变量s1，s2，s3 。typedef重新起的结构体名字叫Stu，Stu实际上是一个类型，而s1，s2和s3本质是是变量 
int main()
{
	struct Stu s2={"旺财",30,"46186532","保密"};
	64"};//struct Stu是结构体类型(相当于图纸),使用这个变量创建 一个变量s2（相当于根据图纸盖的房子），此时才占空间 
	Stu s1={"张三"，20，"89465132"，"男"};//在上面定义之后，可以直接利用depedef重新命名的名字定义s1这个变量 。用大括号按照顺序对结构体进行初始化 
	return 0;
}


#include<stdio.h>
struct S 
{
	int a;
	char c;
	char arr[20];
	double d;
};
struct T
{
	char ch[10];
	struct S s;//创建的结构体T中间包含结构体s 
	char* pc;
};
int main()
{
	char arr[]="hello bit\n";
     //用struct T类型创建一个叫s的结构体 
	struct T t={"hehe",{100,'w',"hello world",3.14},arr};//先传给char ch[10],然后往结构体传一个大括号并在其中进行初始化，pc是指针，数组名是首元素地址 
	printf("%s\n",t.ch);//打印hehe 
	printf("%s\n",t.s.arr);//hello world 
	printf("%lf\n",t.s.d);//3.14 
	printf("%s\n",t.pc);//hello bit
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
typedef struct Stu//struct是结构体关键字 ，Stu叫结构体标签 .struct Stu是结构体类型。typedef的作用是把定义的结构体类型重新起个名字 
{
	char name[20];//名字是一个字符串，所以应该建立一个字符数组
	short age;
	char tele[12];
	char sex[5]; //这些叫成员变量
	 
}Stu;
void Print1(Stu tmp)//传上去的是类型为Stu的变量s
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n",tmp.age);
	printf("tele:%s\n",tmp.tele);
	printf("sex:%s\n",tmp.sex);
} 
Print2(Stu* ps)//传过来的是指针
{
	printf("name:%s\n",ps->name);//ps为结构体指针，指向name 
	printf("age:%d\n",ps->age);
	printf("tele:%s\n",ps->tele);
	printf("sex:%s\n",ps->sex);
} 
int main()
{
	Stu s={"李四",40,"98645312","男"};//s的类型是Stu 
	Print1(s);//Print2较好的原因是，当Print2把s传给tmp时会重新创建一个跟s一样大的空间，空间浪费严重，且空间创建也需要时间 
	Print2(&s);//把s的地址传过去 
	system("pause");
	return 0;
}


