#include <stdio.h>

int main()
{
  int arr[5] = {5, 8, 7, 3, 6};
  for (int x = 0; x < 5; x++)
  {
    printf("Index[%d] = %d \n", x, arr[x]);
  }
  return 0;
}