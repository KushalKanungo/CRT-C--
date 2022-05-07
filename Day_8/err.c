#include <stdio.h>
#include <string.h>
int main()
{
  char a[6] = "hello";
  char b[6] = "world";
  printf("%s", strcat(a, b));
  return 0;
}