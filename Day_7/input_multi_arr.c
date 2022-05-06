#include <stdio.h>

int main()
{
  int row_len, col_len;
  printf("Enter row and col :");
  scanf("%d %d", &row_len, &col_len);

  int multi_arr[row_len][col_len]; //[row] [col]
  // To take input
  for (int row = 0; row < row_len; row++)
  {
    printf("Row %d \n", row);
    for (int col = 0; col < col_len; col++)
    {
      int ins;
      scanf("%d", &ins);
      multi_arr[row][col] = ins;
    }
  }

  // To Print
  for (int row = 0; row < row_len; row++)
  {
    for (int col = 0; col < col_len; col++)
    {
      printf("%d\t", multi_arr[row][col]);
    }
    printf("\n");
  }

  return 0;
}