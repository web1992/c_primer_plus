#include <stdio.h>

int main(void) {
    int num = 2147483647;
    // unsigned int 比int 存贮更大数值
    // 由于指示数值正负的位数，也被用于二进制
    // 所以可以表示更大的正数
    unsigned int j = 4294967295;
    printf("num=%d %d %d \n", num, num + 1, num + 2);
    printf("j=%u %u %u \n", j, j + 1, j + 2);
    // int  有符号整数，超过最大范围值，从负数开始
    // unsigned int 无符号整数，超过最大范围值，从0开始
    return 0;
}
