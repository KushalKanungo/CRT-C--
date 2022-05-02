#include <stdio.h>
int main()
{
  int marks;
  scanf("%i", &marks);

  if (marks >= 90)
  {
    printf(" \n Grade is A+");
  }
  else if (marks >= 70)
  {
    printf(" \n Grade is A");
  }
  else if (marks >= 60)
  {
    printf(" \n Grade is B");
  }
  else if (marks >= 50)
  {
    printf(" \n Grade is C");
  }
  else
  {
    printf("\n Ghar Jao");
  }
}