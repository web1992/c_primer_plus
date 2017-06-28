#include <stdio.h>
//
int main(void)
{
	// code ...
 	enum spectrum {read,orange,yellow,green,blue,voiolet};
	enum spectrum color;

	// c枚举的类型
	// 枚举的默认值从0开始
	printf("read = %d, orange = %d \n",read,orange);	

	enum levels {low=100,medium=200,high=2000};

	printf("low = %d, medium = %d, high = %d \n",low,medium,high);

	return 0;
}
