#include <stdio.h>
#include <stdlib.h>

long *ret;

int parseInput(int in1, int in2) {
  int bingo = 0;
  char answer[42] = "the answer";
  ret = (long *)(answer + in1);
  *ret = *ret + in2;
  return bingo;
}

int main(int argc, char *argv[]) {
  char buf[100];
  int in1, in2;
  printf("Enter input integer 1:");
  fgets(buf, 100, stdin);
  in1 = atoi(buf);
  printf("Enter input integer 2:");
  fgets(buf, 100, stdin);
  in2 = atoi(buf);

  if (parseInput(in1, in2) == 1)
    printf("Bingo!\n");
  else
    printf("Sorry, try again!\n");
  
  return 0;
}
