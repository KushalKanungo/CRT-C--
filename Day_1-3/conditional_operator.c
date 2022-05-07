#include <stdio.h>
int main()
{
  int a = 10;
  int b = 5;

  printf("%s \n", a > b ? "True" : "False");
  printf("%s \n", a < b ? "True" : "False");
  printf("%s \n", a >= b ? "True" : "False");
  printf("%s \n", a <= b ? "True" : "False");
  printf("%s \n", a == b ? "True" : "False");
  printf("%s \n", a != b ? "True" : "False");

  return 0;
}