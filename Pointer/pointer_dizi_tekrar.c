#include <stdlib.h>
#include <stdio.h>

int main()
{
  int x[] = {1,2,3,4,5,6,7,8,9};
  int *ptr;
  int *p;
  ptr = &x[0];
  p = x;
  printf("%d",*(x+2));
}
