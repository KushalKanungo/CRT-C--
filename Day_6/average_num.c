#include <stdio.h>

float average()
{
  int times;
  float sum = 0;
  printf("Enter how many numbers :");
  scanf("%d", &times);
  for (int i = 1; i <= times; i++)
  {
    int instance;
    scanf("%d", &instance);
    sum = sum + instance;
  }
  return sum / times;
}

int main() // code//code
{
  printf("Average is %.2f ", average());
  return 0;
}