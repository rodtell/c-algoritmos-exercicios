#include <stdio.h>
#include <math.h>

int Main() {
  int x_one;
  int y_one;
  int x_two;
  int y_two;
  int distance;

  printf("Input x1: \n");
  scanf("%d", &x_one);
  printf("Input y1: \n");
  scanf("%d", &y_one);
  printf("Input x2: \n");
  scanf("%d", &x_two);
  printf("Input y2: \n");
  scanf("%d", &y_two);

  distance = sqrt(pow((x_one - x_two), 2) + pow((y_one - y_two), 2));
  printf("The distance between two points is: %d\n", distance);
  
  return 0;
}
