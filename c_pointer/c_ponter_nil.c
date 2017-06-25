#include <stdio.h>
//https://stackoverflow.com/questions/4744650/nil-pointer-in-c-c
// c 指针的操作
int main(void)
{
	// code ...
	// 因为ptr 指针没有进行明确的指向,
	int *ptr;
	printf("(ptr == NULL)= %d \n",ptr == NULL);
	printf("ptr = %p\n",ptr);	
	// ptr 没有明确的分配指向，所以打印 Segmentation fault 错误
	printf("*ptr = %d\n",*ptr);	
	printf("&ptr = %p\n ",&ptr);	
	return 0;
}
