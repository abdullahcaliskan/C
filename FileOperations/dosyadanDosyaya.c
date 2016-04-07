#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *fp = fopen("say.txt", "r");
  char okunan;

  FILE *kopya = fopen("hedef.txt","w");
  fclose(kopya);

  kopya = fopen("hedef.txt","a");
  
  okunan = fgetc(fp);
  while(okunan != EOF)
    {
      fputc(okunan, kopya);
      okunan = fgetc(fp);
    }
  printf("Success");
}
