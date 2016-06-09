#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void parcala(char *, int);

int main(int argc, char *argv[])
{
  char *kardiz;
  int harf_sayisi;
  printf("Kaç harfli str gireceksiniz:");
  scanf("%d",&harf_sayisi);

  kardiz = malloc(sizeof(char) * (harf_sayisi + 1));
  //Yukarıda harf_sayisini +1 yapıyorum çünkü, \0 (sonlandırıcı karakter) için yer ayrılsın.
  
  if(kardiz == NULL)
    printf("Bellek Alanı ayrılamadı");
  else
    {
      //Bellek alanı ayırma işlemi başarılı
      scanf("%s",kardiz);

      //Burada bir kontrol yapmak istiyorum...
      //Kullanıcı yalan ifade verebilir :))

      harf_sayisi = strlen(kardiz);
      kardiz = realloc(kardiz, (harf_sayisi + 1)); // Burada dogruladık işlemimizi :) 

      parcala(kardiz,harf_sayisi);      
    }
  free(kardiz);
  return 0;
}
void parcala(char *ptrStr, int harf_sayisi)
{
  int i=0, j=0;
  for(i=0; i<harf_sayisi; i++)
    {
      for(j=0; j<=i; j++)
	{
	  printf("%c",ptrStr[j]);
	}
      printf("\n");
    }
}
