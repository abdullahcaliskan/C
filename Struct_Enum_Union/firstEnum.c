#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
enum : (Enumeration Consts)(Sayma Sabitleri)
enum ile kendimize bir liste olusturup, sayısal karşılıklarını belirleyebiliriz.
Bu işlem bize kodun daha okunaklı olmasını sağlar.
Örnegin aşagıda; Boolean adında bir sayma tipi oluşturduk. Böylece işlem yanlış ise 0 yerine False
işlem doğru ise 1 yerine True kullandık ki ileride programımızı açıp baktıgımızda
daha kolay anlayabilelim.
 */
enum Cinsiyet
  {
    bay,
    bayan
  };
enum EgitimDurumu
  {
    ilkokul,
    ortaokul,
    lise,
    onlisans,
    lisans,
    yukseklisans,
    doktora
  };
enum Boolean
  {
    False,
    True
  };
enum Boolean CiftMi(int); //Olusturdugumuz sayma tipini fonksiyon tanımlarken de kullanabiliriz.
//Bu yol ile CiftMi fonksiyonunun döndürecegi degerin True veya False olacagını biliyoruz.

int main()
{
  int number = 10;
  enum Boolean statu;
  statu = CiftMi(number);
  if(statu == True)
    {
      printf("Sayi Cifttir");
    }
  else
    {
      printf("Sayi Tektir");
    }
}
enum Boolean CiftMi(int sayi)
{
  enum Boolean durum;
  if(sayi % 2 == 0)
    {
      durum = True;
    }
  else
    {
      durum = False;
    }
  return durum;
}
