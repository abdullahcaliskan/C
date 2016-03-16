#include <stdlib.h>
#include <stdio.h>
/*
double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
Önce bu dizinin indisleri, dizi değerleri ve dizi elemanlarının adresleri main() fonksiyonunda ekrana yazdırılacaktır.

Daha sonra, fonksiyon ile dizinin en büyük elemanı bulunacak ve bu elemanın adresi geriye döndürülerek
ekrana basılacaktır.
**/

double* maxAdr(double *, int);


int main()
{
  double x[6] = {1.1, 3.3, 7.1, 5.4, 0.2, -1.5};
  double *ptr;
  int i;
  printf("%6s %6s %15s\n","Index","Value","Address");
  for(i=0; i<6; i++)
    {
      printf("%6d %6.1f %15d\n",i,x[i],&x[i]);
      //Burada adım 1 de istenilen ekrana çıktıların kodlarını yazdık.
    }
  ptr = maxAdr(x,6);
  //Fonksiyona x dizisinin adresini yolluyoruz. 6 elemanlı bir dizi.
  printf("Bildigimiz en büyük adres : %d\n",&x[2]);
  printf("Fonksiyon Geri Dönüş Degeri : %d\n",ptr);
}

double* maxAdr(double *dizi, int n)
{
  //Bu fonksiyon, gönderilen dizi içindeki en büyük değerin, adresini geri döndür.
  double enBuyuk = *dizi; //dizinin 0 indisli elemanını büyük varsayıyoruz.
  double *EBadres = dizi; //Dizinin adresini EBadres adlı bir pointer da tutuyoruz. Bu deger dönüş degerimiz olucak
  // *EBadres degerini &dizi[0] şeklindede alabiliriz.
  int i;
  for(i=1; i<n; i++)
    {
      if(enBuyuk > *(dizi + i)) //Burda kontrolü gerçekleştiriyoruz.
	//Dikkat edilecek nokta. *(dizi+i) offset sayesinde; Sırasıyla (döngü yardımıyla) 400. adresten 8byte ileri. 408. adresten 8byte ileri
	//bu adresteki degerler kontrol edilecek.
	{
	  continue;
	}
      else
	{
	  enBuyuk = *(dizi + i);
	  EBadres = dizi + i;
	}
    }
  return EBadres;
}
