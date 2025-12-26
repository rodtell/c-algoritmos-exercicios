#include <stdio.h>

int Main()
{
  int number_one;
  int number_two;
  int number_three;
  int maximum;
  int minimum;

  printf("Input first number: \n");
  scanf("%d", &number_one);
  printf("Input second number: \n");
  scanf("%d", &number_two);
  printf("Input third number: \n");
  scanf("%d", &number_three);

  maximum = number_one;
  minimum = number_two;

  if (number_two > number_one) {
    maximum = number_two;
    minimum = number_one;
  }
  if (number_three > maximum) {
    maximum = number_three;
  }
  if (minimum > number_three) {
    minimum = number_three;
  }

  printf("The maximum number is %d and the minimum number is %d\n", maximum, minimum);
    
  return 0;
}
