#include <stdio.h>
int main()
{
  int num1, num2;
  char oper;
  scanf("%d %d ", &num1, &num2);
  // printf("Enter Operator \n");
  scanf("%c", &oper);

  if (oper == '*')
  {
    printf("%i", num1 * num2);
  }
  else if (oper == '/')
  {
    printf("%i", num1 / num2);
  }
  else if (oper == '-')
  {
    printf("%i", num1 - num2);
  }
  else if (oper == '%')
  {
    printf("%i", num1 % num2);
  }
}