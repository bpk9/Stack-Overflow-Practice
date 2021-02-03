#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char input[16];
  char check[16] = "123456789ABCDEF";
  
  printf("Enter your input:");
  gets(input);

  if (strcmp(check, "bingo") == 0)
    printf("Bingo!\n");
  else
    printf("Sorry, try again!\n");

  return 0;
}
