#include <stdlib.h>
#include <stdio.h>
#define dosya "encrypted.txt"

void sifrele(char *, char *);
void dizidenDosyaya(char *);

int main()
{
  
  char metin[30], encrypted[60]; //Metin x olursa, encypted 2x olmalı. Sebebi 1 karakter, 2 karakter yerine geçiyor.
  printf("Şifrelenecek Karakter :");
  scanf("%s",metin);
  sifrele(metin,encrypted);
  dizidenDosyaya(encrypted);

  FILE *fptr;
  fptr = fopen(dosya,"r");
  char user[40], pw[40];
  fscanf(fptr,"%s %s",user,pw);
  char sifre[40];
  printf("Şifre:");
  scanf("%s",sifre);
  char sifreEnc[40];
  sifrele(sifre,sifreEnc);
  if(!strcmp(sifreEnc,pw))
    {
      printf("%s %s",sifreEnc,pw);
    }
  else
    {
      printf("Nothing");
    }
  fclose(fptr);
}

void dizidenDosyaya(char *metin)
{
  int n = strlen(metin);
  int i;
  
  FILE *fp = fopen(dosya, "w");
  fprintf(fp,"%s ","a");
  for(i=0; i<n; i++)
    {
      fputc(*(metin+i),fp);
    }
  fclose(fp);
}

void sifrele(char *metin, char *encrypted)
{
  int n = strlen(metin);
  int i,k;
  for(i=0,k=0; k < n; i=i+2, k++)
    {
      *(encrypted + i) = ((int)*(metin + i) + 5) % 255; //Burdaki mod 255 ile ASCII tabledaki sinir belirliyorum
      *(encrypted + i+1) = ((int)*(encrypted + i) * 3) % 255;
    }
}
