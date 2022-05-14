#include <stdio.h>
int top = -1;
int stack[100];
int size;

void create_stack();
void push();

void create_stack()
{
  printf("\n Enter size of STACK :");
  scanf("%d", &size);
  for (int i = 0; i < size; i++)
  {
    push();
  }
}

void push()
{
  int push_value;
  if (!isFull())
  {

    printf("Enter element to push : ");
    scanf("%d", &push_value);
    stack[++top] = push_value;
  }
  else
  {
    printf("Stack is full");
  }
}

void print_stack()
{
  printf("Your stack is :\n");
  for (int i = size - 1; i >= 0; i--)
  {
    printf("%d \n", stack[i]);
  }
}

void pop()
{
  char user[1];
  if (top <= -1)
  {
    printf("Stack is empty : ");
    return;
  }
  printf("Do you want to pop (y/n)");
  scanf("%s", &user[0]);
  if (user[0] == 'y')
  {
    int popped = stack[top];
    stack[top--] = 0;
    printf("%d popped from stack", popped);
  }
}

void peek()
{
  printf("Peek value is : %d \n", stack[top]);
}

void stack_status()
{
  if (top == -1)
  {
    printf("Your stack is empty \n");
  }
  else if (top == size - 1)
  {
    printf("Your stack is full \n");
  }
  else
  {
    printf("Your stack have space \n");
  }
}

int isFull()
{
  if (top == size - 1)
  {
    {
      return 1;
    }
    return 0;
  }
}

int main()
{
  printf(" 1. Create and Insert In Stack \n 2. Push \n 3. Pop \n 4. Peek");
  create_stack();
  print_stack();
  pop();
  print_stack();
  peek();
  stack_status();
  return 0;
}