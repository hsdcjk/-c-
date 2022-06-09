#include<stdio.h>
int main()
{
	char arr[]="abcdef";//该数组实际上的内容是a b c d e f \0 
	printf("%d\n",sizeof(arr+0));//数组名arr没有单独放进 sizeof里面，则arr代表首元素地址，+0后仍然是首元素地址，则结果是4/8
	printf("%d\n",sizeof(&arr+1));//取地址arr后+1，跳过一个数组大小的字节，但指向的仍然是地址，则结果仍然是4/8 
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="abcdef";
	printf("%d\n",strlen(arr));//strlen函数并不统计\0，所以该行的结果是6
	//printf("%d\n",strlen(*arr));//因为*arr得到的值是a，且strlen中放的应该是地址，则把a当成地址使用，a的asc码是97，则从97开始计算，97的空间不属于我们，则非法访问而报错
	printf("%d\n",strlen(&arr));//&d地址符号，取的是首元素地址，与上面第一个相同，结果是6。
	//&arr是取数组地址-数组指针。char (*p)[7]=&arr。&arr的类型是char (*)[7],但是strlen函数中的类型应该是const char*，类型不符合会有警告甚至报错
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char *p="abcdef";//这种写法是把常量字符串abcdef的首元素a的地址放到p中
	printf("%d\n",sizeof(p[0]));//arr+0，得到的仍然是首元素地址，*(arr+0)得到首元素，且arr[0]也是得到首元素。则*(arr+0)=arr[0] 完全等价 
	printf("%d\n",sizeof(&p));//p是a的地址，&p取p的地址放到另一个地址，则结果是4/8
	printf("%d\n",sizeof(&p+1));//&p先取出p的地址，然后+1跳过p地址所在的空间 ，但仍然是地址，结果是4/8 
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
	char *p="abcdef";
 	//printf("%d\n",strlen(&p)); //p是首元素a的地址，&p是把p的地址放到另一个内存空间中，但是不知道该内存空间何时出现\0，则该行结果是随机值
	//视频上是随机值，但strlen标准是strlen(const char *str),现在放的是p的地址，p不是字符，因为类型不同，所以会报错
	printf("%d\n",strlen(&p[0]+1));  //结果是5 
	return 0;
}


