#include <stdio.h>
void print_arr(int number[5])
{
  for (int x = 0; x < 5; x++)
  {
    printf("Index[%d] = %d \n", x, number[x]);
  }
  return;
}

int main()
{
  int numbers[5] = {1, 2, 3, 4, 5};
  print_arr(numbers);
  return 0;
}