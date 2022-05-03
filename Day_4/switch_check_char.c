#include <stdio.h>
int main()
{

  char b = 'A';
  switch (b)
  {
  case 'A':
    printf("A");
    break;

  case 'B':
    printf("B");
    break;

  default:
    printf("NO");
    break;
  }
  return 0;
}