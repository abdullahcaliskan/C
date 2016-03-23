#include <stdlib.h>
#include <stdio.h>

void degerAl(int *degisken, char *mesajlar, int mesaj_index);

int main()
{
  char mesajlar[4][35]={"Kenar Giriniz:",
			"Kenar 2 Giriniz:",
			"Kenar 3 Giriniz:",
			"Yaricap Giriniz:"};
  //  puts(mesajlar[1]); //Karakter dizisini ekrana basmada bire bir.
  //  printf(mesajlar[1]); // Aynı işlem tekrarlandı.
  char *ptr;
  ptr = &mesajlar[0];
  printf("%d\n",sizeof(mesajlar));
  /*  printf("PTR:%d\n",ptr);
  printf("PTR 1:%d\n",ptr+1);
  printf("PTR:%c\n",*ptr);
  printf("PTR:%c\n",*(ptr+13));*/
  /*printf("2.Satır : %c",*(ptr+41));
  int satir = 1;
  int i;
  for(i=0; i<35; i++)
    {
      printf("%c",*(ptr+i));
    }
  
  int deger;
  int *p = &deger;
  scanf("%d",p);
  printf("%d",*p);
  int kenar1, kenar2;*/
  int a = 0;
  int b;
  a == 0 ? b=1 : b = 2;
  printf("%d",b);
  //degerAl(&kenar1,mesajlar,0);
}
/*void degerAl(int *degisken, char *mesajlar, int mesaj_index)
{
  printf(*mesajlar[mesaj_index]);
  scanf("%d",degisken);
  }*/
