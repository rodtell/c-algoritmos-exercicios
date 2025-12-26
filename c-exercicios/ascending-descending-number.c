#include <stdio.h>

int Main()
{
  int number;
  int units;
  int tens;
  int hundreds;

  printf("Input number:\n");
  scanf("%d", &number);

  hundreds = number / 100;
  tens = (number / 10) % 10;
  units = number % 10;

  if (hundreds < tens && tens < units) {
    printf("The number is ascending\n");
  } else {
    printf("The number is not ascending\n");
  }

  return 0;
}
