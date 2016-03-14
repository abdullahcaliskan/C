#include <stdlib.h>
#include <stdio.h>
/*
struct : Geliştiricinin tanımladığı bir veri türüdür.
Struct kullanma Amacı : Aralarında mantıksal bir ilişki olan veri tiplerini gruplamak ve kolayca kullanmak
Yapı içindeki elemanlara Üye denir. (Member)
Yapılar ile kendi veri tipinizi oluşturabilirsiniz.
 */

enum Cinsiyet
  {
    Erkek,
    Kadin
  };
enum KarakterTipi
  {
    Savasci,
    Buyucu
  };
struct Karakter
{
  int Can;                            //HP Health Point
  int Skill;                          //SP Skill Point
  int Guc;                            //Saldırı Gücü
  int Savunma;                        //Saldırılara Karşı Dayanıklılık.
  int Hiz;                            //Buyuculere Hareket Hızında artis vermeyi düşünüyorum
  enum Cinsiyet karakterCinsiyet;     //Kadin ise güç değerini Erkeğe göre -5 yapıp Hareket Hızını +5 yapacagım.
  enum KarakterTipi tip;              //Karakter Tipine göre bazı şeyleri auto belirleyeceğim.
};


struct Karakter yeniKarakterOlustur(struct Karakter karakter);
int main()
{
  struct Karakter savasci1;
  yeniKarakterOlustur(savasci1);
  printf("%d",savasci1.Can);
}

struct Karakter yeniKarakterOlustur(struct Karakter karakter)
{
  karakter.Can = 10;
}

