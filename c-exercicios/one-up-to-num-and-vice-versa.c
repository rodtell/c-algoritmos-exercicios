#include <stdio.h>

int Main() {
  int number;

  printf("Type number:\n");
  scanf("%d", &number);

  printf("From 1 up to number %d\n", number);
  for (int i = 1; i <= number; ++i) {
    printf("%d\n", i);
  }

  printf("From number %d to 1\n", number);
  for (int i = number; i >= 1; --i) {
    printf("%d\n", i);
  }

  return 0;
}
