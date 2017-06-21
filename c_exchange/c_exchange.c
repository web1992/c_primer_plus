#include <stdio.h>
//


void int_exchange(int * a,int *  b);

int main(void)
{
	// code ...

	int a=100;
	int b=200;
	printf("before a= %d b= %d \n",a,b);
	int_exchange(&a,&b);	
	printf("after a= %d b= %d \n",a,b);
	return 0;
}

// 交互两个数的值，需要用到指针
void int_exchange(int *a,int *b){

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}
