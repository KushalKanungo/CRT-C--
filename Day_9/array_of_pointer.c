#include <stdio.h>
int main()
{
  int arr[3] = {1, 2, 3};
  int *p[3];
  for (int i = 0; i < 3; i++) // To create array of pointers
  {
    p[i] = &arr[i]; // To
  }
  for (int i = 0; i < 3; i++) // To print address and values
  {
    printf("Value %d\t \t", *p[i]);
    printf("Pointer Address %p\n", p[i]);
  }
  return 0;
}
