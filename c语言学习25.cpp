#include<stdio.h>
#include<string.h>
void my_strcpy(char* dest,char* src)//ֻ��Ҫ����������Ҫ���أ�����void�� 
{
	while(*src!='\0')
	{
		*dest=*src; 
		src++;//src���ַ�ָ��++���պ�������һ��Ԫ��
		dest++; 
	}
	*dest=*src;//*src='\0'ʱ����*src��ֵ��dest 
}
int main()
{
	char arr1[]="################";
	char arr2[]="bit";
	strcpy(arr1,arr2);//strcpy�ĺ���ר�����������ַ���.�ҿ������Ŀ�ĵ�arr1����ǰ�棬������Դͷarr2���ں���
	printf("%s\n",arr1);//bit���滹��\0,��������\0ʱ��ֹͣ��������ֻ��ӡ��bit 
	my_strcpy(arr1,arr2); 
	printf("%s\n",arr1);
	return 0;
}


