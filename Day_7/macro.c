#include <stdio.h>
#define PI 3.14
#define PRINT         \
  \         
  printf("PRINT \n"); \
  printf("next line");
#define MAX(a, b) ((a > b) ? a : b)

int main()
{
  printf("PI value %.2f \n", PI);
  PRINT // Multi line macro
#define PI 2
      printf("%d \n", PI);
  printf(" Max %d \n", MAX(2, 3));
  printf("TIME %s \n", __TIME__);
  printf("DATE %s \n", __DATE__);
  printf("FILE %s \n", __FILE__);
  return 0;
}