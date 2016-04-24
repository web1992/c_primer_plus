#include <stdio.h>
#define SIZES 10 // 对数组求和,第二种方法
int sum(int *start,int *end);
int main(void)
{
	int marbles[SIZES]={1,2,3,4,5,6,7,8,9,10};
	int answer=0;
	// marbles+SIZE 指向了数组最后一个元素之后
	// C保证在为数组分配存储空间时，指向数组之后的第一个位置的指向
	// 也是合法的，（这个中“越界”的指针可使函数调用的形式更加简洁）
	//
	answer=sum(marbles,marbles+SIZES);
	printf("answer=%lu \n",answer);
	printf("marbles+SIZES=%lu \n",marbles+SIZES);
	printf("marbles+SIZES=%lu \n",marbles+SIZES+1);// C 中并不报越界异常，与java不同
	// marbles 包含10个int类型的数组，所以大小是40
	printf("the size of marbles is %zd \n",sizeof marbles);
	return 0;
}
int sum(int *start,int *end)
{
	int total=0;
	// 这里的end实际指向了数组最后元素的后一个位置
	while(start < end){
		total+=*start;// 累加值到total 中
		start++; // 使指针向前推进到下一个元素
	}
	return total;
}
