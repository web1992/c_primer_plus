#include <stdio.h>

int main(void) {
    //printf("\a");
    //显示一个字符的编码至
    char ch;
    printf("please enter a character. \n");
    scanf("%c", &ch);
    printf("the code for %c is %d. \n", ch, ch);
    return 0;
}

