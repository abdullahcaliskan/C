#include<stdio.h>
//#include <conio.h>
#include <stdlib.h>
#include <time.h>
 int toplama (void);
 int main()
 {
     int oyun,toplam,oyunpuan,zar,i;
     srand(time(0));

    printf("iki atista ");
    printf("oyunu kazanmak icin zarlarin toplami 12 veya 2 olmalidir.     \n");
    printf("                 \n");
    printf(" eger  zarlarin toplami 7 olursa kaybedersiniz.\n");
    printf("toplam 5 kere zar atabilirsin \n");
toplam=toplama();
     switch (toplam) {
     case 2: case 12:
          oyun =1; break;       //iki atısta oyunu kazanabilmek için
     case 7:
          oyun =2; break;       // iki atısta oyunu kaybetmek için
          default:              // eger iki atısta oyunu kazanmazsa veya kaybetmezse yeni kazanabilmek icin hedef koyar.
          oyun =0;
          toplam=toplama();
          oyunpuan=toplam;
          printf("iki atista oyunu kazanamadin.kazanmak icin zarlarin toplami %d olmali\n",oyunpuan);
          }
     for (i=0;i<5;i++)         // toplam 5 kere zar atabilmemiz icin for döngüsüyle 5 defa tekrarlıyoruz.
     while (oyun==0){
     toplam=toplama();          // ilk iki atısta oyunu kazanamazsak veya kaybetmezsek  ya oyunu kazanana ya kaybedene yada 5 zar hakkı dolana kadar zar atar.
     if (oyunpuan==toplam)      // kazanmak icin gereken şart
      oyun=1;
      else if (toplam== 7)     // direk kaybetmek icin gereken şart
         oyun=2;

       }
     if(oyun==1)
      printf("helal panpa oyunu kazandin sansin yaver gitti");
      else
      printf ("you loser noob nihahaha");

   getch();
   return 0;
 }



 int toplama(void)
 {int zar1,zar2,toplamzar,k;
 printf("zar atmak icin 1 e basin."); // oyunu oynayan kişiden 1 rakamini girmesini istiyoruz.
 scanf("%d",&k);
 if(k==1)
 {zar1=rand()%5+1;
 zar2=rand()%5+1;
 toplamzar=zar1+zar2;
     printf("%d ve %d zarlarini attinzarlarin toplami %d\n",zar1,zar2,toplamzar);
 return toplamzar;
 }
  else
  printf("ilk rakamlari ogren!!!"); // eger 1 rakamini girmezse bunu yaziyor
 }
