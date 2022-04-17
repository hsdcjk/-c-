//一个内存单元是一个字节
#include<stdio.h>
int main()
{
	int a=10;
	int* p=&a;//p是用来存放a地址的变量叫指针变量，p的类型是int*，指针就是地址，地址就是指针 
	return 0;
}
//对于32位的机器，有32根地址线，有2的32次方个地址编号。，一个字节8个比特位，则32的机器上用4个字节可以把地址存起来，64位的机器泽需要8个字节
 
 #include<stdio.h>
int main()
{
	printf("%d\n",sizeof(char*)); //四行输出的结果都为8，因为该机器是64位的机器 
	printf("%d\n",sizeof(int*)); 
	printf("%d\n",sizeof(short*)); 
	printf("%d\n",sizeof(double*)); 
	int a=0x11223344;//0x代表16进制序列，1个16进制位是4个二进制位 ，输入到a的值只占4字节。记得是零x 
	int* pa=&a;//取地址a放到pa里面去 。int* pa能简引用a的全部四个字节 
	//char* pc=&a;//char*和a的类型不一致，则无法放入 ，因为char* pc只能简引用a中的一个字节，但是a占四个字节，所以错误 
	printf("%p\n",pa); 
	*pa=0;//把a的值改为0; 
	return 0;
}
 //int* pa相当于a。 
 //针类型决定了指针进行简引用操作是能够访问空间的大小 。int* p:  *p可以访问四个字节。char* p： *p能够访问1个字节。double* p： *p能够访问8个字节
  
  
  #include<stdio.h>
int main()
{
	int a=0x11223344;
	int* pa=&a;
	//char* pc=&a;
	printf("%p\n",pa);//第七行比第八行的结果少4，因为指针类型决定了指针+1跳过了几个字节 
	printf("%p\n",pa+1);
//	printf("%p\n",pc);            //同理第九行比第10行少1 
//	printf("%p\n",pc+1);
	return 0;
}
//指针类型决定了指针一步走多远（指针的步长） 。int* p+1,向后跳过4个字节 
 
 
 #include<stdio.h>
int main()
{
	int arr[10]={0};//一个整数占4个字节，0放在40个字节中
	int* p=arr;//数组名是首元素的地址。把首元素的地址放到p里面去
	//char* p=arr;    则在数组40个字节中只改变10个字节，在第10行不能把arr完全改成1 
	int i=0;
	for(i=0;i<10;i++)
	{
		*(p+i)=1;//*p相当于a，该行把arr[10]中的元素全部改成1 
	} 
	for(i=0;i<12;i++)
	{
		p++;//当p++越出p能管理的范围之后，该指针p被称为野指针 
	}
	return 0;
}
//野指针：指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
//没有对指针进行定义的就是野指针，野指针随机指向内存中的某一位置 

#include<stdio.h>
int main()
{
	int* p=test();//p所指向的空间还给操作系统了 
	*p=20; //把20放入已经销毁的地址 
	return 0;
}
int* test()
{
	int a=10;//创建一个局部变量a放置10 ，a的地址是0x0012ff44 
	return &a;//虽然把地址返回给test，但局部变量a出test函数销毁后，该地址销毁 
}

