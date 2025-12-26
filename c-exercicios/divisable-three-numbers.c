#include <stdio.h>
#include <stdlib.h>

int Main()
{
  int number_tne;
  int number_two;
  int number_three;

  printf("Input first number\n");
  scanf("%d", &number_one);
  printf("Input second number\n");
  scanf("%d", &number_two);
  printf("Input third number\n");
  scanf("%d", &number_three);
  
  if (((number_one % number_two == 0) || (number_two % number_one == 0)) && ((number_two % number_three == 0) || (number_three % number_two ==0)) && ((number_one % number_three == 0) || (number_three % number_one == 0))) {
    printf("Divisible\n");
  } else {
    printf("Not divisible\n");
  }

  if (number_one == 0 || number_two == 0 || number_three == 0) {
    printf("Not possible to divide\n");
  }
  
  return 0;
}
