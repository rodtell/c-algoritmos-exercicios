#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int numberOne;
  int numberTwo;
  int numberThree;

  printf("Input first number\n");
  scanf("%d", &numberOne);
  printf("Input second number\n");
  scanf("%d", &numberTwo);
  printf("Input third number\n");
  scanf("%d", &numberThree);
  
  if (((numberOne % numberTwo == 0) || (numberTwo % numberOne == 0)) && ((numberTwo % numberThree == 0) || (numberThree % numberTwo ==0)) && ((numberOne % numberThree == 0) || (numberThree % numberOne == 0))) {
    printf("Divisible\n");
  } else {
    printf("Not divisible\n");
  }

  if (numberOne == 0 || numberTwo == 0 || numberThree == 0) {
    printf("Not possible to divide\n");
  }
  
  return 0;
}
