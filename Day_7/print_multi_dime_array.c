#include <stdio.h>
void print_multidime_arr(int arr[3][3])
{
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      printf("%d\t", arr[row][col]);
    }
    printf("\n");
  }
}

int main()
{
  int multi_arr[3][3] = {{50, 10, 34}, {20, 25, 56}, {34, 45, 67}}; //[row] [col]
  print_multidime_arr(multi_arr);
  return 0;
}