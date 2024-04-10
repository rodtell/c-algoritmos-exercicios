#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int xValue;
  int yValue;

  printf("Input value of x\n");
  scanf("%d", &xValue);
  printf("Input value of y\n");
  scanf("%d", &yValue);

  if (xValue >= 0 && yValue >=0) {
    printf("1st quadrant\n");
  } else if (xValue < 0 && yValue >=0) {
    printf("2nd quadrant\n");
  } else if (xValue < 0 && yValue < 0) {
    printf("3rd quadrant\n");
  } else {
    printf("4th quadrant\n");
  }

  return 0;
}
