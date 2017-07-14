#include <stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};

// 指针运算符的优先级
int main(void) {
    int *pt1, *pt2, *pt3;
    pt1 = pt2 = data;
    pt3 = moredata;
    // (*pt3)++ 改变了数组元素的值
    // * ,++ 一元运算符有相等的优先级，但是结合时，是从右向左进行的
    printf(" *pt1= %d,*pt2= %d, *pt3= %d \n", *pt1, *pt2, *pt3);
    printf(" *pt1++= %d,*++pt2= %d, (*pt3)++= %d \n", *pt1++, *++pt2, (*pt3)++);
    printf(" *pt1= %d,*pt2= %d, *pt3= %d \n", *pt1, *pt2, *pt3);
    return 0;
}
