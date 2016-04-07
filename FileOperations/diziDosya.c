#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  char salon;
  int matine;
  int izlenme;
}IZLENME;

int main()
{
  FILE *dosya = fopen("ornek.txt", "r");
  IZLENME dosyaIzlenme;
  char okunan;
  int matineNo;
  int izlenmeSayisi;
  char unexpected;
  
  okunan = fgetc(dosya);
  printf("%c\n",okunan);
  
  matineNo = fgetc(dosya);
  printf("%c\n",matineNo);

  fscanf(dosya,"%d",&izlenmeSayisi);
  printf("%d\n",izlenmeSayisi);

  unexpected = fgetc(dosya); //Bu new line > ascii de 10 degeri

  okunan = fgetc(dosya);
  printf("%c\n",okunan);

  matineNo = fgetc(dosya);
  printf("%c\n",matineNo);
}
