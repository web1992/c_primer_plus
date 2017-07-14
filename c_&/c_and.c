#include <stdio.h>
// & 地址运算符
int main(void)
{
	// code ...
	int a=1;
	int *prt=&a;
	printf("p=%p \n",&a);	
	printf("the val of a=%d \n",*prt);	
	printf("ptr=%p \n",prt);	
	return 0;
}
