
#include <stdio.h>
/*
(a) Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.

salary allowance is (40 / 100) of basic salary
House allowance is (20 / 1000) of basic salary
*/

int main(void)
{
  float salary, salaryAllowance, houseAllowance, grossSalary;

  printf("Enter your basic salary\n");
  scanf("%f", &salary);

  salaryAllowance = 40.0 / 100.0 * salary;

  houseAllowance = 20.0 / 100.0 * salary;

  grossSalary = salaryAllowance + houseAllowance + salary;
  // grossSalary = 20 / 10;
  printf("Gross salary: %.2f", grossSalary);

  return 0;
}
