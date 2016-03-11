#include <stdlib.h>
#include <stdio.h>

int main()
{
  int number = 100;

  int *p1 = &number; //Number degişkenimizin adresini alıyoruz.
  int **p2 = &p1;    //p1 pointerimizin adresini alıyoruz.

  **p2 = 50;
  printf("\n%d",number);
  printf("\nAdres: %d",p2);

  *p1 = 75;
  printf("\n%d",number);
  printf("\nAdres p1 : %d",p1);
}
