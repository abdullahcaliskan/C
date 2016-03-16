#include <stdlib.h>
#include <stdio.h>

int main()
{
  int dizi[5], i, *p;

  for(i=0; i<5; i++)
    {
      dizi[i] = i;
    }
  
  printf("Dizi Offset : \n");
  for(i=0; i<5; i++)
    {
      printf("%d\n",*(dizi + i));
    }

  p = dizi;
  printf("Pointer Offset : \n");
  for(i=0; i<5; i++)
    {
      printf("%d\n",*(p+i));
    }
}
