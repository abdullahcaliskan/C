#include <stdlib.h>
#include <stdio.h>

void swapVariables(int *, int *);

int main()
{
  int a = 15;
  int b = 100;

  swapVariables(&a, &b);  // Değişkenlerimizin adreslerini gönderiyoruz böylece ram üzerinde degişiklik yapabilelim.

  printf("A (15) > : %d\n",a);
  printf("B (100)> : %d\n",b);
}
void swapVariables(int *first, int *second)
{
  int temp = *first;
  *first = *second;
  *second = temp;
}
