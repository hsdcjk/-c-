#include <stdio.h>
//����һ������
int main()
{
	//int count = 10;
	//int arr[count];�����Ӵ��������ǲ��еģ��������ڱ���Ϊ����
	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
	char arr2[5] = { 'a','b' };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ��Ϊ0
	char arr4[5] = { 'a',98 };//���н����ھ���һ������Ϊb��asc��ֵΪ98
	char arr3[5] = "ab";//����ȫ��ʼ������������\0������λ��Ĭ��Ϊ0
	char arr7[] = "abc";//����ָ����С��ʱ���������ݳ�ʼ�������ݣ���ȷ������Ԫ�ص�������������\0����4�ַ�
	char arr6[] = { 'a','b','c' };//ֻ��abc�����ַ�,ռ�����ֽ�
	printf("%d\n", sizeof(arr7));//
	printf("%d\n", sizeof(arr6));
	printf("%d\n", strlen(arr7)); //strlen�����\0֮ǰ���ַ�������
	printf("%d\n", strlen(arr6));//��������ֵ��֪������\0
	return 0;
}


#include <stdio.h>
int main()
{
	char arr[] = "abcdrf";
	printf("%c\n", arr[3]);//��ӡ��d
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%c\t", arr[i]);//��ӡ��abcdef
	}
	return 0;
}



#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//�������ڴ�����������ŵ�
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("&arr[%d]=%p\n", i, &arr[i]);//ȥ���±�Ϊi�ĵ�ַ��%p��ȡ��ַ���š���i�ŵ�[]����ȥ
	}//������ɺ�ÿ������ַ�Ľ���պò�4��һ��int���ֽڴ�С�պ�Ϊ4
	return 0;
}



//дһ����ά����
#include <stdio.h>
int main()
{
	int arr1[3][4] = { 1,2,3,4,5 };//������3��4�е����顣��һ��4������֮����5�ŵ��ڶ��С�
	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };//��ά�������п���ʡ�ԣ��в�����ʡ��
	int arr3[3][4] = { {1,2,3 },{ 4, 5} };//��123���ڵ�һ�У���45���ڵڶ��У�δ��������0����
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", arr3[i][j]);//��123���ڵ�һ�У�45���ڵ�2��
			printf("&arr3[%d][%d]=%p\n", i, j, &arr3[i][j]);//��ά���鰴��˳��������
		}
		printf("\n");
	}
	return 0;
}