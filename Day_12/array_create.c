#include <stdio.h>
int arr[100];
int sorted[100];
int size;
void insert()
{
  printf("Enter total values to insert : ");
  scanf("%d", &size);
  int i;
  for (i = 0; i < size; i++)
  {
    int ele;
    printf("Enter element : ");
    scanf("%d", &ele);
    arr[i] = ele;
  }
}

void search()
{

  int search_value;
  printf("Enter value to search :");
  scanf("%d", &search_value);

  for (int i = 0; i <= size; i++)
  {
    if (arr[i] == search_value)
    {
      printf("%d is present at %d postion \n", search_value, ++i);
      return;
    }
  }
  printf("%d Not found \n");
}

void print_array()
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void sort()
{
  int small;
  for (int i = 0; i < size; i++)
  {
    int small = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] >= arr[j])
      {
        small = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[small];
    arr[small] = temp;
  }
}

void delete_value()
{
  int todelete;
  printf("Enter position to delete : ");
  scanf("%d", &todelete);

  if (todelete > size)
  {
    printf("Position does not exist");
    return;
  }
  else
  {
    for (int i = todelete; i < size; i++)
    {
      arr[i] = arr[i + 1];
    }
  }
}

int main()
{
  printf(" 1. Create and Insert in Array \n 2. Search Array \n 3. Sort \n 4. Delete Array");
  insert();
  print_array();
  search();
  sort();
  printf("Sorted Array : \n");
  print_array();
  delete_value();
  print_array();

  return 0;
}