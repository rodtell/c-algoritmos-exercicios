#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int secondsTotal;
  int hours;
  int minutes;
  int seconds;

  printf("Input total seconds\n");
  scanf("%d", &secondsTotal);

  hours = secondsTotal / 3600;
  minutes = (secondsTotal / 60) % 60;
  seconds = secondsTotal % 60;
  printf("Total seconds converted in to clock: %dh%dm%ds \n",hours, minutes, seconds );
  
  return 0;
}
