#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int i = 0;
  do
  {
    i++;
    if (i == 15)
    {
      break;
    }
    printf("%d ", i);
  } while (i <= num);
  printf(" \n Loop Break");
  return 0;
}