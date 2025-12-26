#include <stdio.h>

int Main() {
  double celsius;
  double fahrenheit;
  double cel_to_fah;
  double fah_to_cel;

  printf("Type temperature in celsius: \n");
  scanf("%lf", &celsius);
  cel_to_fah = celsius * 1.8 + 32;
  printf("%.1f Celsius to Fahrenheit is: %.1f\n", celsius, cel_to_fah);
  
  printf("Type temperature in Fahrenheit: \n");
  scanf("%lf", &fahrenheit);
  fah_to_cel = (fahrenheit - 32) / 1.8;
  printf("%.1f Fahrenheit to Celsius is: %.1f\n", fahrenheit, fah_to_cel);
  
  return 0;
}
