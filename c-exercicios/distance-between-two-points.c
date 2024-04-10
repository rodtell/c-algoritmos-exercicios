#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int xOne;
  int yOne;
  int xTwo;
  int yTwo;
  int distance;

  printf("Input x1: \n");
  scanf("%d", &xOne);
  printf("Input y1: \n");
  scanf("%d", &yOne);
  printf("Input x2: \n");
  scanf("%d", &xTwo);
  printf("Input y2: \n");
  scanf("%d", &yTwo);

  distance = sqrt(pow((xOne - xTwo), 2) + pow((yOne - yTwo), 2));
  printf("The distance between two points is: %d\n",distance );
  
  return 0;
}
