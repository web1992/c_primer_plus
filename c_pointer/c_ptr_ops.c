#include <stdio.h>

//
int main(void) {
    // code ...

    //(指针的值) 指针指向的地址，指针指地址中存储的内容，指针本身的地址
    int urn[5] = {100, 200, 300, 400, 500};
    // 声明指针
    int *ptr1, *ptr2, *ptr3;
    // 指针的赋值，只有赋值之后才能使用指针
    ptr1 = urn;
    ptr2 = &urn[2];
    printf("pointer value,dereferenced pointer, pointer address \n");
    printf("ptr1=%p *ptr1=%d &ptr1=%p \n", ptr1, *ptr1, &ptr1);

    // 指针的加法运算
    ptr3 = ptr1 + 4;
    printf("\n adding an int to pointer \n");
    printf("ptr1+4=%p *(ptr1+3)=%d \n", ptr1 + 4, *(ptr1 + 3));


    // 递增指针
    ptr1++;
    printf("the value of after ptr1++ \n");
    printf("ptr1 =%p,*ptr1 =%d,&ptr1=%p \n", ptr1, *ptr1, &ptr1);

    // 指针减法
    ptr2--;
    printf("\n values after ptr2--\n");
    printf("ptr2 =%p,*ptr2 =%d, &ptr2=%p \n", ptr2, *ptr2, &ptr2);

    // ptr2 恢复初始值
    --ptr1;
    ++ptr2;
    printf("\n Pointer reset to original values:\n");
    printf("ptr1 =%p,*ptr2=%p\n", ptr1, ptr2);

    // 一个指针减去另一个指针
    printf("\nsubtracting pne pointer from another :\n");
    printf("ptr2=%p,ptr1=%p, ptr2-ptr1=%d \n", ptr2, ptr1, ptr2 - ptr1);

    // 一个指针减去一个整数
    printf("\nsubtracting an int from a pointeri:\n");
    printf("ptr3=%p,ptr3 - 2=%p \n", ptr3, ptr3 - 2);
    return 0;
}
