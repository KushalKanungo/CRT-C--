#include <stdio.h>
#include <string.h>

struct EE_id
{
  int roll_no;
  char name[50];
  float marks;
};

void ptr(struct EE_id *EE)
{
  EE->roll_no = 34;                      // To change original value
  printf("Roll No: %d \n", EE->roll_no); // -> is used to access structure thorough pointer
  printf("Name: %s \n", EE->name);
  printf("Marks: %.2f \n", EE->marks);
  printf("Address: %p \n", EE);
}

int main()
{
  struct EE_id Ei;
  Ei.roll_no = 25;
  strcpy(Ei.name, "Kushal");
  Ei.marks = 72.0;
  ptr(&Ei);

  return 0;
}
