// Switch is used to check single value
// break; is used to stop the flow of switch case
// default is like "else" in (if else)

#include <stdio.h>
int main()
{
  int a = 10;
  switch (a)
  {
  case 1: // checking if  a is eqaul to 1
    printf("a is 1");
    break;
  case 2: // checking if  a is eqaul to 2
    printf("a is 2");
    break; // break as soon as condtions true
  case 3:
    printf("a is 3");
    break;
  case 4:
    printf("a is 4");
    break;
  case 5:
    printf("a is 5");
    break;
  case 6:
    printf("a is 6");
    break;
  case 7:
    printf("a is 7");
    break;
  case 8:
    printf("a is 8");
    break;
  case 9:
    printf("a is 9");
    break;
  case 10:
    printf("a is 10");
    break;
  default: // is is like else condition if all above condition are false
    printf("All are wrong");
  }
  return 0;
}