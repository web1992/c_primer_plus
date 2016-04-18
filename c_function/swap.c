#include <stdio.h>
void swap(int *,int *);
int main(void)
{
	int num0=10;
	int num1=5;
	printf("old num0=%d, num1=%d \n",num0,num1);
	swap(&num0,&num1);
	printf("new num0=%d, num1=%d \n",num0,num1);
}

void swap(int *x,int *y)
{
	int temp;
	temp= *x;
	*x=*y;
	*y=temp;
	return;
}
