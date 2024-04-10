#include <stdio.h>

int main(int argc, char *argv[])
{
  double salary;
  double hoursWorked;
  double totalSalary;

  printf("Input salary per hour: \n");
  scanf("%lf", &salary);
  printf("Input hours worked: \n");
  scanf("%lf", &hoursWorked);

  totalSalary = salary * hoursWorked;
  printf("Total salary of employee is: %.2f\n",totalSalary );
  
  return 0;
}
