#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void* a, const void* b) {
    return *(const int*)a - *(const int*)b;
}

int cmp_desc(const void* a, const void* b) {
    return *(const int*)b - *(const int*)a;
}

void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int arr[] = { 5, 2, 8, 1, 9, 3 };
    // 이게 더 낫지 않음?
    int size = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, size, sizeof(arr[0]), cmp_asc);
    print_arr(arr, size);

    qsort(arr, size, sizeof(arr[0]), cmp_desc);
    print_arr(arr, size);

    return 0;
}