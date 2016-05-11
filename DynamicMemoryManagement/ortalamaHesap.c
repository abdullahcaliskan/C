#include <stdlib.h>
#include <stdio.h>

typedef enum
  {
    false,
    true
  }Bool;

float ortalamaHesapla(int *, int *);

int main()
{
  int *sayilar;
  //sayilar = calloc(1,sizeof(int)); //Tam sayı veri girişi için 4 bytelık alan olusturdum. calloc kullandım ki, 0 olarak kalabilsin.
  Bool tekrar = true;
  int i;
  for(i=0;tekrar==true;i++)
    {
      sayilar = realloc(sayilar,i+1);
      printf("Sayı Giriniz:");
      scanf("%d",&sayilar[i]);

      printf("Yeni Sayı?\n"
	     "0. Hayır\n"
	     "1.Evet\n"
	     ">");
      scanf("%d",&tekrar);
    }
  
  float sonuc = ortalamaHesapla(&sayilar[0],&i);
  printf("Ortalama : %.2f",sonuc);
}
float ortalamaHesapla(int *dizi, int *i)
{
  float sonuc;
  int sayac;
  for(sayac=0; sayac < *i; sayac++)
    {
      sonuc += dizi[sayac];
    }
  sonuc /= *i;
  return sonuc;
}
