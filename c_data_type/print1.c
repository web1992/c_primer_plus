#include <stdio.h>

int main(void) {
    int ten = 10;
    int two = 2;
    printf("Doing is right\n");
    printf("%d minus %d is %d\n", ten, two, ten - two);
    printf("Doing it wrong\n");
    printf("%d minus %d is %d\n", ten);
    return 0;
}
