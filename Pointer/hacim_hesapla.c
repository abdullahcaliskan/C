#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void degerAl(int *degisken, char *mesajlar, int satir);
void kupHacmi(int *kenar, double *sonuc);
void kureHacmi(int *yaricap, double *sonuc);
  void dikdortgenHacmi(int *kenar1, int *kenar2, int *kenar3, double *sonuc);
  
typedef enum{
  kup = 1,
  dikdortgen,
  kure
}CISIM;
typedef enum{
  evet = 1,
  hayir
}BOOLEAN;
int main()
{
  printf("*********HOŞGELDİNİZ*********\n");
  setlocale(LC_ALL, "Turkish");
  char mesajlar[4][35]={"Kenar Giriniz:",
			"Kenar 2 Giriniz:",
			"Kenar 3 Giriniz:",
			"Yaricap Giriniz:"};
  // yukardaki mesajlar matrisi ile, degerAl fonksiyonunda mesaj gösterimi yapacagız.
  BOOLEAN tekrar = evet;
  CISIM secilen;
  int kenar2, kenar3;
  int girdi;
  int kenar1; //Hepsine en az bir girdi gerek.
  double sonuc;
  while(tekrar == evet)
    {
      /*
	Input START
       */
      
      printf("Aşagıdaki menüden cismi seçebilirsiniz\n");
      printf("1. Küp\n"
	     "2. Dikdörtgen\n"
	     "3. Küre\n>");
      scanf("%d",&secilen);
      
      if(secilen == kup)
	{
	  degerAl(&kenar1,mesajlar,0);
	  //Kup Hacmini hesaplayan bir fonksiyon.
	  kupHacmi(&kenar1,&sonuc);
	}
      else if(secilen == dikdortgen)
	{
	  
	  degerAl(&kenar1,mesajlar,0);
	  degerAl(&kenar2,mesajlar,1);
	  degerAl(&kenar3,mesajlar,2);
	  dikdortgenHacmi(&kenar1,&kenar2,&kenar3,&sonuc);
	  //	  dikdortgenHacim();
	}
      else if(secilen == kure)
	{
	  degerAl(&kenar1,mesajlar,3);
	  kureHacmi(&kenar1,&sonuc);
	  // Kure Hacim
	}
      else
	{
	  printf("Affetmem. Direk Dışarı!");
	  exit(9); //9'un özel bir anlamı vardır. Process kill edilirken gönderilen SIGTERM'dir. 9 : Fişi Çek :D
	}
      /*
	Input END
       */
      printf("%.2f\n",sonuc);

      printf("Yeni hesaplama yapmak istiyor musunuz?\n"
	     "1. Evet\n"
	     "2. Hayir\n");
      
      scanf("%d",&tekrar);
    }
  printf("Hoşçakalın...\n");
}
void degerAl(int *degisken, char *mesajlar, int satir)
{
  // Bu fonksiyon ile deger alma işlemini kolaylaştırıyoruz.
  int i=0;
  int limit;
  if(satir==0) { limit = 35; }
  else { limit = 35*(satir+1); }
  
  for(i=satir * 35; i<limit; i++)
    {
      printf("%c",*(mesajlar + i));
    }
  scanf("%d",degisken);
}
void kupHacmi(int *kenar, double *sonuc)
{
  // kup hacmini hesaplar. a^3. Sonuc degişkenine geçirir.
  *sonuc = *kenar * *kenar * *kenar;
}
void dikdortgenHacmi(int *kenar1, int *kenar2, int *kenar3, double *sonuc)
{
  // Dikdörtgen hacmini hesaplar. sonuc degişkeninin adresine geçirir.
  *sonuc = (*kenar1 * *kenar2 * *kenar3)*1.0;
}
void kureHacmi(int *yaricap, double *sonuc)
{
  // kure hacmini hesaplar. sonuc degiskenine geçirir.
  *sonuc = 4 * *yaricap * *yaricap * *yaricap * 3.14 / 3;
}
