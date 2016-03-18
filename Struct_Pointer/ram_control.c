#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  char ad[50];
  float maas;
}PERSONEL;

void personelYazdir(PERSONEL);

int main()
{
  PERSONEL abdullah;
  /*printf("Adınızı Girin:");
  scanf("%s",&abdullah.ad);
  printf("Maas Girin:");
  scanf("%f",&abdullah.maas);*/
  printf("SizeOf Float : %d \n", sizeof(float)); // 4
  printf("SizeOf char 50 : %d \n", sizeof(char[50])); // 50
  printf("SizeOf: %d\n",sizeof(abdullah)); // 56, Çünkü 4'ün katı olacak şekilde geliyor.
  //  personelYazdir(abdullah);
}

void personelYazdir(PERSONEL personel)
{
  puts("*********************");
  printf("Adı: ");
  puts(personel.ad);
  printf("Maas: ");
  printf("%.2f\n",personel.maas);
}
