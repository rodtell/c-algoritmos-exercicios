#include <stdio.h>

int main(int argc, char *argv[]) {

  int number;
  int sum;

  printf("Type a number:\n");
  scanf("%d", &number);

  for (int i = 1; i <= number; ++i) {
    sum += i;
    printf("%d\n", sum);
  }
  
  return 0;
}
