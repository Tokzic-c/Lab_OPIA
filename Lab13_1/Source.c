#include <stdio.h>
#include <string.h>

int main(void) {
    puts("Enter your name");
    char user_name[40];
    fgets(user_name, sizeof(user_name), stdin);
    user_name[strlen(user_name) - 1] = '\0';
    char greeting[40] = "Hello, ";

    strcat(user_name, "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    strncat(greeting, user_name, sizeof(greeting) - strlen(greeting) - 1);
    greeting[sizeof(greeting) - 1] = '\0';

    puts(greeting);

    return 0;
}