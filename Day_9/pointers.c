// Pointers
//  --> Null Pointer      ==> int *x = NULL
//  --> Dangling Pointers ==> store deleted memory location
//  --> Wild Pointer      ==>

#include <stdio.h>
int main()
{
  int x = 10;
  int *p, *q;
  int normal;
  int arr[5] = {1, 2, 3, 4, 5};
  p = &x;
  q = arr;
  printf("%d \n", *p);               // It will print value of x (p is pointing x)
  printf("Address of X : %p \n", p); // It will address of x
  printf("Address of Array  : %p \n", q);
  printf("Size of Array : %d \n", sizeof(arr));
  for (int i = 0; i < 5; i++)
  {
    int *r = &arr[i];
    printf("Address of Array : %p \n", r);
    printf("Value of Array : %d \n", *r);
  }

  return 0;
}