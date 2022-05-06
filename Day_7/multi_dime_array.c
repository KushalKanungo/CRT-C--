#include <stdio.h>

int main()
{
  int multi_arr[2][2] = {{50, 10}, {20, 25}}; //[row] [col]
  int row_len = 2, col_len = 2;
  for (int row = 0; row < row_len; row++)
  {
    for (int col = 0; col < col_len; col++)
    {
      printf("%d    ", multi_arr[row][col]);
    }
    printf("\n");
  }
  return 0;
}