#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *pFile;
  pFile = fopen("kardiz","w");
  char kardiz[30];
  printf("Karakter Dizisi Giriniz:");
  gets(kardiz);
  int i;
  for(i=0; kardiz[i]!='\0'; i++)
    {
      printf("%c",kardiz[i]);
      fputc(kardiz[i], pFile);
    }
  printf(" Uzunluk: %d\n",i);
  fclose(pFile);
  pFile = fopen("kardiz","r");
  char okunan;
  for(i=0; (okunan = fgetc(pFile)) != EOF ; i++)
    {
      printf("%c",okunan);
    }
  printf(" Uzunluk : %d",i);
}
