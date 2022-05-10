#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *ptr;
  ptr = (int *)calloc(3, sizeof(int));
  for (int i = 0; i < 3; i++)
  {
    scanf("%d", &ptr[i]);
  }

  printf("Array is ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", ptr[i]);
  }

  ptr = realloc(ptr, 5 * sizeof(int));

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &ptr[i]);
  }

  printf("Array is ");
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", ptr[i]);
  }

  free(ptr);
  return 0;
}