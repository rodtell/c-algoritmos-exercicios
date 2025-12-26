#include <stdio.h>

int Main() {
  int number_one;
  int number_two;
  int number_three;

  printf("Input number one\n");
  scanf("%d", &number_one);
  printf("Input number two\n");
  scanf("%d", &number_two);
  printf("Input number three\n");
  scanf("%d", &number_three);

  if (number_one == number_two && number_two == number_three) {
    printf("Equal\n");
  } else {
    printf("not Equal\n");
  }

  return 0;
}
