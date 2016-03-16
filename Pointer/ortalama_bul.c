#include <stdlib.h>
#include <stdio.h>

void ortalamaBul(float *, float *, int);

int main()
{
  float sayilar[] = {1,2,3,4,5} , ortalama = 0.0;
  
  ortalamaBul(sayilar,&ortalama,5); // Burda dikkat etmemiz gereken nokta; sayilar bir dizi oldugu için. & işareti kullanmıyoruz.

  printf("Dizinin ortalaması : %f",ortalama);
}

void ortalamaBul(float *p, float *snc, int n)
{
  /*
    Bu fonksiyon 1.parametre olarak gelen adresteki dizinin tüm elemanlarını toplayıp gelen 'n' değerine böler ve sonucu,
    2. parametre olarak gönderilen ortalama değişkeninin adresine yazar.
   */
  int i = 0;
  float toplam = 0.0;
  for (i=0; i<n; i++)
    {
      toplam += *(p+i);
      //Yukarıdaki satır ile dizideki tüm degerleri topluyoruz.
    }
  toplam /= n; // Toplamı kaç adet ise ortalamasını bulmak için 'n' degerine bölüyoruz
  *snc = toplam; // snc nin tuttugu adrese toplam degerimizi giriyoruz. böylece main deki ortalama degeri dolmus oldu.
}
