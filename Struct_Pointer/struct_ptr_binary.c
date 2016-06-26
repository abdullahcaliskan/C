#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  int no;
  char ad[25];
  int not;
}Ogrenci;

int main(int argc, char *argv[])
{
  Ogrenci ogrenciler[3];
  int i;
  for(i=0; i<3; i++)
    {
      OgrenciEkle(&ogrenciler[i], &i);
    }
  return 0;
}

int OgrenciEkle(Ogrenci *ptr, int *i)
{
  int no;
  printf("No Giriniz:");
  scanf("%d", &no);
  if(no == 0)
    {
      return 0;
    }
  else
    {
    }
  printf("Ad Giriniz:");
  scanf("%s", &ptr->ad);
  printf("Not Giriniz:");
  
}
