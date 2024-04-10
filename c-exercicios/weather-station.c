#include <stdio.h>

int main(int argc, char *argv[])
{
  double celsius;
  double fahrenheit;
  double celToFah;
  double fahToCel;

  printf("Type temperature in celsius: \n");
  scanf("%lf", &celsius);
  celToFah = celsius * 1.8 + 32;
  printf("%.1f Celsius to Fahrenheit is: %.1f\n", celsius, celToFah);
  
  printf("Type temperature in Fahrenheit: \n");
  scanf("%lf", &fahrenheit);
  fahToCel = (fahrenheit - 32) / 1.8;
  printf("%.1f Fahrenheit to Celsius is: %.1f\n", fahrenheit, fahToCel );
  
  return 0;
}
