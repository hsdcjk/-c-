#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year < 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)//������forѭ����year�������
		{
			printf(" %d", year);//���һ���ո���԰�����Ľ������
			count++;
		}
		if (year % 400 == 0)
		{
			printf("%d\n", year);
			count++;
		}

	}
	printf("count=%d\n", count);
	return 0;
}


//���1��100��9�ĸ���
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//i����10��9�������Ϊ9
			count++;
		else if (i / 10 == 9)
			count++;
	}
	printf("1��100��9�ĸ�����%d", count);
	return 0;
}


//���1��100��9�ĸ���
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//i����10��9�������Ϊ9
			count++;
		if (i / 10 == 9)//99������9�������else�����ʮ��ִ�к���в�ִ�С�����ֻ����if���ʮ��if���У�һ��ִ��
			count++;
	}
	printf("1��100��9�ĸ�����%d", count);
	return 0;
}

//һ��֮һһֱ�ӵ�һ�ٷ�֮һ
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;//��Ϊ11���Ǹ�������Ӧ�ø�Ϊdouble
	for (i = 1; i <= 100; i++)
	{
		//sum += 1 / i;             //   1/1=1;1/2��0��ͬ������,������Ϊ1
		sum += 1.0 / i;
	}
	printf("%f\n", sum);//����ҲҪ��Ϊ������
	return 0;
}


//һ��֮һ-����֮һ+����֮һ��һֱ��һ�ٷ�֮һ
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;          //������1.0/i�Ż�õ�һ��������
		flag = -flag;//flag��1��-1֮��ı䣬������1.0/i��ֵ�ı�
	}
	printf("%lf", sum);
	return 0;
}


//������������ֵ
#include<stdio.h>
int main()
{
	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];//���max=0��������ȫΪ����ʱ������ʧ�ܡ����ǿ��Լ��裬�����е�һ����Ϊ���ֵ
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (arr[i] > max)//���������arr����Ԫ��ֵ����max����Ѹ�Ԫ�طŵ�max��ȥ
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}


//��������Ϸ/////////������ϸ�о�������û����ȫŪ��
#include<stdio.h>
#include<stdlib.h>//��rand������ͷ�ļ�
#include<time.h>//time������ͷ�ļ�
void menu()
{
	printf("*****************\n");
	printf("**  1.play     0.exit  **\n");
	printf("*****************\n");
}
void game()//��һ��������һ����������ڶ�����������
{          //���ɵĸ��������Χ��0��32767֮��
	int ret = 0;//��ö�������ǰ��
	int guess = 0;
	ret = rand() % 100 + 1;//�����������rand()%100��ֵ��0��99������ʹ�������Χ���0��100
	printf("%d\n", ret);
	while (1)
	{
		printf("�������:");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (ret > guess)
		{
			printf("��С��\n");
		}
		else
			printf("��ϲ��¶���\n");
		break;
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����rand����֮ǰȥ�����������һ��������������֮��Ϊ���Σ�֮����Ҫһ��ʱ�̷����仯����
		 //��ʱ����������������������㡣��time�������ص�ֵǿ��ת��Ϊunsigned int���޷����Σ���ʾ2^32-1�������
		 //NULL�ǿ�ָ�룬�������ʵ��Ч��
	do
	{
		menu();
		{
			printf("��ѡ��");
		}
		scanf("%d", &input);
		switch (input)
		{
		case 1://ʹ��caseʱ�����������ð��
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);//��Ҫ���Ǵ��ֺš�����input������Ϊ1���ߵ�20�У�������ߵ������ٴ��жϡ�
	return 0;
}


#include<stdio.h>
int main()//����goto���
{
	goto again;//���������У���againλ�ÿ�ʼ��ӡ
	printf("���\n");
again:
	printf("����\n");
	return 0;
}

#include<stdio.h>
#include<string>//��strcmp��ͷ�ļ�
#include<stdlib.h>//��system��ͷ�ļ�
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//��һ�����ڹػ�
again://������ð��
	printf("��ע�⣬��ĵ��Ի���һ�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//strcmpר�űȽ������ַ��������==0���������ַ������
	{
		system("shutdown -a");//�ػ�ȡ��
	}
	else
	{
		goto again;
	}
}


