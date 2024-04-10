#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int x;

  printf("Input number\n");
  scanf("%d", &x);
  printf("%d power 2 is: %d \n",x, (int)pow(x, 2) );
  printf("%d power 4 is: %d \n",x, (int)pow(x, 4) );
  printf("%d power 6 is: %d \n",x, (int)pow(x, 6) );
  printf("%d power 8 is: %d \n",x, (int)pow(x, 8) );
  
  return 0;
}
