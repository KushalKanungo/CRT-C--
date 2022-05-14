#include <stdio.h>

void swap(float a, float b)
{

  a = a * b;
  b = a / b;
  a = a / b;
  return;
}

int main()
{
  float a, b;
  scanf("%f %f", &a, &b);
  swap(a, b);
  printf("a = %.2f \n", a);
  printf("b = %.2f \n", b);
  return 0;
}
