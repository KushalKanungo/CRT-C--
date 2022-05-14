#include <stdio.h>
int main()
{
  int arr[3] = {1, 2, 3};
  int *p = &arr[2];
  for (int i = 2; i >= 0; i--)
  {
    printf("Value :%d \t", *p);
    printf("Address :%p \n", p--);
  }
  return 0;
}