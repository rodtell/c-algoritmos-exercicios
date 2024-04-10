#include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOne;
  int numberTwo;
  int numberThree;

  printf("Input number one\n");
  scanf("%d", &numberOne);
  printf("Input number two\n");
  scanf("%d", &numberTwo);
  printf("Input number three\n");
  scanf("%d", &numberThree);

  if (numberOne == numberTwo && numberTwo == numberThree) {
    printf("Equal\n");
  } else {
    printf("not Equal\n");
  }

  return 0;
}
