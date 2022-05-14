#include <stdio.h>

int main()
{
  int a = 1;
  int b = 1;
  printf("%d %d ", a, b);
  int c = 0;
  int num = 10;
  int i = 0;
  while (i < num)
  {
    c = a + b;
    printf("%d ", c);
    b = a;
    a = c;
    i++;
  }

  return 0;
}