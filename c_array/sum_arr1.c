#include <stdio.h>
#define SIZES 10 // 对数组求和
int sum(int ar[],int l);
int main(void)
{
	int marbles[SIZES]={1,2,3,4,5,6,7,8,9,10};
	int answer=0;
	answer=sum(marbles,SIZES);
	printf("answer=%lu \n",answer);
	// marbles 包含10个int类型的数组，所以大小是40
	printf("the size of marbles is %zd \n",sizeof marbles);
	return 0;
}
int sum(int arr[],int len)
{
	int i;
	int total=0;
	for(i=0;i<len;i++){
		total+=arr[i];
	}
	// arr 本身并不是一个数组，而是指向数组marbles 的指针，对于采用4字节
	// 的计算机指针的大小为4字节，本机指针的大小是8字节
	printf("The size of arr is %zd bytes \n",sizeof arr);
	return total;
}
