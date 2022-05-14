#include <stdio.h>
#include <string.h>

int main()
{
  char name1[10];
  char name2[10];
  printf("Enter Name 1:");
  scanf("%s", &name1);
  printf("Enter Name 2:");
  scanf("%s", &name2);
  printf("Name 1 Length %d \n", strlen(name1)); // TO fnd length of a String
  printf("Name 2 Length %d \n", strlen(name2));
  printf("Names are : %s \n", strcmp(name1, name2) != 0 ? "Differet" : "Same"); // To Compare
  printf("Concat : %s \n", strcat(name1, name2));                               // To concat
  return 0;
}