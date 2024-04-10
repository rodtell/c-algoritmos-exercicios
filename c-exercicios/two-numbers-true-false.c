#include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOne;
  int numberTwo;

  printf("Input first number\n");
  scanf("%d", &numberOne);
  printf("Input second number\n");
  scanf("%d", &numberTwo);

  if (numberOne == numberTwo) {
    printf("True\n");
  } else {
    printf("False\n");
  }

  return 0;
}
