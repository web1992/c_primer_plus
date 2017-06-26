#include <stdio.h>
// https://stackoverflow.com/questions/4744650/nil-pointer-in-c-c
// c 指针的操作
// https://stackoverflow.com/questions/2346806/what-is-a-segmentation-fault
int main(void)
{
	// code ...
	
	// 因为ptr 指针没有进行明确的指向,
	int *ptr;
	printf("(ptr == NULL)= %d \n",ptr == NULL);
	printf("ptr = %p\n",ptr);

	// ptr 没有明确的分配指向，所以打印 Segmentation fault 错误
	//printf("*ptr = %d\n",*ptr); // Segmentation fault	
	
	printf("&ptr = %p\n ",&ptr);	

	int *ptr2=NULL;
	//*ptr2=1;// Segmentation fault

	printf("char test for pointer \n");
	char *str="ABC";
	//*str = 'b'; // Segmentation fault
	

  	char *ptr3 = NULL;
	{
		char c;
		ptr3 = &c;
	}

	//*ptr3 = 'E'; // Segmentation fault
	
	printf("*ptr3=%s \n",*ptr3);
	printf("test end \n");

	return 0;
}
