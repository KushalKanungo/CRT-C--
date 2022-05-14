#include <stdio.h>
int main()
{
  int i = 1;
label:
  do
  {
    i++;
    if (i == 5)
    {
      goto label;
    }
    printf("%d \n", i * 5);
  } while (i <= 10);

  return 0;
}