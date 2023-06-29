#include <stdio.h>

int main() {
  int emp_no, count = 0;
  float salary;

  printf("Enter the Employee no and the Basic Salary of the Employees\n");
  printf("Enter -999 to end the input\n");

  while (1) {
    printf("Enter Employee no: ");
    scanf("%d", &emp_no);

    if (emp_no == -999) {
      break;
    }

    printf("Enter Basic Salary: ");
    scanf("%f", &salary);

    if (salary >= 5000) {
      count++;
    }
  }

  printf("The number of Employees whose Basic Salary is >=5000 is: %d\n", count);

  return 0;
}
