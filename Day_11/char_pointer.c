#include <stdio.h>
#include <stdlib.h>
int main()
{
  char *ptr;
  ptr = (char *)malloc(10 * sizeof(char));
  for (int i = 0; i < 4; i++)
  {
    scanf("%c", &ptr[i]);
  }
  printf("Array is ");
  for (int i = 0; i < 4; i++)
  {
    printf("%c ", ptr[i]);
  }
  return 0;
}