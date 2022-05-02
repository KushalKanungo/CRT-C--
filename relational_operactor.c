#include <stdio.h>
int main()
{
  int a = 10, b = 20;
  printf("%d \n", (a < 5) && (b < 5));
  printf("%d \n", (a < 5) || (b < 5));
  printf("%d \n", !(a < 5));
}