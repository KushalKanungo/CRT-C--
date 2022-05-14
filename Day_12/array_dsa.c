#include <stdio.h>

int arr[100] = {'\0'};

void insert()
{
  int value;
  printf("Enter value you want to insert");
  scanf("%d", &value);
  for (int i = 0; i < 100; i++)
  {
    if (arr[i] == '\0')
    {
      arr[i] = value;
      arr[i + 1] = '\0';
      printf("%d inserted in array \n");
      return;
    }
  }
}

void search()
{
  int n;
  printf("Enter value to search :");
  scanf("%d", &n);
  for (int i = 0; i < 3; i++)
  {
    if (arr[i] == n)
    {
      printf("%d  is present at %d position \n", n, i + 1);
      return;
    }
  }
  printf("%d Not found \n", n);
}

void print_array()
{
  printf("Array : ");
  for (int i = 0; i <= 100; i++)
  {
    if (arr[i] == '\0')
    {
      printf("\n");
      return;
    }
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void size()
{
  for (int i = 0; i <= 100; i++)
  {
    if (arr[i] == '\0')
    {
      printf("Size of array is :%d", i + 1);
      break;
    }
  }
}

int main()
{
  printf("Enter the size of array you want \n");
  while (1)
  {
    printf("Select an Option :  \n 1. Size of Array \n 2. Search Array \n 3. Print Array \n 4. Delete Element \n");

    int first_option;
    scanf("%d", &first_option);

    switch (first_option)
    {
    case 1:
      insert();
      break;

    case 2:
      search();

    case 3:
      print_array();
    }
  }
  return 0;
}