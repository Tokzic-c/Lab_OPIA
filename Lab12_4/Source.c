#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
    float* ptr_a;
    //4.1
    printf("array: %p\n", array);
    printf("&array[0]: %p\n", &array[0]);
    printf("&array: %p\n\n", &array);
    //4.2
    ptr_a = array;
    printf("ptr_a: %p\n*ptr_a: %.1f\n", ptr_a, *ptr_a);
    ptr_a++;
    printf("ptr_a: %p\n*ptr_a: %.1f\n", ptr_a, *ptr_a);
    ptr_a += 4;
    printf("ptr_a: %p\n*ptr_a: %.1f\n", ptr_a, *ptr_a);
    ptr_a -= 2;
    printf("ptr_a: %p\n*ptr_a: %.1f\n\n", ptr_a, *ptr_a);
    //4.3
    ptr_a = array;
    for (int i = 0; i < sizeof(array) / sizeof(*array); i += 2) {
        printf("Индекс: %d, значение: %.1f\n", i, *ptr_a);
        ptr_a += 2;
    }
    printf("\n");
    //4.4
    ptr_a = &array[sizeof(array) / sizeof(*array) - 1];
    for (int i = 0; i < sizeof(array) / sizeof(*array); ++i)
        printf("Индекс: %llu, значение: %.1f\n", sizeof(array) / sizeof(*array) - i, *ptr_a--);

    return 0;
}