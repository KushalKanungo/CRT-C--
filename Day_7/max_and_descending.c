#include <stdio.h>

int maximum(int x, int y, int z)
{
  if (x >= y && x >= z)
  {
    printf(" Biggest %d", x);
  }
  else if (y >= x && x >= z)
  {
    printf(" Biggest %d", y);
  }
  else
  {
    printf("\n Biggest %d", z);
  }
}

int desc(int x, int y, int z)
{
  if (x >= y && x >= z)
  {
    printf("%d ", x);
    if (y >= z)
    {
      printf(" %d %d", y, z);
    }
    else
    {
      printf(" %d %d", z, y);
    }
  }
  else if (y >= x && x >= z)
  {
    printf(" %d", y);
    if (x >= z)
    {
      printf(" %d %d", x, z);
    }
    else
    {
      printf(" %d %d", z, x);
    }
  }
  else
  {
    printf("\n %d ", z);
    if (x >= y)
    {
      printf(" %d %d", x, y);
    }
    else
    {
      printf(" %d %d", y, x);
    }
  }
}

int main()
{
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);
  maximum(x, y, z);
  desc(x, y, z);
  return 0;
}