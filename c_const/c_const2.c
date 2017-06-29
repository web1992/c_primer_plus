#include <stdio.h>
int main(void)
{
	//c 中关于const的用法
	//下面是一个例子
	double reate[5] = {12.0,150,100,99,66.01};
	const double lock[4] = {0.1,0.2,0.3,0.4};
	const double * /* const */ pc = reate;// 合法
	pc = lock;// 合法
	pc = &reate[3];// 合法	
	// pc =12.0;// 不合法,这里的const在double前，表明pc 指针对应的值是不可以改变的
	// 如果const 在 pc前，表明pc 指针指向的地址是不可以改变的，
	return 0;
}
