#include <stdio.h>
int main()
{
  int num, left, right;
  scanf("%d", &num);
  left = num << 2;  // left shift
  right = num >> 2; // right shift
  printf("left : %d \n", left);
  printf("right : %d \n", right);
  return 0;
}