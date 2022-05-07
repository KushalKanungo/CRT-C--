#include <stdio.h>
int main()
{

  printf("Enter a name : ");
  char name[10];
  scanf("%s", &name);
  printf("Your name is %s \n", name);
  char college[5] = {'J', 'E', 'C', 'R', 'C'};
  printf("College %s \n", college);
  return 0;
}