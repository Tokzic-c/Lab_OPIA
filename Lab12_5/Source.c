#include <stdio.h>

int main(void) {
    int x = 12345;
    float f = 12345.0;
    double d = 12345.0;

    int* ptr_int;
    float* ptr_float;
    double* ptr_double;

    unsigned char* a, * a1, * a2, * a3, * a4;
    unsigned char* b, * b1, * b2, * b3, * b4;
    unsigned char* c, * c1, * c2, * c3, * c4, * c5, * c6, * c7, * c8;

    ptr_int = &x;
    a = (unsigned char*)ptr_int;

    a1 = a + 3;
    a2 = a + 2;
    a3 = a + 1;
    a4 = a;

    printf("int: %.2x|%.2x|%.2x|%.2x\n", *a1, *a2, *a3, *a4);

    ptr_float = &f;
    b = (unsigned char*)ptr_float;

    b1 = b + 3;
    b2 = b + 2;
    b3 = b + 1;
    b4 = b;

    printf("float: %.2x|%.2x|%.2x|%.2x\n", *b1, *b2, *b3, *b4);

    ptr_double = &d;
    c = (unsigned char*)ptr_double;

    c1 = c + 7;
    c2 = c + 6;
    c3 = c + 5;
    c4 = c + 4;
    c5 = c + 3;
    c6 = c + 2;
    c7 = c + 1;
    c8 = c;

    printf("double: %.2x|%.2x|%.2x|%.2x|%.2x|%.2x|%.2x|%.2x\n", *c1, *c2, *c3, *c4, *c5, *c6, *c7, *c8);

    return 0;
}