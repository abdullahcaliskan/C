#include <stdlib.h>
#include <stdio.h>

int *buyukBul(int *, int *);

int main()
{
  int s1 = 10, s2 = 20;
  int *p;
  printf("Buyuk olan adres :%d\nKüçük olan adres :%d\n",&s2,&s1);
  p = buyukBul(&s1,&s2);
  printf("Sonuç : %d\n",p);
}

int *buyukBul(int *sayi1, int *sayi2)
{
  //sayi1 ve sayi2 adreslerindeki degerleri karşılaştır. Dönüş degeri olarak pointer adresini döndür.
  return (*sayi1 > *sayi2) ? sayi1 : sayi2;
}

