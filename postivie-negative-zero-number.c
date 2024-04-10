#include <stdio.h>

int main(int argc, char *argv[])
{
  int number;

  printf("Input number\n");
  scanf("%d", &number);

  if (number > 0) {
    printf("1\n");
  } else if (number < 0) {
    printf("-1\n");
  } else {
    printf("0\n");
  }

  return 0;
}
