#include <stdio.h>

int Main() {
  int number;
  int table;
  int times;

  printf("Input number:\n");
  scanf("%d", &number);

  for (int i = 1; i <= 10; ++i) {
    table = number * i;
    times++;
    printf("multiplication of %d times %d is %d\n", number, times, table);
  }

  return 0;
}
