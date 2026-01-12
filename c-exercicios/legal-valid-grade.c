#include <stdio.h>

int main() {
  int grade;
  do {
    printf("Input grade: \n");
    scanf("%d", &grade);
    if ((grade < 0) || (grade > 100)) {
      printf("%d not valid grade\n", grade);
      break;
    } else {
      printf("%d is a valid grade\n", grade);      
    }
  } while ((grade > 0) && (grade < 100));
 
  return 0;
}
