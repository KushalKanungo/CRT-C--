#include <stdio.h>
#include <string.h>

struct Employee
{
  int empid;
  char name[15];
  float salary;
} emp2;

int main()
{
  struct Employee emp1 = {101, "Kushal", 90000};

  emp2.empid = 102;
  emp2.salary = 100000;
  strcpy(emp2.name, "Himanshu");

  printf("Employee ID :%d\t", emp1.empid);
  printf("Employee Name :%s\t", emp1.name);
  printf("Employee Salary :%.2f\n", emp1.salary);

  printf("Employee ID :%d\t", emp2.empid);
  printf("Employee Name :%s\t", emp2.name);
  printf("Employee Salary :%.2f\n", emp2.salary);
  return 0;
}