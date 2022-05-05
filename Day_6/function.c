#include <stdio.h>
int add(int a, int b)
{
  return a + b;
}

int square(int a)
{
  // printf("%d \n");
  return a * a;
}

int square_print(int a)
{
  printf("%d \n", a * a);
  return 0;
}

int main()
{
  int c = add(5, 3); // storing value of function in  a variable
  printf("%d \n", c);
  printf("%d \n", square(9)); // directly printing return value
  square_print(10);           // only calling a function
  int return_value = square_print(10);
  printf("%d \n", return_value);
  return 0;
}