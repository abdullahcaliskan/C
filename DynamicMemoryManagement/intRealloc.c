#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int *dizi = malloc(3 * sizeof(int));
  int i;
  for(i = 0; i < 3; i++)
  {
    dizi[i] = i+1;
  }
  dizi = realloc(dizi, sizeof(int) * 5);
  printf("%d",dizi[2]);
  return 0;
}
