#include <stdio.h>

int Main() {
  float number_one;
  float number_two;

  printf("Input first number: \n");
  scanf("%f", &number_one);
  printf("Input second number: \n");
  scanf("%f", &number_two);

  if (number_one > number_two) {
    printf("%.2f is the maximum number and %.2f is the minimum number\n", number_one, number_two);
  } else {
    printf("%.2f is the maximum number and %.2f is the minimum number\n", number_two, number_one);
  }

  return 0;
}
