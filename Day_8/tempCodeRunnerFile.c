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