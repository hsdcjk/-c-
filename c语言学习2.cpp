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
	sum = Add(num1, num2);//num1�൱��int x, num2�൱��int y.  z=x+y,return z���ǰ�num1��num2������õ�ֵ���ظ�sum.
	printf("%d\n", sum);
	return 0;

}


#include<stdio.h>
int main()
{
	const int num=4;//const-�����ԣ�numǰ�����constʱ��num�޷��ı��ˣ�num��const���εĳ���������ִ�д˳���ʱ�ᱨ�� 
	printf("%d\n",num);
	
	num=8;
	printf("%d\n",num);
	
}
//constʹnum�޷���4���8


#include<stdio.h>
enum Color//enum��ö�����͵���˼��Color����������,{}����ö�ٳ��ֵ����п����� 
{
	red,//��һ������˳��Ϊ0 
	yellow,//�ڶ�������˳��Ϊ1 
	blue,//����������˳��Ϊ2 
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
	
	char arr1[] = "abc";//char���͵����飬���ֽ�arr1����abc�浽������
	char arr2[] = {'a','b','c'};//��''�����a���ַ�a������ַ��ŵ�˫����������ַ��� 
	printf("%s\n",arr1); //��ӡ�ַ����õ���%s,arr1��ʾ��ӡ����arr1������ַ��� 
	printf("%s\n",arr2);
	return 0;
	 
	
}


#include<stdio.h>
#include<string.h>//strlen��ͷ�ļ���string
int main()
{
	
	char arr1[] = "abc";//char���͵����飬���ֽ�arr1����abc�浽������                       //������ arr1����ŵ���a b c \0 
	char arr2[] = {'a','b','c'};//��''�����a���ַ�a������ַ��ŵ�˫����������ַ���        //������ŵ���a b c x x x x x ......ֱ������\0��ֹͣ 
	printf("%s\n",arr1); //��ӡ�ַ����õ���%s,arr1��ʾ��ӡ����arr1������ַ��� 
	printf("%s\n",arr2);
	printf("%d\n",strlen(arr1));//strlen-�����ַ����ĳ��� 
	printf("%d\n",strlen(arr2));//6,3�������е��ַ��кܶ������һֱִ��6,7�У�ֱ���ҵ�\0��ֹͣ �� 
	return 0;
	 
	
}
//����ѵ�63�и�Ϊ     char arr1[] = {'a','b','c','\0'}ʱ�������鳤��Ϊ3
//�ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ�������ʱ\0�ǽ�����־���������ַ������� 

#include<stdio.h>
int main()
{
	printf("%c\n", '\'');//���ȱ��\����ǰ����''Ϊһ�ԣ��ᱨ��\��ת���ַ�������ת��
}



#include<stdio.h>
int main()
{
	int line = 0;
	printf("�ú�ѧϰ�����ô���\n");
	while (line < 20000)
	{
		printf("�ô��� %d\n", line);//��%d����ʽ��line���
		line++;//���д����൱��line = line + 1;


	}
	printf("��offer");
	return 0;

}


#include<stdio.h>
int main()
{
	int a = 1;//����ռ���ֽڣ���32λ��a=00000000000000000000000000000001
	int b = a << 1;//����a����һλ��ֵ��b��b=00000000000000000000000000000010��//<<�������ƣ�>>��������
	int c = a << 2;
	printf("%d\n%d\n", b, c);
	printf("%d\n", a);//��a�������ƻ������ƣ�a��ֵ���ֲ���
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 4;//ת��Ϊ2������Ϊ100     100
	int b = 5;//ת��Ϊ2������Ϊ101     101
	int c = a & b;//                c= 100     0Ϊ�٣�1Ϊ�档���������㡣
	int d = a | b;
	printf("%d\n", c);  //          d= 101
	printf("%d\n", d);

	int e = a ^ b;//^��������˼����Ӧ������λ��ͬΪ0����Ӧ������λ������Ϊ1��
	printf("%d\n", e);//             e= 001
	return 0;
}


#include<stdio.h>
int main()
{
	int a = 10;
	printf("%d\n", a);
	printf("%d\n", !a);//�����������߼���������10>0Ϊ�棬������Ϊ��=0

	int b = 0;
	printf("%d\n", b);
	printf("%d\n", !b);//0Ϊ�٣��򷴲�������̶�Ϊ1 
	printf("%d\n", sizeof(int));//int�����Σ�ռ�ĸ��ֽ�
	printf("%d\n", sizeof(arr));//������ռ40���ֽ�
	return 0;
}














