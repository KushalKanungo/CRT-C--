#include <stdio.h>
#include <string.h>
union EE_id
{
  int roll_no;
  char name[20];
  float marks;
};

int main()
{
  // We can manipulate only one variable at a time in Union
  union EE_id s1;
  s1.roll_no = 25;
  printf("Roll: %d \n", s1.roll_no);
  strcpy(s1.name, "Kushal");
  printf("Name: %s \n", s1.name);
  s1.marks = 72.0;
  printf("Marks: %.2f \n", s1.marks);

  // ptr(&s1);
  return 0;
}