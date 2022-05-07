#include <stdio.h>
int global_var = 23;

void func()
{
  int x = 5;
  // scanf("%d", &x);
  // printf("%d \n", x);
  static int y = 10;
  x = x + 5;
  y = y + 5;
  printf("X = %d Y = %d\n", x, y);
}

int main()
{
  // printf("%d\n", global_var);
  func();
  func();
  func();
  return 0;
}
