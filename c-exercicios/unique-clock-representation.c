#include <stdio.h>
#include <stdlib.h>

int main() {
  int seconds_total;
  int hours;
  int minutes;
  int seconds;

  printf("Input total seconds\n");
  scanf("%d", &seconds_total);

  hours = seconds_total / 3600;
  minutes = (seconds_total / 60) % 60;
  seconds = seconds_total % 60;
  printf("Total seconds converted in to clock: %dh%dm%ds \n", hours, minutes, seconds);
  
  return 0;
}
