#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>
int ne_b(char* s) {
    int c = 0;
    while (1) {
        if (!isalpha(*s) && !isspace(*s)) {
            c++;
        }
        if (*s == ' ')
            break;
        s++;
    }
    return c;
}

int main() {
    setlocale(LC_ALL, "Rus");
    char str[256];
    int sum = 0;
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char* w = str;
    int wc = 0;

    while (*w != '\0') {
        char* e = w;
        while (*e != '\0' && !isspace(*e)) {
            e++;
        }

        if (wc % 2 == 1) {
            int nl = ne_b(w);
            printf("Количество не букв в слове \"%.*s\": %d\n", (int)(e - w), w, nl);
            sum += nl;
        }

        w = e;
        while (*w != '\0' && isspace(*w)) {
            w++;
        }

        wc++;
    }
    printf("%Общее кол-во не букв в каждом втором слове: %d", sum);
    return 0;
}