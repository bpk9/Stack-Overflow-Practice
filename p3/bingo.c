#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *foo() {
    char input[8];
    gets(input);
    return "check";
}

int main(int argc, char *argv[]) {
    printf("Enter your input:");

    if (strcmp(foo(), "bingo") == 0 && argc == 1) 
        printf("Bingo!\n");
    else 
        printf("Sorry, try again!\n");

    return 0;
}