#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  int hesap_no;
  char *hesap_sahibi;
  float hesap_bakiye;
}Hesap;

int main(int argc, char const *argv[]) {
  FILE *fp = fopen("bankaHesap.txt", "rb");
  Hesap hesaplar[2];
  fread(&hesaplar, sizeof(hesaplar), 1, fp);
  IcerikListele(&hesaplar[0]);
  return 0;
}
void IcerikListele(Hesap *hesaplar)
{
  int i = 0;
  for(i = 0; i < 2; i++)
  {
    printf("Hesap NO: %d\n", hesaplar[i].hesap_no);
    printf("Hesap Sahibi: %s\n", hesaplar[i].hesap_sahibi);
    printf("Hesap Bakiye: %.2f\n", hesaplar[i].hesap_bakiye);
    printf("---------------------------\n");
  }
}
