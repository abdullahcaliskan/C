#include <stdlib.h>
#include <stdio.h>

int fonk(int a);

int main()
{
  int (*ptrF)(int);
  ptrF = &fonk;

  printf("%d\n",(*ptrF)(2));
  printf("%d\n",ptrF(5));
}

int fonk(int a)
{
  return (a*a*a);
}
