#include <stdio.h>
// typedef 在c中的用例
// https://www.tutorialspoint.com/cprogramming/c_typedef.htm 
// typedef vs #define
// #define 在预处理是解析 pre-processor
// typedef 在则是有编译器 解析的 compiler 


typedef struct Book {

    double price;
    char *name;
    int id;

} Book;

int main(void) {
    // code ...
    Book book;
    book.id = 1;
    book.name = "C plus plus";
    book.price = 21.50;

    printf("Book id = %d name = %s price = %f \n", book.id, book.name, book.price);
    return 0;
}
