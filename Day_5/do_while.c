#include <stdio.h>
int main()
{
  int i = 2;
  int times = 1;
  do
  {
    printf("%d ", i);
    i += 2;
    times++;

  } while (times <= 20);
  return 0;
}