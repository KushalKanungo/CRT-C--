// Recursion ----> Function calling it self
#include <stdio.h>

int fact(int n)
{
  if (n == 1 || n == 0)
  {
    return 1;
  }
  return n * fact(n - 1);
}

int main()
{
  printf("%d \n", fact(5));
  return 0;
}