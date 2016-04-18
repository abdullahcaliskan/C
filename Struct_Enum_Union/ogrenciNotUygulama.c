#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  double odev[4];
  double quiz[2];
  double sinav[3]; //2 Vize 1 Final.
}NOTLAR;

typedef struct
{
  char isim[30];
  char soyisim[30];
  int okulNo;
  NOTLAR ogrenciNotlar;
}OGRENCI;
int main()
{
  OGRENCI abdullah, nurullah, ilker;  
}
