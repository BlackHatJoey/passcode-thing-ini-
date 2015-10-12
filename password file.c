#include <stdio.h>

int main(void)
{
  float number = 042646;
  int pass;
  printf("Enter the passcode.\n");
  scanf("%d", &pass);

  if (pass == number)
    {
      printf("Correct\n");
    }
  else
    {
      printf("Invalid\n");
    }
  return 0;
