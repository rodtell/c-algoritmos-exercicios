#include <stdio.h>

int Main() {
  int current_year;
  int user_age;
  printf("Type current year: \n");
  scanf("%d", &current_year);
  printf("Type your age: \n");
  scanf("%d", &user_age);
  printf("Your year of birth is: %d\n", current_year - user_age);
  return 0;
}
