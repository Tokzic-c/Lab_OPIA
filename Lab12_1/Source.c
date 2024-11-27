#include <stdio.h>

int main() {
    char* char_ptr;
    int* int_ptr;
    double* double_ptr;

    printf("%d\n", sizeof(char_ptr));
    printf("%d\n", sizeof(int_ptr));
    printf("%d\n", sizeof(double_ptr));

    return 0;
}