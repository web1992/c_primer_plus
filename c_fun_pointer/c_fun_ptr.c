#include <stdio.h>
//函数指针
// https://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work
// 声明函数原型

int add_int(int,int);

int main(void)
{
	// code ...

	// 声明一个函数指针
	int (*fun_ptr1)(int,int);
	
	// 把函数的地址给函数指针变量，add_int 函数名表示是函数的指针,&就是获取地址
	fun_ptr1 = &add_int;
	
	// 调用
	int sum = (*fun_ptr1)(2,3);	

	printf("sum = %d \n",sum);
		
	return 0;
}


int add_int(int x,int y){

	return x+y;
}
