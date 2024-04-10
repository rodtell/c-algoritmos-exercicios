#include <stdio.h>

int main(int argc, char *argv[])
{
  int speed;
  double distance;
  double totalTime;

  printf("Input speed (kmh): \n");
  scanf("%d", &speed);
  printf("Input travel distance(km): \n");
  scanf("%lf", &distance);

  totalTime = distance / speed;
  printf("Total time to complete travel: %.2f hours\n",totalTime );
  
  return 0;
}
