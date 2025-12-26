#include <stdio.h>

int Main()
{
  int number;

  printf("Input number\n");
  scanf("%d", &number);

  number *= 2;

  for (int i = 2; i <= number; ++i) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
  }
  
  return 0;
}
