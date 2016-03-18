#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
  char okul[70];
  char bolum[40];
  double derece;
}PERSONEL_CV;

typedef struct
{
  char ad[30];
  int tc;
  PERSONEL_CV cv;
}PERSONEL;

int main()
{
  PERSONEL abdullah;
  PERSONEL *ptr;
  strcpy(abdullah.ad,"Abdullah");
  printf("Ad :%s\n",abdullah.ad);

  ptr = &abdullah;

  strcpy(ptr -> ad,"Apo");
  printf("Ad :%s\n",abdullah.ad);

  strcpy((*ptr).ad,"Hoppala");
  printf("Ad :%s\n",abdullah.ad);

  ptr -> cv.derece = 12.23;
  printf("%f\n",(*ptr).cv.derece);

  (*ptr).cv.derece = 14.32;
  printf("%f\n",ptr->cv.derece);
}

