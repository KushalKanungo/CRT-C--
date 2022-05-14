#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      printf("Not a prime");
      return 0;
    }
  }
  printf("Prime");
  return 0;
}