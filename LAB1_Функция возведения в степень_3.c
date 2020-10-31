#include <stdio.h>
#include <conio.h>
#include <math.h>

int is_simple(long int number) 
{
  if (number > 1)
  {
    for(int i = 2; i < number; i++)
    {
      if (number % i == 0)
      {
        return 0;
      }
      
      return 1;
    }
  }
  else
  {
    printf("the_number_you_entered_is_neither_composite_nor_simple. \n");
  }
  
  return 0;
}

int main(void)
{
  long int number;
  printf("enter_the_number: ");
  scanf("%li", &number);
  printf("%d", is_simple(number));
}
