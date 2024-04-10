#include <stdio.h>

int main(int argc, char *argv[])
{
  int firstNumber;
  int secondNumber;
  char operation;

  printf("Input first number: \n" );
  scanf("%d", &firstNumber);
  printf("Input second number: \n" );
  scanf("%d", &secondNumber);
  printf("Select operation '+' '-' '*' '/' '%%' \n");
  getchar();
  scanf("%c", &operation);

  switch (operation) {
  case '+': {
    printf("The sum of %d and %d is: %d \n",firstNumber, secondNumber, firstNumber+secondNumber );
    break;
  }
  case '-': {
    printf("The subtraction of %d and %d is: %d \n",firstNumber, secondNumber, firstNumber-secondNumber );
    break;
  }
  case '*': {
    printf("The multiplication of %d and %d is: %d \n",firstNumber, secondNumber, firstNumber*secondNumber );
    break;
  }

  case '/': {
    printf("The division of %d and %d is: %d \n",firstNumber, secondNumber, firstNumber/secondNumber );
    break;
  }
  case '%': {
    printf("The remainer of %d and %d is: %d \n",firstNumber, secondNumber, firstNumber%secondNumber );
    break;
  }
  default:
    break;
  }

  return 0;
}
