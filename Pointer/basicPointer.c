#include <stdlib.h>
#include <stdio.h>

/*
RAM belleğimizi 1 byte'lık hücrelerden oluşmuş sayı doğrusu
olarak düşünebiliriz. Yani 0-1 arası 1byte, 400. nokta ile 404. nokta arası
4 byte şeklinde.
Örnegin; 1GB RAM bellegimiz var ise : 1024 * 1024 * 1024 = 1,073,741,824 Byte'lık
hücrelerimiz vardır.

POINTER : Biz degişken tanımladıgımızda RAM bellek üzerinde uygun bir alan 
ayrılır ve değişken değerimiz buraya yazılır. Ex: int x = 5; 4 byte alan ayrıldı
ve içine 5 degeri girildi. RAM bellek üzerinde oluşturulan değişkenlerin
bazı bilgileri vardır.
1-Değişken adı (örnekte x)
2-Değişken'in adresi. (400 den baslar 4byte ileri git. 404.byte)
3-Değişken kaç byte'lık. (örnegin int 4byte alır.)

POINTER : Değişkenlerimizin adresini tutmaya yarar.
 */

//void SwapVariables(int, int);

int main()
{
  int x = 15;       //Bellekte 4byte ' lık bir alan olusturduk ve adına x dedik.
  int *pX;
  pX = &x; //Oluşturdugumuz alanın adresini alıyoruz.

  //Pointer olustururken dikkat etmemiz gereken bir noktada, adresini tutacak oldugumuz degişkenin tipinde olması. (int ise int, float ise float)
  //Çünkü her değişkenin bellekte kapladıgı alan farklıdır. kimi 4 byte, kimi 1 byte, kimi 12 byte 
  //& (Ampersant) operatörü ile değişkenin adresini alabiliyoruz. Bu operatörü scanf'te de görmüştük. Ordaki işlevi Bu adrese geçir demek.
  
  printf("X degişkeni adresi: %p\n",pX);
  printf("X değişkeni degeri: %d\n",x);

  *pX = 1; //Adresimize deger giriyoruz. Böylece X değişkeninin adresindeki değeri değiştiriyoruz. X degişkenini
  //ekrana bastıgımızda bellekteki degeri okumak isteyecegi için değiştirdigimiz degeri okuyacak.
  printf("X değişkeni adresi: %p\n",pX);
  printf("X değişkeni değeri: %d\n",x);
}
