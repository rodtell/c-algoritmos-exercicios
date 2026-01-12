#include <stdio.h>

int main() {
  double salary;
  double hours_worked;
  double total_salary;

  printf("Input salary per hour: \n");
  scanf("%lf", &salary);
  printf("Input hours worked: \n");
  scanf("%lf", &hours_worked);

  total_salary = salary * hours_worked;
  printf("Total salary of employee is: %.2f\n", total_salary);
  
  return 0;
}
