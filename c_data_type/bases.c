#include <stdio.h>

int main(void) {
    int num = 10;
    printf("dec=%d,octal=%o,hex=%x\n", num, num, num);
    printf("dec=%d,octal=%#o,hex=%#x\n", num, num, num);
}
