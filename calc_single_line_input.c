#include <stdio.h>
int main()
{
  int num1, num2;
  char oper;
  printf("Enter Query : ");
  scanf("%d %c %d", &num1, &oper, &num2);
  // printf("\n Num1 %d", num1);
  // printf("\n Num2 %d", num2);
  // printf("\n Operator %c", oper);

  if (oper == '*')
  {
    printf("%i %c %i = %i \n", num1, oper, num2, num1 * num2);
  }
  else if (oper == '/')
  {
    printf("%i %c %i = %i \n", num1, oper, num2, num1 / num2);
  }
  else if (oper == '-')
  {
    printf("%i %c %i = %i \n", num1, oper, num2, num1 - num2);
  }
  else if (oper == '%')
  {
    printf("%i %c %i = %i \n", num1, oper, num2, num1 % num2);
  }
}