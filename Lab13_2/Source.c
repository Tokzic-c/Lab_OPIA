#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    char str[] = "������, ����!";
    char* ptr = str;
    //������ ����� ����� �����������
    while (*ptr != '\0') {
        printf("%c", *ptr);
        if (*ptr == '�') {
            printf("%c%c", *ptr, *ptr);
        }
        ptr++;
    }

    printf("\n");

    return 0;
}