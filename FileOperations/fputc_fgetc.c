#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *dosya;
  dosya = fopen("putget","w");
  fputc('a',dosya);
  fclose(dosya);

  dosya = fopen("putget","r");
  char okunan;
  okunan = fgetc(dosya);
  printf("%c",okunan);
  okunan = fgetc(dosya);
  printf("%c",okunan);
  if(okunan == EOF)
    {
      printf("EOF");
    }
  else
    {
      printf(".");
    }
}
