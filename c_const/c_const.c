#include <stdio.h>

//
void pt(const int a[], int len);

#define SIZE 4

int main(void) {
    // code ...


    // const 与 变量

    const int a = 100;
    // a=200; // 编译错误 error: assignment of read-only variable ‘a’

    // const 与 指针

    const int *ptr1 = &a;
    int b = 200;
    // *ptr1 = &b; // error: assignment of read-only location ‘*ptr1’

    int const *ptr2;
    // *ptr2 = 300; // 只读
    printf("*ptr2 = %d \n", *ptr2);
    // *ptr2= &a;


    // const 与 函数形参
    int arr[] = {20, 30, 40, 50};
    pt(arr, SIZE);

    // const 与 数组

    return 0;
}

void pt(const int a[], int len) {
    int i = 0;
    for (; i < len; i++) {
        printf("a[%d]= %d \n", i, a[i]);
        // a[i]=2; // error: assignment of read-only location
    }
    return;
}
