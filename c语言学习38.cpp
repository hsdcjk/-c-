#include<stdio.h>
int main()
{
	char arr[]="abcdef";//������ʵ���ϵ�������a b c d e f \0 
	printf("%d\n",sizeof(arr+0));//������arrû�е����Ž� sizeof���棬��arr������Ԫ�ص�ַ��+0����Ȼ����Ԫ�ص�ַ��������4/8
	printf("%d\n",sizeof(&arr+1));//ȡ��ַarr��+1������һ�������С���ֽڣ���ָ�����Ȼ�ǵ�ַ��������Ȼ��4/8 
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abcdef";
	printf("%d\n",strlen(arr));//strlen��������ͳ��\0�����Ը��еĽ����6
	//printf("%d\n",strlen(*arr));//��Ϊ*arr�õ���ֵ��a����strlen�зŵ�Ӧ���ǵ�ַ�����a���ɵ�ַʹ�ã�a��asc����97�����97��ʼ���㣬97�Ŀռ䲻�������ǣ���Ƿ����ʶ�����
	printf("%d\n",strlen(&arr));//&d��ַ���ţ�ȡ������Ԫ�ص�ַ���������һ����ͬ�������6��
	//&arr��ȡ�����ַ-����ָ�롣char (*p)[7]=&arr��&arr��������char (*)[7],����strlen�����е�����Ӧ����const char*�����Ͳ����ϻ��о�����������
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char *p="abcdef";//����д���ǰѳ����ַ���abcdef����Ԫ��a�ĵ�ַ�ŵ�p��
	printf("%d\n",sizeof(p[0]));//arr+0���õ�����Ȼ����Ԫ�ص�ַ��*(arr+0)�õ���Ԫ�أ���arr[0]Ҳ�ǵõ���Ԫ�ء���*(arr+0)=arr[0] ��ȫ�ȼ� 
	printf("%d\n",sizeof(&p));//p��a�ĵ�ַ��&pȡp�ĵ�ַ�ŵ���һ����ַ��������4/8
	printf("%d\n",sizeof(&p+1));//&p��ȡ��p�ĵ�ַ��Ȼ��+1����p��ַ���ڵĿռ� ������Ȼ�ǵ�ַ�������4/8 
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char *p="abcdef";
 	//printf("%d\n",strlen(&p)); //p����Ԫ��a�ĵ�ַ��&p�ǰ�p�ĵ�ַ�ŵ���һ���ڴ�ռ��У����ǲ�֪�����ڴ�ռ��ʱ����\0������н�������ֵ
	//��Ƶ�������ֵ����strlen��׼��strlen(const char *str),���ڷŵ���p�ĵ�ַ��p�����ַ�����Ϊ���Ͳ�ͬ�����Իᱨ��
	printf("%d\n",strlen(&p[0]+1));  //�����5 
	return 0;
}


