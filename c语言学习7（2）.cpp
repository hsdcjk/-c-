#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������룺123456\n��123456\n���õ����뻺������123456��scanf���ߣ�\n��getchar�������ߣ�\n��ASC���ǵ�ʮλ
int main()
{
	int ret, ch;
	char password[20] = { 0 };//�ȸ�ֵ0�����ڻ���֪����ֵ���ٽ�ȥ
	printf("���������룺");
	scanf("%s", password);//�����ַ������룬�������password�����顣scanfֻ��ѿո�ǰ����ַ�������
	getchar();//��getchar������ʣ���\n����
	while ((ch = getchar() != '\n'))//һֱִ�У�ֱ����\n���س������뵽getchar()��
	{
		;//����Ҫwhile������ִ�У�ֻ��Ҫ����պ���
	}
	printf("��ȷ��(Y/N):");
	ret = getchar();
	if (ret == 'Y')//ǧ��ע�����ǵ��ڣ����Ǹ�ֵ��
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");//�������������һ���س����س�(\n)����������getchar���ߣ��س���10������Y����else
	}
	return 0;
}

//�������123456 ABCD��������Ȼ����������Ҫ�Ľ����Ӧ����while����


#include<stdio.h>
int main()
{
	int i = 0;//�ȴ�����i��������֪����ֵʲô���ʣ���i=0
	for (i = 1; i <= 10; i++)//������ʼ�����жϺ͵��������ֽ�ϵ�һ��,i++���ڵ�������
	{
		if (i == 5)
			continue;//�����ⲽʱ��ֱ������������i++�ĵ�������
		printf("%d\n", i);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)//��forѭ�����ڸı�ѭ����������ֹforѭ��ʧȥ���ƣ��ڴ˴�iһֱ=5
			printf("����\n");
		printf("�Ǻ�\n");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0; i < 10; i++)//����ʹ��ǰ�պ󿪵�д����i=0�Ǳգ�i<10�ǿ�
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	for (;;)//forѭ���ĳ�ʼ�����������ж϶�����ʡ�ԡ���forѭ�����жϱ�ʡ�Ծ�Ĭ�Ϻ�Ϊ�棬��һֱѭ��
	{
		printf("����\n");
	}

	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)//i=2ʱ��j=10�������ѭ���������˳����Դ����ơ���6�е�forִ�������ת��i++��Ȼ�����ж�
	{
		for (; j < 10; j++)//i=1ʱ�����ѭ����j=10ʱ�˳���ѭ�����������j=0ʱ��ÿһ�ξ���ʱj=0������ӡ100������
			printf("����\n");//��ó���ֻ��ӡ10������
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)//++y��y++��������һ����
		printf("����\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k=0�Ĳ��ֱ���Ӧ�����ж���䣬�����ǰ�0��ֵ��k����k=0���ʽ�Ľ����k��0��
	{                                   ////0Ϊ�٣���ѭ��ѹ������ȥ��������0��ѭ�������kΪ��������ѭ��
		k++;
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 1;
	do//{}����do��while֮��
	{
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	return 0;
}

#include<stdio.h>
int main()
{
	int i = 1;
	do//{}����do��while֮��
	{
		if (5 == i)
			break;//5==iʱ����ѭ��
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int k = 1;
	scanf("%d", &n);//���ﲻ����%d\n����Ϊ\n�ǻ��У�����һ�����ֺ󲻻�����ִ�У����ǵ���������һ�����������
	for (i = 1; i <= n; i++)
	{
		k = k * i;
	}
	printf("k=%d\n", k);
	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int k = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)//n=1,n<=3ִ����ֱ�ӽ���ѭ����ѭ���������������ʽ��n++��Ȼ���ж�n<=3,Ȼ���������ѭ��
	{
		k = 1;//�����forѭ��������k�ǿ����ۼƵģ�ÿ��k=1����
		for (i = 1; i <= n; i++)//ÿ�ν����ѭ������i=1��ʼ
		{
			k = k * i;
		}
		sum = sum + k;
	}
	printf("%d", sum);
	return 0;
}


#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10;//дһ��������룬�������ҵ�7
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);//szʵ�����Ǹ�������Ԫ�صĸ���
	for (i = 0; i <= sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��������±�Ϊ��%d\n", i);
			break;
		}
	}
	if (k > sz)
		printf("�Ҳ���\n");
	return 0;
}


#include<stdio.h>
int main()
{
	int k = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//��ʾ���±�
	int right = sz - 1;//��ʾ���±�
	while (left <= right)//while�����ǵô������ţ������д����ж�����
	{                 //�鵽���һ��ʱleft=right,ʱ��û���ҵ�����Ҫ����������Զ�޷��ҵ�
		int mid = (left + right) / 2;//ȡ�����±��ƽ��ֵ
		if (arr[mid] > k)//�м�Ԫ�ش�����Ҫ�ҵ�Ԫ��
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)//�м�Ԫ��С����Ҫ�ҵ�Ԫ��
		{
			left = mid + 1;
		}
		else
		{
			printf("�±��ǣ� % d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("��Զ�޷��ҵ�");
	return 0;
}


#include<stdio.h>
#include<string.h>
#include<windows.h>//ʹ��Sleep��ͷ�ļ�
#include<stdlib.h>//ʹ��system��ͷ�ļ�
int main()
{     //char arr3="a,c,b",ʵ��������arr3Ԫ��Ϊa��b��c��\n�ĸ�Ԫ��
	char arr1[] = "welcome to bit!!!!!!";//Ԫ�ظ���������
	char arr2[] = "####################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//�������±ꡣ�����ʿ��Կ�������
	int right = strlen(arr1) - 1;//�ھ��к͵�ʮ�еı������һ����
	while (left <= right)//left��right�м���Ԫ��ʱ�ſ���ִ��
	{
		arr2[left] = arr1[left];//�ѵ�һ��#����w
		arr2[right] = arr1[right];//�����һ��#���ɣ�
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣ1000���������Ϣһ��
		system("cls");//systerm��ִ��ϵͳ�����һ��������cls�������Ļ
	}

	return 0;
}


#include<stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)//�˴��������ַ���������Ҫע��
	{
		printf("����������;");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�ȺŲ��������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��strcmp������
									   //password�����õ��ںţ�Ӧ���ö���
		{                              //���password="123456"������������������ֵΪ��
			printf("��¼�ɹ�");
			break;
		}
		else
			printf("�������");
	}
	if (i == 3)
	{
		printf("�������������");
	}
	return 0;
}