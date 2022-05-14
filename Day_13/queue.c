#include <stdio.h>

int queue[100];
int size;
int rear = -1;
int front = 0;
void enque();

void create_queue()
{
  printf("\n Enter size of Queue:");
  scanf("%d", &size);
  for (int i = 0; i < size; i++)
  {
    enque();
  }
}

void enque()
{
  int enque_value;
  printf("Enter element to add in queue : ");
  scanf("%d", &enque_value);
  queue[++rear] = enque_value;
}

void print_queue()
{
  printf("Your stack is :\n");
  for (int i = 0; i <= rear; i++)
  {
    printf("%d ", queue[i]);
  }
}

void deque()
{

  {
    printf(" \n %d dequed from Queue", queue[front]);

    for (int i = front; i < size; i++)
    {
      queue[i] = queue[i + 1];
    }
    rear--;
  }
}

int main()
{
  printf(" 1. Create and Insert in Queue \n 2. Deque \n ");

  create_queue();
  print_queue();
  deque();
  print_queue();
  return 0;
}