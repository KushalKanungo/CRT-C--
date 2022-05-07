#include <stdio.h>
int main()
{
  char name[6] = "Kushal";
  printf("%s\n", name);
  for (int i = 0; i < 6; i++)
  {
    printf("%c", name[i]);
  }
  printf("\n");
  printf("Size of array : %d \n", sizeof(name));
  return 0;
}