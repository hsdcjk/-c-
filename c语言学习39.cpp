#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int arr[3]={1,2,3};
	printf("%d\n",sizeof(a));//a单独放到sizeof里面，计算的是数组总大小。结果是48
	printf("%d\n",sizeof(a[0]));//把二维数组看成一个有三个元素的一维数组。每一个就是该一维数组的一个元素。a[0]相当于第一行作为一维数组的数组名，sizeof(arr[0])计算的是第一行的大小，答案是16 ,可以借鉴下一行 
	printf("%d\n",sizeof(arr[0]));//该行结果是4 
	printf("%d\n",sizeof(a[0]+1));//a[0]是第一行的数组名，没有单独放到sizeof内部。二维数组a[0]相当于一维数组的arr,与arr类似，代表的是第一个元素的地址。则a[0]+1代表第二个元素地址，结果是4 
	printf("%d\n",sizeof(a+1));//a是二维数组的数组名，没有sizeof（数组名），也没有&符号，所以a是首元素地址，而二维数组首元素地址是第一行。a是第一行的地址，+1之后变成第二行的地址。结果是8 
	printf("%d\n",sizeof(*(&a[0]+1)));//&a[0]+1是第二行的地址，加*进行简引用，得到第二行的内容。与*arr[1]类似，则结果是16
	printf("%d\n",sizeof(*a));//与下面相同，*a得到的是第一行的内容 ，结果是16 
	printf("%d\n",sizeof(*arr));//不是单独放进sizeof内部，也没有&符号。则arr代表首元素地址，*arr得到首元素 。结果是4
	printf("%d\n",sizeof(a[3]));//这是第四行，a中虽然没有第四行，没有访问第四行，只是计算第四行的大小。arr[3]得到第四个元素，sizeof(arr[3])是4。a[3]同理是数组a的第三个元素，sizeof(a[3])的结果是16 
	printf("%d\n",sizeof(arr[3]));
	return 0;
}

#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int *ptr=(int*)(&a+1);//数组取地址+1，则跳过整个数组，ptr是5后面一位的地址 
	printf("%d,%d\n",*(a+1),*(ptr-1)); //ptr-1指向的是5的地址 
	return 0;
}


#include<stdio.h>
//假设p的值是0x1000000，下面的表达式的值是多少？
//已知，结构体Test类型的变量大小是20个字节 
struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short aBa[4];
}*p;//加了个*号，带表p的类型是结构体指针，p是结构体指针变量 
int main()
{
	p = (struct Test*)0x100000;//0x100000是一个16进制的整数与p的类型不相符，需要强制转化。 
	printf("%p\n", p + 0x1);//0x是16进制的代表，0x1是16进制的1。p+1得到多少取决于指针类型，整形指针+1跳过一个整形，数组指针+1跳过一个数组，结构体指针+1跳过一个结构体。
	printf("%p\n", (unsigned long)p + 0x1);//整形1048577转化为16进制数是0x100001
	printf("%d\n", (unsigned long)p + 0x1);//0x00100014转化为长整型是1048576，然后+1是1048577
	printf("%p\n", (unsigned int*)p + 0x1);//把p的类型强制转化为无符号整形，+1后跳过一个无符号整形的大小（一个内存空间的大小），则结果是0x100004
	printf("%d\n", (unsigned int*)p + 0x1);//p的类型先转化为(struct Test*)，然后转化为unsigned int*，但是其地址位置不变，还是0x100000。接着挑过一个unsigned int*的大小，变成0x100004，在转化为10进制输出
	return 0;
}
