#include <stdio.h>
#define SIZE 4 // 定义数组的大小，使用预定义，方便后续修改
int main(void)
{	
	short  dates [SIZE];
	short *prti;
	short index;
	double bills[SIZE];
	double *prtf;
	prti=dates;
	prtf=bills;
	printf("%23s %10s\n","short","double");
	for(index =0;index < SIZE;index++)
		printf("pointers + %d: %10p %10p \n",index,prti+index,prtf
				+index);
	// printf("size=%d\n",SIZE);
	// 数组名是该数组首位元素的地址
	// 打印地址
	printf("dates[0]=%p \n",dates);
	printf("dates[0]=%p \n",&dates[0]);
	// 打印值
	printf("dates[0]=%d \n",dates[0]);
	printf("dates[0]=%d \n",*dates);
	return 0;
}
