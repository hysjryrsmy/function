#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//库函数

//求两个数之和用函数形式表示
/*
int Add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	int sum = Add(a, b);

	printf("%d\n", sum);
	return 0;
}*/


/*
#include <string.h>
int main()
{
	char arr1[] = "bit";
	char arr2[20] = "##############";
	//\0 -> 字符串结束标志
	strcpy(arr2, arr1);
	printf("%s\n",arr2);

	//strcpy - string copy 字符串拷贝 （\0也会拷贝）
	//strlen - string length - 字符串长度有关
	return 0;
}
*/
/*
int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);  //放5个*
	//memset(memory-内存  set - 设置)
	//void * memset ( void * ptr, int value, size_t num );
	printf("%s\n",arr);
	//***** world
	return 0;
}
*/


//自定义函数

//1.判断最大值
/*这里的x和y指的是形参——形式参数——形式上的参数（形式参数只有在函数被调用的过程中才实例化）；形式参数只在函数中有效
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	//函数的使用
	int max = get_max(a, b);
	printf("max = %d\n", max);
	max = get_max(100, 300);
	max = get_max(100, get_max(50,70));
	printf("max = %d\n", max);
	return 0;
}
*/

//2.写一个函数可以交换两个整形变量的内容
/*void Swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}错误的方法，不能完成的任务*/
/*
void Swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	//int tmp = 0;
	printf("a=%d b=%d\n", a, b);
	//Swap1(a, b);//在这里是错误的；-> 传值调用
	//调用Swap1函数 -> 函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
	Swap2(&a, &b); -> 传址调用
	//调用Swap2函数 -> 函数内部可以直接操作函数外部的变量
	//如果仅仅获取值，不需要改变外部变量就可以用传值调用； 如果想在函数内部操作函数外部就需要用传址调用
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("a=%d b=%d\n", a, b);
	return 0;
}
当实参传给形参的时候
形参实例化之后其实相当于实参的一份临时拷贝
对形参的修改是不会改变实参的
*/