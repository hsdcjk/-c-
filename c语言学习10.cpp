#include<stdio.h>
//һ�������Լ�ֱ�ӻ��ӵ����Լ��Ĺ��̽еݹ�
#include<stdio.h>
int main()
{
	printf("����\n");
	main();//main()�����Լ������Լ����κκ������ö������ڴ�����ռ�
	return 0;//����main()��ͣ�����Լ���ֱ��ջ��������ֹͣ
}
//ջ�����ֲ������ͺ������βεĴ���λ�á�
//��������̬���ٵ��ڴ�
//��̬����ȫ��


//��123�ֱ���1 2 3����ʽ��ӡ����
//unsigned���޷������Σ�16λϵͳ���ܴ��淶Χ��-32768��32767��unsigned�����ݷ�Χ��0��65535
#include<stdio.h>
void printf(int n)//ֻ��Ҫ��ӡ������Ҫ���أ�������void
{
	if (n > 9)//n>9ʱ�Ų��ϵݹ���ȥ������9ʱ���ж�
	{
		printf(n / 10);//����ִ��������ú���printf(int n),Ȼ���n/10���ظ�������
	}
	printf("%d\t", n % 10);//���ھ���ִ����֮�󣬲ŻῪʼִ�е�11�С���ӡ1�󣬷��صھ��н����Ľ׶��ֿ�ʼִ�е�11��
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	printf(num);
	return 0;
}
//�ݹ�����������������������������ʱ���ݹ鲻�ڼ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������


//����һ���������ַ�������
#include<stdio.h>
int my_strlen(char* str)//arr�����е�һ���ַ��ĵ�ַ������str���ǵö��庯���ĺ��治��Ҫ��;
{
	int count = 0;//����Ҫ=0����Ȼ�����count++�޷�ִ��
	while (*str != '\0')
	{
		count++;
		str++;//��ַ+1�����Դ�b�ĵ�ַ,ת��i�ĵ�ַ
	}
	return count;//��Ҫ���ǰ�count����ȥ
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);//��arr����my_strlen()��ȥ
	printf("len=%d\n", len);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	return 0;
}


//����һ���������ַ�������
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//����ָ��b��strlen+1���ָ��i��
	}
	else
		return 0;//��һ���ַ���\0,���ַ�������Ϊ0
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("len=%d\n", len);
	return 0;
}





