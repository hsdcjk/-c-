#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	;//����䣬���ڿ����
	int age1 = 20;
	if (age1 < 18)
		printf("δ����\n");//�����������������ִ�в����
	int age2 = 10;
	if (18 <= age2 < 28)//��ִ��18<=age2,���Ϊ����Ϊ0�����0<28��Ϊ�棬����������ꡮ
		printf("����\n");
	if (age2 < 18)//������ȷ��ʽ
		printf("δ����\n");
	else if (age2 >= 18 && age2 < 28)
		printf("����\n");

	return 0;
}

#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)//�����Ϊ�٣�ֱ��ʲô�������
		if (b == 2)
			printf("�Ǻ�\n");
		else
			printf("����\n");//else��������������δƥ���if����ƥ�䣬�������ڰ��е�ifƥ��
	return 0;
}


#include<stdio.h>
int main()
{
	int num = 4;
	if (num = 5)//�����ж���ȣ����Ǹ�ֵ����5��ֵ��num�ˣ����10��5==numҲ�ǿ���ִ�е�
	{
		printf("�Ǻ�\n");
	}//���Ǵ����״��
	if (6 == num)
		printf("�Ǻ�\n");//����д������Ա������ٳ������
	return 0;
}


#include<stdio.h>
//switch�����һ�ַ�֧��䣬�������ڶ��֧�����
int main()
{
	int day;
	scanf("%d", &day);//&ǧ�򲻿�������
	switch (day)//switch��������ŷ����α��ʽ(����Ϊ����)�����ʽ�Ǽ������ʹ�case����ȥ
	{                            //switch�����жϣ�case�����
	case 1://case����ı��������γ������ʽ
		printf("����һ\n"); break;//��������break��������ô����
	case 2:
		printf("���ڶ�\n"); break;
	case 3:
		printf("������\n"); break;
	case 4:
		printf("������\n"); break;
	case 5:
		printf("������\n"); break;
	case 6:
		printf("������\n"); break;
	case 7:
		printf("������\n"); break;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1://���������ð�ţ�
	case 2:
	case 3:
		printf("�Ǻ�\n");//switch��������ǿ��Գ���if���ģ����ܳ���continue
	case 4:
	case 5:
		printf("������\n"); break;
	case 6:
	case 7:
		printf("��Ϣ��\n"); break;
	default://case��defaultû��˳�򣬿��Է���caseǰ��
		printf("�������\n"); break;
	}
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;//���������ִ�У���ʱm=3
	case 2:n++;//��ʱn=2
	case 3:
		switch (n)//switch����Ƕ��ʹ��
		{
		case 1:n++;
		case 2:m++; n++; break;//��ʱn=2�����������ִ�С�ִ�����m=4��n=3
		}
	case 4:m++; break;//ִ�����m=5��n=3
	default:break;
	}
	printf("m=%d\nn=%d\n", m, n);
	return 0;
}

#include<stdio.h>
int main()
{
	while (1)//����һ����ѭ����1Ϊ�棬����Ҫִ�и���䣬��һֱִ��
		printf("����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	while (i < 10)
	{
		if (i == 5)//i=5ʱ��continueִ��
			continue;//continue����������ֹ����ѭ����continue����Ĵ��벻�ټ������ص�ѭ��while�������ж��Ƿ���Ҫ��������
		printf("%d\n", i);//ֻ�����1��2��3��4
		i++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	while (i < 10)
	{
		i++;//i=6ʱ��ֱ��ִ�е�11�С�i�л��ᷢ���ı䣬�򲻻�������ѭ��
		if (i == 5)//i=5ʱ���������ѭ������i=5����ӡ��
			continue;
		printf("%d\n", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int ch = getchar();//��ch���մ�getchar�����з��������ַ�
	putchar(ch);//putchar��getchar��Ӧ�������
	printf("%c\n", ch);//�����͵�������һģһ����
	return 0;
}

#include<stdio.h>
int main()
{//EOF--end of file,���ļ�������־�������ϵ���-1
	int ch = 0;//getchar�������ctrl+z�������getchar�ͻ��ȡһ��EOF�ŵ�ch���棬��ʱΪ�پͻ�ֹͣ��
	while ((ch = getchar()) != EOF)//Ӧ����() !=(),�����ĸ�ʽ
	{
		putchar(ch);//����������EOFʱû���õģ������ʱ�ֱ�����E������O��������F
	}
	return 0;
}

