#include <stdio.h>

int Main()
{
  float number_a = 3.5;
  float number_b = 5.6;
  float number_hold;

  printf("Number A is %.2f\n", number_a);
  printf("Number B is %.2f\n", number_b);
  number_hold = number_a;
  number_a = number_b;
  number_b = number_hold;
  printf("After swap is: \n");
  printf("Number A is %.2f\n", number_a);
  printf("Number B is %.2f\n", number_b);
  
  return 0;
}
