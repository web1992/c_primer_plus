#include <stdio.h>

void look(int x);// 声明函数
int main(void) {
    int x, y;
    x = 10;
    y = 5;
    // 打印值
    printf("x=%d, y=%d \n", x, y);
    // 打印指针，内存地址
    printf("&x=%p, &y=%p \n", &x, &y);
    look(x);
}

void look(int x) {
    printf("x=%d, &x=%p \n", x, &x);
    return;
}
