#include <stdlib.h>
#include <stdio.h>

typedef enum
  {
    Yazilim,
    Mekatronik,
    Makina,
    Imalat,
    Bilgisayar,
    Bilisim,
    Sistem,
    Guvenlik,
    Web,
    Ag,
    Mobil
  }Bolumler;

typedef struct
{
  int OgrenciNo;
  char ad[50];
  Bolumler fakulte;
}OGRENCI;

OGRENCI BilgiAl();
void BilgiVer(OGRENCI *);

int main()
{
  OGRENCI abdullah;
  BilgiVer(&abdullah);
  Bolumler muhendislik;
  muhendislik = Yazilim;
  printf("Muhendislik sizeof: %d\n",sizeof(muhendislik));
  abdullah = BilgiAl();
  printf("Ogrenci No: %d\n",abdullah.OgrenciNo);
  printf("Ogrenci Bolum (8): %d\n",abdullah.fakulte);
}
OGRENCI BilgiAl()
{
  OGRENCI ogrenci;
  ogrenci.OgrenciNo = 59;
  ogrenci.fakulte = Web;
  return ogrenci;
}
void BilgiVer(OGRENCI *ogrenci)
{
  printf("Yapı adres > %d\n",ogrenci);
  printf("Yapı sizeof: %d\n",sizeof(ogrenci));
}
