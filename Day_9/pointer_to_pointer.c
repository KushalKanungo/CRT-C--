#include <stdio.h>
int main()
{
  int res = 10;
  int *p;   // pointer
  int **pr; // pointer to pointer
  p = &res;
  pr = &p;
  printf("Pointer P: \t%p \n", p);
  printf("Pointer Pr: \t%p \n", pr);
  return 0;
}