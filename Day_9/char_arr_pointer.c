#include <stdio.h>
int main()
{
  char name[6] = {'k', 'u', 's', 'h', 'a', 'l'};
  char *p = name;
  for (int i = 0; i < 6; i++)
  {
    printf("Value :%c \t", *p);
    printf("Address :%p \n", p++);
  }
  return 0;
}