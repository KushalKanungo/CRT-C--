#include <stdio.h>
#include <string.h>

int main()
{
  int x = 10, y = 9;
  printf("Address of X :%c \n", &x);
  printf("Address of X :%p \n", &x); // hexavalue
  printf("Address of X :%d \n", &x);
  printf("Address of X :%f \n", &x);
  printf("Address of X :%s \n", &x);
  return 0;
}