#include <stdio.h>

int get_power(int number, int power)
{
  int result = 1;
  for(int i = 0; i < power; i++)
  {
    result *=  number;
  }
  
  return result;
}

int main(void) 
{
  int number;
  int power;
  printf("enter_a_number: ");
  scanf("%d", &number);
  printf("enter_the_degree: ");
  scanf("%d", &power);
  printf("%d", get_power(number, power));
}
