#include <stdio.h>

// 必须在 main 函数之前
struct teacher {
    char *name;
    int age;

};


struct stu {

    char *name;
    int age;
    int num;
    float score;
} stu1, stu2;


// 结构体的定义
int main(void) {
    // code ...

    struct teacher t1 = {"Lee", 18};
    printf("the t1`s name is %s \n", t1.name);
    struct stu s1;
    s1.name = "xiao ming";
    printf("s1.name = %s \n", s1.name);
    return 0;
}



