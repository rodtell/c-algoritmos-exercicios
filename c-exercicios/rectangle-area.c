#include <stdio.h>

int main() {
  double width;
  double height;
  double area;

  printf("Type of width of rectangle: \n");
  scanf("%lf", &width);
  printf("Type of height of rectangle: \n");
  scanf("%lf", &height);
  area = height*width;
  printf("Area of the rectangle is: %.2f\n",area);
  return 0;
}
