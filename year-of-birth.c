#include <stdio.h>

int main(int argc, char *argv[])
{
  int currentYear;
  int userAge;
  printf("Type current year: \n");
  scanf("%d", &currentYear);
  printf("Type your age: \n");
  scanf("%d", &userAge);
  printf("Your year of birth is: %d\n", currentYear-userAge );
  return 0;
}
