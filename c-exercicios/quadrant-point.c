#include <stdio.h>
#include <stdlib.h>

int Main()
{
  int x_value;
  int y_value;

  printf("Input value of x\n");
  scanf("%d", &x_value);
  printf("Input value of y\n");
  scanf("%d", &y_value);

  if (x_value >= 0 && y_value >=0) {
    printf("1st quadrant\n");
  } else if (x_value < 0 && y_value >=0) {
    printf("2nd quadrant\n");
  } else if (x_value < 0 && y_value < 0) {
    printf("3rd quadrant\n");
  } else {
    printf("4th quadrant\n");
  }

  return 0;
}
