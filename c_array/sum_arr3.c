#include <stdio.h>
// 求数组的和
// 1，使用指针运算,求和
// 2，使用数组的长度,求和

#define SIZE 5

int sum_arr(int *start, int *end);

int sum_arr_with_len(int *arr, int len);

int main(void) {
    // code ...
    int arr[SIZE] = {1, 2, 3, 4, 5};

    int total = sum_arr(arr, arr + SIZE);
    printf("total = %d \n", total);

    int total_with_len = sum_arr_with_len(arr, SIZE);
    printf("total_with_len = %d \n", total_with_len);

    return 0;
}

int sum_arr(int *start, int *end) {

    int total = 0;
    while (start < end) {
        total += *(start);
        start++;
    }
    return total;

}

int sum_arr_with_len(int *arr, int len) {
    int total = 0;
    int i = 0;
    while (i < len) {
        total += arr[i];
        i++;

    }
    return total;

}
