#include <stdio.h>
int main()
{
  int apti, gd, pi;
  scanf("%d %d %d", &apti, &gd, &pi);
  if (apti >= 60)
  {
    if (gd >= 60)
    {
      if (pi >= 80)
      {
        printf("You are placed \n");
      }
      else
      {
        printf("Your are out \n");
      }
    }
    else
    {
      printf("Your are out \n");
    }
  }
  else
  {
    printf("Your are out \n");
  }
  return 0;
}