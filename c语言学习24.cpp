//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı��� �������Ǳ��������飬ָ��������ṹ�� 
#include<stdio.h>
//����һ��ѧ����һЩ�����磺���֣����䣬�绰���Ա� 
typedef struct Stu//struct�ǽṹ��ؼ��� ��Stu�нṹ���ǩ .struct Stu�ǽṹ�����͡�typedef�������ǰѶ���Ľṹ����������������� 
{
	char name[20];//������һ���ַ���������Ӧ�ý���һ���ַ�����
	short age;
	char tele[12];
	char sex[5]; //��Щ�г�Ա����
	 
}Stu;//s1,s2,s3;//��ȥtypedef�����øýṹ������ֱ�Ӵ�������ȫ�ֵĽṹ�����s1��s2��s3 ��typedef������Ľṹ�����ֽ�Stu��Stuʵ������һ�����ͣ���s1��s2��s3�������Ǳ��� 
int main()
{
	struct Stu s2={"����",30,"46186532","����"};
	64"};//struct Stu�ǽṹ������(�൱��ͼֽ),ʹ������������� һ������s2���൱�ڸ���ͼֽ�ǵķ��ӣ�����ʱ��ռ�ռ� 
	Stu s1={"����"��20��"89465132"��"��"};//�����涨��֮�󣬿���ֱ������depedef�������������ֶ���s1������� ���ô����Ű���˳��Խṹ����г�ʼ�� 
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
	struct S s;//�����Ľṹ��T�м�����ṹ��s 
	char* pc;
};
int main()
{
	char arr[]="hello bit\n";
     //��struct T���ʹ���һ����s�Ľṹ�� 
	struct T t={"hehe",{100,'w',"hello world",3.14},arr};//�ȴ���char ch[10],Ȼ�����ṹ�崫һ�������Ų������н��г�ʼ����pc��ָ�룬����������Ԫ�ص�ַ 
	printf("%s\n",t.ch);//��ӡhehe 
	printf("%s\n",t.s.arr);//hello world 
	printf("%lf\n",t.s.d);//3.14 
	printf("%s\n",t.pc);//hello bit
	return 0;
}


#include<stdio.h>
#include<stdlib.h>
typedef struct Stu//struct�ǽṹ��ؼ��� ��Stu�нṹ���ǩ .struct Stu�ǽṹ�����͡�typedef�������ǰѶ���Ľṹ����������������� 
{
	char name[20];//������һ���ַ���������Ӧ�ý���һ���ַ�����
	short age;
	char tele[12];
	char sex[5]; //��Щ�г�Ա����
	 
}Stu;
void Print1(Stu tmp)//����ȥ��������ΪStu�ı���s
{
	printf("name:%s\n",tmp.name);
	printf("age:%d\n",tmp.age);
	printf("tele:%s\n",tmp.tele);
	printf("sex:%s\n",tmp.sex);
} 
Print2(Stu* ps)//����������ָ��
{
	printf("name:%s\n",ps->name);//psΪ�ṹ��ָ�룬ָ��name 
	printf("age:%d\n",ps->age);
	printf("tele:%s\n",ps->tele);
	printf("sex:%s\n",ps->sex);
} 
int main()
{
	Stu s={"����",40,"98645312","��"};//s��������Stu 
	Print1(s);//Print2�Ϻõ�ԭ���ǣ���Print2��s����tmpʱ�����´���һ����sһ����Ŀռ䣬�ռ��˷����أ��ҿռ䴴��Ҳ��Ҫʱ�� 
	Print2(&s);//��s�ĵ�ַ����ȥ 
	system("pause");
	return 0;
}


