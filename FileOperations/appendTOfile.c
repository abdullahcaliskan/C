#include <stdlib.h>
#include <stdio.h>

void dosyaAcildiMi(FILE *, int);

int main()
{
  FILE *dosya;
  dosya = fopen("append","w");
  dosyaAcildiMi(dosya,1);
  fprintf(dosya,"%d\n",10);
  fclose(dosya);
  dosya = fopen("append","a");
  dosyaAcildiMi(dosya,1);
  fprintf(dosya,"%d\n",11);
  fclose(dosya);
}
void dosyaAcildiMi(FILE *file, int uyari)
{
  // uyari == 1 ise, bildirimler açık
  if(file == NULL)
    {
      printf("Dosya Açılamadı. Uygulamadan çıkılıyor.");
      exit(1);
    }
  else
    {
      //Dosya açıldı. Uyarı istermisin?
      if(uyari == 1)
	{
	  printf("Dosya açıldı.");
	}
    }
}
