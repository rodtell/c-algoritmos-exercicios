#include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOne;
  int numberTwo;

  printf("Input number one\n");
  scanf("%d", &numberOne);
  printf("Input number two\n");
  scanf("%d", &numberTwo);

  if (numberOne == numberTwo) {
    printf("Equal\n");
  } else {
    printf("not Equal\n");
  }

  return 0;
}
