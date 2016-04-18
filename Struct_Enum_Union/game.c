#include <stdlib.h>
#include <stdio.h>
/*
struct : Geliştiricinin tanımladığı bir veri türüdür.
Struct kullanma Amacı : Aralarında mantıksal bir ilişki olan veri tiplerini gruplamak ve kolayca kullanmak
Yapı içindeki elemanlara Üye denir. (Member)
Yapılar ile kendi veri tipinizi oluşturabilirsiniz.
 */

typedef enum{
    Erkek,
    Kadin
}Cinsiyet;
typedef enum{
    Savasci,
    Buyucu,
    Ninja,
    Saman,
    Sura
}KarakterTipi;
typedef struct
{
  int Can;                            //HP Health Point
  int Skill;                          //SP Skill Point
  int Guc;                            //Saldırı Gücü
  int Savunma;                        //Saldırılara Karşı Dayanıklılık.
  int Hiz;                            //Buyuculere Hareket Hızında artis vermeyi düşünüyorum
  Cinsiyet karakterCinsiyet;     //Kadin ise güç değerini Erkeğe göre -5 yapıp Hareket Hızını +5 yapacagım.
  KarakterTipi tip;              //Karakter Tipine göre bazı şeyleri auto belirleyeceğim.
}Karakter;

void yeniKarakter(Karakter *karakter);
Karakter yeniKarakterOlustur();
int main()
{
  Karakter savasci1;
  //  yeniKarakter(&savasci1);
  //  printf("%d",savasci1.Can);
  printf("Cinsiyet Size : %d\n",sizeof(Cinsiyet));
  printf("K Tipi Size : %d\n",sizeof(KarakterTipi));
  printf("Karakter Size : %d\n",sizeof(Karakter));
  //  yeniKarakter(&savasci1);
  Karakter *ptr;
  ptr = &savasci1;
  
  //  printf("Can %d SP %d",savasci1.Can,savasci1.Skill);
}

void yeniKarakter(Karakter *karakter)
{
  //  *karakter = 10;
  //  *(karakter + 1) = 20;
}
Karakter yeniKarakterOlustur()
{
  Karakter karakter;
  karakter.Can = 10;
  return karakter;
}

