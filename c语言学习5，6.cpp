#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double d = 3.14;
	double* pd = &d;//����pdָ�����double�ı���d
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(d));//�����32λ����������4���ֽڡ������64λ����������8���ֽڡ�
	//�����˵��Զ�������ĵ�ַ��ͬһƽ̨����ͬ��
	return 0;
}

#include<stdio.h>
int main()
{
	printf("%d\n", sizeof(char*));//���͵Ĵ�Сʵ���Ͼ��Ǵ������������ռ�ռ��С,��ֻ��ƽ̨�й�
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	return 0;
}

#include<stdio.h>
//����һ���ṹ������
struct Book//struct�ǽṹ��ؼ��֡���������book
{
	char name[14];//name����������c���Գ�����ơ����߸��֣�����Ӣ�ĺͺ��֣�������Ҫռ14���ֽڳ���
	short price;//�۸�������short
};//;����ȱ�٣�ר����������������鶨��
int main()
{   //���øýṹ�����ʹ���һ�������͵ı���
	struct Book b1 = { "c���Գ������",55 };
	struct Book* pb = &b1;//��b1�ĵ�ַ�Ž�pb���ָ������С���struct Book*�������͵�ָ��д����
	printf("������%s\n", b1.name);//b1������price��name��Ա,b1.name�����ҵ�b1���е�����
	b1.price = 10;//��ļ۸��Ϊ10Ԫ
	printf("�۸�:%dԪ\n", b1.price);
	printf("������%s\n", (*pb).name);//ͨ��*pb.name�ҵ�������%s�����ַ�����
	printf("������%s\n", pb->name);//ͨ��pb->name�ҵ�pb�е�name��Ա
	return 0;
}


