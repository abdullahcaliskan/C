#include <stdlib.h>
#include <stdio.h>

enum Cinsiyet
  {
    Erkek,
    Kadin
  };

struct Iletisim
{
  char eposta[50];
  int telefon;
};

struct Personel
{
  char ad[50];
  int yas;
  float maas;
  enum Cinsiyet PersonelCinsiyet;
  struct Iletisim PersonelIletisim;
};

void PersonelYazdir(struct Personel);
char CinsiyetYaz(int);

int main()
{

  struct Personel abdullah;

  abdullah.yas = 19;
  abdullah.maas = 2500.00;
  abdullah.PersonelIletisim.telefon = 1235645645;
  printf("Eposta Giriniz:");
  scanf("%s",&abdullah.PersonelIletisim.eposta);
  abdullah.PersonelCinsiyet = Erkek;
  printf("Adınızı Giriniz:");
  scanf("%s",&abdullah.ad);
  PersonelYazdir(abdullah);
  
}

void PersonelYazdir(struct Personel personel)
{
  puts("****************************************************************");
  printf("Yas: %4d Maas: %10.2f Telefon: %12d",personel.yas, personel.maas, personel.PersonelIletisim.telefon);
  printf("\n%c\n",CinsiyetYaz(personel.PersonelCinsiyet));
  puts(personel.ad);
  puts(personel.PersonelIletisim.eposta); //Puts ile printf arasındaki fark. Puts ile yazılınca imleç alt satıra geçer ve bekler.
}
char CinsiyetYaz(int cinsiyet)
{
  if(cinsiyet == 0)
    {
      return 'E';
    }
  else
    {
      return 'K';
    }
}
