#include <stdio.h>

int main(int argc, char *argv[])
{
  float numberA = 3.5;
  float numberB = 5.6;
  float numberHold;

  printf("Number A is %.2f\n",numberA );
  printf("Number B is %.2f\n",numberB );
  numberHold = numberA;
  numberA = numberB;
  numberB = numberHold;
  printf("After swap is: \n");
  printf("Number A is %.2f\n",numberA );
  printf("Number B is %.2f\n",numberB );
  
  return 0;
}
