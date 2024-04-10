#include <stdio.h>

int main(int argc, char *argv[])
{
  float numberOne;
  float numberTwo;

  printf("Input first number: \n");
  scanf("%f", &numberOne);
  printf("Input second number: \n");
  scanf("%f", &numberTwo);

  if (numberOne > numberTwo) {
    printf("%.2f is the maximum number and %.2f is the minimum number\n", numberOne, numberTwo );
  } else {
    printf("%.2f is the maximum number and %.2f is the minimum number\n", numberTwo, numberOne );
  }

  return 0;
}
