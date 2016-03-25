#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *dosya;
  dosya = fopen("login","a+");
  if(dosya == NULL)
    {
      printf("Dosya açılamadı");
    }
  else
    {
      printf("Dosya açıldı");
    }
  char id[30];
  int pw;
  fprintf(dosya,"%s %d","last",999);
  fscanf(dosya,"%s %d",&id,&pw);
  printf("%s %d",id,pw);
  fclose(dosya);
}
