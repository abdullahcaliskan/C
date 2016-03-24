#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *dosya;
  dosya = fopen("yaz","w");
  if(dosya == NULL)
    {
      printf("Dosya açılamadı.");
      return 1;
    }
  else
    {
      printf("Dosya açıldı.\n");
      fprintf(dosya,"%d",10);
      printf("Değer Yazıldı\n");
      fclose(dosya);
    }
}
