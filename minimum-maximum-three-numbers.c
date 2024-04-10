#include <stdio.h>

int main(int argc, char *argv[])
{
  int numberOne;
  int numberTwo;
  int numberThree;
  int maximum;
  int minimum;

  printf("Input first number: \n");
  scanf("%d", &numberOne);
  printf("Input second number: \n");
  scanf("%d", &numberTwo);
  printf("Input third number: \n");
  scanf("%d", &numberThree);

  maximum = numberOne;
  minimum = numberTwo;

  if (numberTwo > numberOne) {
    maximum = numberTwo;
    minimum = numberOne;
  }
  if (numberThree > maximum) {
    maximum = numberThree;
  }
  if (minimum > numberThree) {
    minimum = numberThree;
  }

  printf("The maximum number is %d and the minimum number is %d\n",maximum, minimum );
    
  return 0;
}
