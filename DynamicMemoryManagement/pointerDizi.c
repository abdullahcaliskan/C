#include <stdlib.h>
#include <stdio.h>

int main()
{
  int dizi[5] = {1};
  int *ptr = dizi;
  int *newPtr = &dizi[1];

  printf("%d %d\n",dizi[0],dizi[1]);

  printf("%d %d\n",ptr[0],ptr[1]); // Pointerlarin diziyle ilişkisi

  printf("%d %d\n",*(ptr+0),*(ptr+1)); //Pointer Offset

  printf("  %d\n",newPtr[0]); // Pointer başlangıc degeri ile alınmıs.

  printf("  %d\n",*(newPtr+0));
}
