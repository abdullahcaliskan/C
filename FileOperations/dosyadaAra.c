#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *fp = fopen("say.txt", "r");
  char okunan;
  okunan = fgetc(fp);
  int sayac;
  char aranan = 'a';
  while(okunan != EOF)
    {
      if(aranan == okunan)
	{
	  sayac++;
	}
      okunan = fgetc(fp);
    }
  printf("Dosyada %d kez geçiyor.",sayac);
  fclose(fp);
}
