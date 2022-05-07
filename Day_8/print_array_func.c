#include <stdio.h>

void print_multi_arr(int arr[2][2])
{
  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      printf("%d\t", arr[row][col]);
    }
    printf("\n");
  }
}

int main()
{
  int array[2][2] = {{1, 2}, {2, 3}};
  print_multi_arr(array);
  return 0;
}