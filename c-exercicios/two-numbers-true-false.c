#include <stdio.h>

int Main() {
  int number_one;
  int number_two;

  printf("Input first number\n");
  scanf("%d", &number_one);
  printf("Input second number\n");
  scanf("%d", &number_two);

  if (number_one == number_two) {
    printf("True\n");
  } else {
    printf("False\n");
  }

  return 0;
}
