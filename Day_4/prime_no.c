#include <stdio.h>
int main()
{
  int num;
  printf("Enter a Number :");
  scanf("%d", &num);
  for (int i = 2; i <= num; i++)
  {
    int check = 0;
    for (int j = 2; j <= (i / 2); j++)
    {
      if (i % j == 0)
      {
        check = 1;
        break;
      }
    }

    if (check == 0) // check will be zero only if didn't gave remainder 0
    {
      printf("%d, ", i);
    }
  }
}