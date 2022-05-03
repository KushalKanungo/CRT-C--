#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int i = 1;
  while (i <= 10)
  {
    printf("%d X %d = %d \n", num, i, num * i);
    i++;
  }
  return 0;
}