// It executes atleast once because condition is checks after the loop block
//

// Syntax ---->
#include <stdio.h>
int main()
{
  int i = 1;
  do
  {
    printf("Hello World \n");
    i++;
  } while (i < 0);
  return 0;
}

// This program will print'Hello World'
// Although condition is false