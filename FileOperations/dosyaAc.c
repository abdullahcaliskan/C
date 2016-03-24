#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *dosya;
  dosya = fopen("deneme","r");
  if(dosya == NULL)
    {
      printf("Dosya Açılamadı. Erişim yetkilerini kontrol edin / varlıgından emin olun.");
    }
  else
    {
      printf("Dosya Açıldı");
    }
}
