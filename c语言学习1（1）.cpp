#include<stdio.h>
int main()    //main��������������Ӵ˿�ʼִ�У����ҽ���һ����   #int��mainǰ�����˼�ǣ�main�ڵ���֮�󷵻�һ������ֵ�� 
{
	printf("Hello world\n");
	return 0;              //0����������ڶ����໥��Ӧ 
}




//(1)char���ַ��������͡�          ��ʾ�ַ�a��b��c��ʱ�õ�
//(2)short�Ƕ��������͡�           ���������Ҫ��ʾ�������Ƚ�С����ô���ǿ���ʹ�� short �����壬�������Խ�ʡϵͳ��Դ��
//(3)long�ǳ�����                  �÷���short��� 
//(4)float�ǵ����ȸ����� 
//(5)double�ľ��ȱ�floatҪ�� ��С��������λ�����ߣ�����׼ 


#include<stdio.h>
int main()
{
	char ch ='A';//char���ַ����ͣ����������ʹ���һ��������ch�����ڴ�����Ŀռ��ch ���õȺŵ���ʽ�����з����ַ�A�� 
	printf("%c\n",ch);//%c��Ӧ���Ǵ�ӡ�ַ���ʽ������ �������ַ�����ʽ��ӡch 
	return 0;
}





#include<stdio.h>
int main()
{
	int age=20;//���ڴ������ĸ��ֽ��������age      //�������������+�����������ֵ 
	printf("%d\n",age);
	return 0;
}


//%c�Ǵ�ӡ�ַ� 
//%p���Ե�ַ����ʽ���д�ӡ 
//%x��ӡ16�������� 



#include<stdio.h>
int main()
{
	double d=3.14;
	printf("%lf\n",d);   //lf�ڴ˴��������double 
	return 0;
}



#include<stdio.h>
int main()
{
	printf("%d\n",sizeof(char));//1����charռ��һ���ֽ� 
	printf("%d\n",sizeof(int));//4����intռ���ĸ��ֽ� 
	printf("%d\n",sizeof(long));//4����8            long�Ĵ�С>=int�Ĵ�С���ñ�������long��СΪ4���ֽڣ��������ı�������long����Ϊ8���ֽ� 
	printf("%d\n",sizeof(long long));//8
	printf("%d\n",sizeof(short));//2
	printf("%d\n",sizeof(float));//4
	printf("%d\n",sizeof(double));//8
	return 0;
}
//int���ĸ��ֽڣ�32������λ
//short int�������ֽڣ�16������λ���ܱ�ʾ���������2*16-1=65535(short int�ܱ�ʾ�������) 
//ÿһ�����͵�ϸ�����ڳ�����ü�����Ŀռ� 


//�������λ:(1)bit����λ���������λ����һ��λ��2�� byte���ֽڣ��൱��8������λ��3��kb�൱��1024���ֽ� ��4��mb��1024��kb ��5��gb��1024��mb 

 
//  �������Ӳ��������ͨ�硣������1��������0.���������ʶ


#include<stdio.h>
int a=100;//ȫ�ֱ����;ֲ�����������ͬʱ������ִ�оֲ�����          //ȫ�ֱ�������������������������������� 
int main()
{//���������ţ��ֲ������������ڿ�ʼ 
	int a=10;
	printf("%d\n",a);//�ֲ�������ȫ�ֱ������ֲ�Ҫ��ͬ����Ȼ������ᣬ����bug 
	return 0;
}//�������ţ��ֲ������������ڽ��� 


//������ʹ�� 
#include<stdio.h>
int main()
{
	int num1=0;
	int num2=0;
	int sum=0;
	scanf("%d,%d",&num1,&num2);//������������ֱַ�����ַ����&num1��&num2�Ŀռ䡣 
	sum=num1+num2;
	printf("sum=%d\n",sum);
	return 0;
}
























