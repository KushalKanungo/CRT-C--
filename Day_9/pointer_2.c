// Hexadecimal --> 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f

#include <stdio.h>
int main()
{
  int arr[3] = {1, 2, 3};
  int *p;
  p = arr;
  for (int i = 0; i < 3; i++)
  {
    printf("Value : %d ", *p);
    printf("Address : %p ", p); // address will increase by 4 bytes because it is integer
    printf("%x \n", &arr[i]);
    p++;
  }

  return 0;
}