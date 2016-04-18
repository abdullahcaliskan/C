#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  double vize[2];
  double quiz[2];
  double final;
}NOTLAR;
typedef struct
{
  char ad[30];
  char soyad[30];
  char eposta[50];
  int tc;
  NOTLAR ogrenciNot;
}OGRENCI;

int main()
{
  OGRENCI yazilim[15]; //Yazilim sinifi ögrecilerinin notunu tutan bir yapı.
  int i;
  strcpy(yazilim[0].ad,"Abdullah");
  printf(yazilim[0].ad);
  yazilim[0].ogrenciNot.vize[0]=12;
  yazilim[0].ogrenciNot.vize[1]=87;
  printf("%f",yazilim[0].ogrenciNot.vize[0]);;
}
