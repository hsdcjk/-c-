#define _CRT_SECURE_NO_WARNINGS 1
//����Ļ�����99�˷���
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i * j);//����Ϊ%d*%d���ܴ�ӡ�����
		}                                      //\t�������൱�ڰ���tab��
		printf("\n");
	}
	return 0;
}


#include<stdio.h>
#include<cstring>//��strcpy��ͷ�ļ�
int main()
{
	char arr1[] = "bit";//��arr1������arr2����ȥ
	char arr2[20] = "#########";
	strcpy(arr2, arr1);//strcpy�����е�һ��ΪĿ�ĵأ����ǰ�arr1������arr2����ȥ
	printf("%s\n", arr2);//%s����˼������ַ���
	return 0;//�ַ��������ı�־��\0��strcpy��\0���´����ȥ
}
//��ӡ��arr2Ӧ��Ϊbit\0#####������\0���ַ���������־�����������ַ�������ӡ


#include<stdio.h>
#include<cstring>//��strcpy��ͷ�ļ�
int main()
{
	char arr[] = "Hello world";//������ڴ�ռ��е�Hello���ó�*
	memset(arr, '*', 5);//������arr�����е�һЩ�ַ������滻���������5���ַ��滻��*
	printf("%s\n", arr);
	return 0;
}


#include<stdio.h>
int get_max(int x, int y)//a��b����������������int x��int y��x��y���ص�ֵ������������������ǰ��int
{
	if (x > y)
		return x;//��x���ظ�get_max
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = get_max(a, b);//��a����int x����b����int y
	int MAX = get_max(100, 300);
	printf("max=%d\nMAX=%d\n", max, MAX);
	return 0;
}


//дһ�������������������ͱ���������
#include<stdio.h>
void swap1(int x, int y)//void����˼�ǿգ�û�з���ֵ�����������ź���ı������β�
{         //x�ŵ�Ӧ����10��y�ŵ�Ӧ����20��x��y��a��b�����Լ������Ŀռ䡣�ı�x��y����Ӱ�������a��b
	int tmp;
	tmp = x;
	x = y;      //��ʽ����ֻ���ں���������ʱ�Ż�ʵ�������Ż�����ڴ浥Ԫ,��ʽ�������������Զ�����
	y = tmp;
}
//void swap2������������void swap1��int main����	
void swap2(int* pa, int* pb)//��pa��pb���ܴӵ�22�д����ĵ�ַ,��ַ����,����������п��ܸı亯����������Ļ�ʱ����
{
	int tmp;//��a��b�ĵ�ַ�໥���������Ƕ�Ӧ��ֵ��ȻҲ�ύ��
	tmp = *pa;//�ҵ�����ߵ�a
	*pa = *pb;
	*pb = tmp;//�ҵ�����ߵ�b

}
int main()
{
	int a = 10;
	int b = 20;//a��b������ʵ���ݵı�������ʵ��
	int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	swap1(a, b);//��a��b����swap�����佻����ֻ��Ҫ������������Ҫ����
	swap2(&a, &b);//��a��b�ĵ�ַ����ȥ
	printf("a=%d b=%d\n", a, b);
	return 0;
}


//���һ���������100��200֮�������
#include<stdio.h>
int is_prime(int n)//��int n�����������i���ж�i�Ƿ�Ϊ����,���ص���1����0��Ϊ����
{
	int k;
	for (k = 2; k <= n / 2; k++)
	{
		if (n % k == 0)
			return 0;
		//els             ���Ǵ���ģ�������Ϊ��һ�����޷�����������Ϊ��������
		//	return 0;
	}
	return 1;//k>=nʱ�������֤��û������
}
int main()
{
	int i;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)//���iΪ��������is_prime������������ֵ��1
			printf("%d\t", i);
	}
	return 0;
}


//дһ�������ж�1000��2000����ж��ٸ�����
#include<stdio.h>
int is_runnian(int x)
{
	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_runnian(year) == 1)//���yearΪ���꣬�򷵻�1���
			printf("%d\t", year);
	}
	return 0;
}


//дһ������ʵ����������Ķ��ֲ���
#include<stdio.h>
int binary_searche(int arr[], int k, int sz)//��ʱarr[]��������һ��ָ��
{
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;//���±�Ϊ0
	int right = sz - 1;
	//int mid = (left + right) / 2;�˴�������ֲ���ֻ��һ��
	while (left <= right)//�����м���Ԫ�ؿ��Ա�����
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;//��Ԫ�ز���ʱֻ�ܷ���-1������д����ʱ��������
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鲻��ֱ�Ӵ�������������������������
	int ret = binary_searche(arr, k, sz);//��arr����k,ret���շ���ֵ,��������arr[]
	if (ret == -1)                   //��������ʱ�˿̴�����������һ��Ԫ�صĵ�ַ
	{
		printf("�Ҳ���ָ��������");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}


//дһ��������ÿ����һ�κ������ͻὫnum��ֵ����1
#include<stdio.h>
void Add(int* p)//pΪָ�����,p�൱��num�ĵ�ַ
{
	(*p)++;//++�����ȼ���һЩ��++������p��*p�Ŵ���num
}
int main()
{
	int num = 0;
	Add(&num);//�����ڲ���ı�num������Ҫ���������num��Ӧ�ò��ô���ַ����ʽ
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	return 0;
}


#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//��һ��printf��ӡ���ǵڶ���printf�ķ���ֵ���ڶ���printf��ӡ����
	return 0;             //�����������ķ���ֵ
}
//�ȵ���printf("%d",


