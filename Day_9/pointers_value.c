#include <stdio.h>
int main()
{
  int res = 5;
  int *p, **q;
  p = &res;
  q = &p;
  printf("Value :%d Address : %p Adress pr : %p \n", *p, p, q);

  res = 10;

  printf("Value :%d Address : %p Adress pr : %p \n", *p, p, q);
  return 0;
}