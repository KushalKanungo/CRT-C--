#include <stdio.h>

void print_multi_arr(int row_len, int col_len, int arr[row_len][col_len])
{
  for (int row = 0; row < row_len; row++)
  {
    for (int col = 0; col < col_len; col++)
    {
      printf("%d\t", arr[row][col]);
    }
    printf("\n");
  }
}

int main()
{

  int row_len1, col_len1, row_len2, col_len2;
  printf("Enter row and col of First Matrix :");
  scanf("%d %d", &row_len1, &col_len1);

  int A[row_len1][col_len1]; //[row] [col]
  // To take input
  for (int row = 0; row < row_len1; row++)
  {
    printf("Row %d \n", row);
    for (int col = 0; col < col_len1; col++)
    {
      int ins;
      scanf("%d", &ins);
      A[row][col] = ins;
    }
  }

  printf("Enter row and col OF 2 Matrix :");
  scanf("%d %d", &row_len2, &col_len2);

  int B[row_len2][col_len2]; //[row] [col]
  // To take input
  for (int row = 0; row < row_len2; row++)
  {
    printf("Row %d \n", row);
    for (int col = 0; col < col_len2; col++)
    {
      int ins;
      scanf("%d", &ins);
      B[row][col] = ins;
    }
  }
  int row_C, col_C;

  // (row_len1 >= row_len2) ? row_C = row_len1 : row_C = row_len2;
  // (col_len1 >= col_len2) ? col_C = col_len1 : col_C = col_len2;

  if (row_len1 >= row_len2)
  {
    row_C = row_len1;
  }
  else
  {
    row_C = row_len2;
  }

  if (col_len1 >= col_len2)
  {
    col_C = col_len1;
  }
  else
  {
    col_C = col_len2;
  }

  int C[row_C][col_C];

  // add
  for (int row = 0; row < row_C; row++)
  {
    for (int col = 0; col < col_C; col++)
    {
      C[row][col] = A[row][col] + B[row][col];
    }
  }
  // print
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      printf("%d\t", C[row][col]);
    }
    printf("\n");
  }

  return 0;
}