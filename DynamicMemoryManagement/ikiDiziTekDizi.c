#include <stdlib.h>
#include <stdio.h>

void diziAl_Genislet(int *);
void tekDiziYap(int *, int *);
void diziYazdir(int *);

int main(int argc, char const *argv[]) {
  int *dizi_1 = malloc(sizeof(int));
  int *dizi_2 = malloc(sizeof(int));

  diziAl_Genislet(dizi_1);
  diziAl_Genislet(dizi_2);

  tekDiziYap(dizi_1, dizi_2);

  diziYazdir(dizi_1);

  free(dizi_1);
  free(dizi_2);
  return 0;
}
void diziYazdir(int *ptr)
{
  int i;
  //Burada sınır: ptr[0] : 3 ise, 3.indexten gelip diger index degere kadar.
  for(i = 0; i < (ptr[0] + ptr[(ptr[0])]); i++)
  {
    printf("%d",ptr[i]);
  }

}
void tekDiziYap(int *target_ptr, int *dest_ptr)
{
  /*
  2. parametrenin argüman olarak aldıgı diziyi, 1. parametrenin argüman olarak
  aldıgı dizinin sonuna ekler.
  */
  int i;
  //Sınırımız, kaynak dizinin 0. indexte sakladıgı degerin 1 fazlası olmalı.
  for(i = 1; i < (dest_ptr[0] + 1); i++)
  {
    target_ptr[target_ptr[0]] = dest_ptr[i];
    //Target_ptr[0] index degerimizden eklemeye baslıyacak.
  }
}

void diziAl_Genislet(int *ptr)
{
  /*
  Dizinin kaç elemanlı oldugunu alıp, o değer ile diziyi genişletip, daraltır.
  Param: pointer alır.
  return: Void (NOne)
  */
  printf("Kaç Elemanlı Bir dizi gireceksiniz:");
  scanf("%d",ptr);
  //Tekrar değişken tanımlamaktansa, işaretcinin 4 bytelik alanını kullanabilirim.
  printf("%d\n",ptr[0]);
  ptr = realloc(ptr, (ptr[0] + 1) * sizeof(int));
  //ptr nin gösterdigi dinamik diziyi, genişletip/daraltıyoruz.
  //buradaki +1 0. indexte bizim kaç elemanlı oldugunu saklamamıza yarıyor.
  //+1 ile istenilen kadar alan vermiş oluyorum.
  int i;
  for(i = 0; i < ptr[0]; i++)
  {
    printf("%d. eleman:", i+1);
    scanf("%d",&ptr[i+1]);
  }
}
