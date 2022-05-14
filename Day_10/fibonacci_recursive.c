#include <stdio.h>
int fibbonacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return (fibbonacci(n - 1) + fibbonacci(n - 2));
  }
}

int main()
{
  // printf("%d ", fibbonacci(0));
  printf("%d ", fibbonacci(1));
  printf("%d ", fibbonacci(2));
  printf("%d ", fibbonacci(3));
  printf("%d ", fibbonacci(4));
  printf("%d ", fibbonacci(5));
}
