#include <stdio.h>
//函数指针
// https://stackoverflow.com/questions/840501/how-do-function-pointers-in-c-work
// 声明函数原型

int add_int(int, int);

int main(void) {
    // code ...

    // 声明一个函数指针
    // 使用a b 作为参数 可避免冲突
    int (*fun_ptr1)(int a, int b);

    // 把函数的地址给函数指针变量，add_int 函数名表示是函数的指针,&就是获取地址
    fun_ptr1 = &add_int;

    // 调用
    int sum = (*fun_ptr1)(2, 3);


    int (*fun_ptr2)(int x, int y);

    fun_ptr2 = &add_int;

    int sum2 = (*fun_ptr2)(100, 200);


    printf("sum = %d \n", sum);
    printf("sum2 = %d \n", sum2);

    return 0;
}


int add_int(int x, int y) {

    return x + y;
}
