#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char name[50] = "Hello!! My name is Kushal";
  char *p;
  p = (char *)malloc(100 * sizeof(char));
  printf("Pointer %ld \n", sizeof(p));
  printf("Name %ld \n", sizeof(name));
  printf("Name %s \n", name);
  if (p == NULL)
  {
    printf("error");
  }
  else
  {
    strcpy(p, "Create a C Programm");
  }
  printf("Pointer %ld \n", sizeof(p));
  printf("Name %s", p);
  return 0;
}