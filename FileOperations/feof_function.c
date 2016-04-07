#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *dosya;
  dosya = fopen("end-of-file","r");
  dosya==NULL ? printf("Dosya Açılamadı") : printf("Dosya Açıldı\n");
  int boyut=0;
  char okunan;
  while( (okunan = fgetc(dosya))!= EOF ) // Dosya end-of-file dondurmedikce oku.
    {
      boyut++;
      printf("boyut :%d\n",boyut);
      printf("okunan :%c\n",okunan);
    }
  printf("Dosya Boyutu:%d",boyut);
}
