#include <stdio.h>
int main(void)
{
	int num=2147483647;
	unsigned int j=4294967295;	
	printf("num=%d %d %d \n",num,num+1,num+2);
	printf("j=%u %u %u \n",j,j+1,j+2);
	
	return 0;
}
