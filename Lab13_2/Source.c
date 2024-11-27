#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char str[] = "Привет, Вася!";
    char* ptr = str;
    //первая буква имени утраивается
    while (*ptr != '\0') {
        printf("%c", *ptr);
        if (*ptr == 'В') {
            printf("%c%c", *ptr, *ptr);
        }
        ptr++;
    }

    printf("\n");

    return 0;
}