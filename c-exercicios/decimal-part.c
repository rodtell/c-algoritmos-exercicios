#include <stdio.h>

int main(int argc, char *argv[])
{
  float data;
  
  printf("Input data: \n");
  scanf("%f", &data);
  printf("Only decimal part of the number is: %.2f\n",data - (int)data );
  
  return 0;
}
