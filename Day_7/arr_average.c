#include <stdio.h>
int main()
{
  int len;
  printf("Enter length of array :");
  scanf("%d", &len);
  float arr[len - 1];
  for (int i = 0; i < len; i++)
  {
    float ins;
    scanf("%f", &ins);
    arr[i] = ins;
  }
  float sum = 0;
  for (int x = 0; x < len; x++)
  {
    // printf("Index[%d] = %d \n", x, arr[x]);
    sum = sum + arr[x];
  }
  printf("Average %.2f", sum / len);
  return 0;
}
