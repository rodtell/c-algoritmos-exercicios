#include <stdio.h>

int main(int argc, char *argv[])
{
  int number = 0;
  int sum = 0;

  printf("Input number\n");
  scanf("%d", &number);

  for (int i = 1; i <= number; ++i) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      sum += i;
    }
  }
  printf("%d\n", sum);

  return 0;
}
