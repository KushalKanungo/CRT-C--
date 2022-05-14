#include <stdio.h>

void add_multidime_arr(int arr1[3][3], int arr2[3][3])
{
  int sum_arr[3][3];
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      sum_arr[row][col] = arr1[row][col] + arr2[row][col];
      printf("%d\t", sum_arr[row][col]); // to print array
    }
    printf("\n"); // to change line after a row
  }
  return;
}

int main()
{
  int matrix1[3][3] = {{1, 2, 4}, {3, 2, 1}, {5, 6, 4}};
  int matrix2[3][3] = {{1, 2, 4}, {3, 2, 1}, {5, 6, 4}};
  add_multidime_arr(matrix1, matrix2);
  return 0;
}