#include <stdio.h>

int main() {
  int first_number;
  int second_number;
  char operation;

  printf("Input first number: \n");
  scanf("%d", &first_number);
  printf("Input second number: \n");
  scanf("%d", &second_number);
  printf("Select operation '+' '-' '*' '/' '%%' \n");
  getchar();
  scanf("%c", &operation);

  switch (operation) {
  case '+': {
    printf("The sum of %d and %d is: %d \n", first_number, second_number, first_number + second_number);
    break;
  }
  case '-': {
    printf("The subtraction of %d and %d is: %d \n", first_number, second_number, first_number - second_number);
    break;
  }
  case '*': {
    printf("The multiplication of %d and %d is: %d \n", first_number, second_number, first_number * second_number);
    break;
  }

  case '/': {
    printf("The division of %d and %d is: %d \n", first_number, second_number, first_number / second_number);
    break;
  }
  case '%': {
    printf("The remainer of %d and %d is: %d \n", first_number, second_number, first_number % second_number);
    break;
  }
  default:
    break;
  }

  return 0;
}
