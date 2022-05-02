#include <stdio.h>
int facto(int num)
{
  if (num == 1)
  {
    return 1;
  }
  return num * facto(num - 1);
}

int main()
{
  printf("%d \n", facto(5));
}