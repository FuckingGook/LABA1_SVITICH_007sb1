#include <stdio.h>

int get_power (int number, int power);
int main (void) 
{
  int number;
  int power;

  scanf ("%d", & number);
  printf ("enter the degree: ");

  scanf ("%d", & power);
  printf ("%d", get_power (number, power));
}

int get_power (int number, int power)
{
  int result = 1;
  
  for (int i = 0; i < power; i++)
  {
    result *=  number;
  } 
  
  return result;
}
