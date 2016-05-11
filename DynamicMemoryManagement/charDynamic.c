#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char *kardiz;
  int harf_sayisi;
  printf("Kaç harfi str gireceksiniz:");
  scanf("%d",&harf_sayisi);

  kardiz = malloc(sizeof(char) * harf_sayisi);
  
  if(kardiz == NULL)
    printf("Bellek Alanı ayrılamadı");
  else
    {
      printf("Bellek Alanı Ayırma İşlemi Başarılı\n");
      scanf("%s",kardiz);
      printf("Okuma tamamlandı.");
    }
  printf("%s",kardiz);
  free(kardiz);
  return 0;
}
