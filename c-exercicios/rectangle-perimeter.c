#include <stdio.h>

int Main() {
  double width;
  double height;
  double perimeter;

  printf("Type of width of rectangle: \n");
  scanf("%lf", &width);
  printf("Type of height of rectangle: \n");
  scanf("%lf", &height);
  perimeter = (height*width)*2;
  printf("Perimeter of the rectangle is: %.2f\n",perimeter);
  return 0;
}
