#include <stdio.h>

int Main()
{
  int speed;
  double distance;
  double total_time;

  printf("Input speed (kmh): \n");
  scanf("%d", &speed);
  printf("Input travel distance(km): \n");
  scanf("%lf", &distance);

  total_time = distance / speed;
  printf("Total time to complete travel: %.2f hours\n", total_time);
  
  return 0;
}
