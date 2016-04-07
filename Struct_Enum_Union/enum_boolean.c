#include <stdlib.h>
#include <stdio.h>

typedef enum{
  False = 0,
  True
}BOOLEAN;

BOOLEAN TekMi(int sayi);

int main()
{
  int a = 5;
  BOOLEAN durum;
  durum = TekMi(a);
  if(durum == True)
    {
      printf("Sayı Tektir.");
    }
  else
    {
      printf("Sayı Çifttir.");
    }
}
BOOLEAN TekMi(int sayi)
{
  if(sayi % 2 != 0) //Sayinin 2 ye bolumunden kalan 0 degilse (yani 1 ise) Tektir..
    {
      return True; // True: 1 e denk geliyor. (yani return 1 de iş görür.)
    }
  else
    {
      return False; // False : 0
    }
}
