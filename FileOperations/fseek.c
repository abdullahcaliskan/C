#include <stdlib.h>
#include <stdio.h>

typedef struct
{
  int HesapNo;
  char Isim[100];
  float Bakiye;
} stHesap;


//Fonksiyon prototipleri
void bilgiAl();
void Listele();
void Oku(int *);
void Yazdir(int *);
//Global Variables
stHesap *hesaplar;
stHesap okunan; //Bu şekilde yaptım, sadece istedigim alanı buraya alıcam.
//Gerçek anlamda tampon yani.
int index_sayisi;
char *dosya_adi = "musteri.txt";
FILE *fp;



int main(int argc, char const *argv[]) {
  hesaplar = malloc(sizeof(stHesap)); //struct boyutu kadar alan ayırdım.
  bilgiAl();
  Listele();
  int kayit_no;
  fp = fopen(dosya_adi, "wb+");
  printf("Kaç Numaralı Hesap Kayıt Edilsin:");
  scanf("%d", &kayit_no);
  Yazdir(&kayit_no); //Dosyaya kayit_no sırasında yaz.

  printf("Kaç Numaralı Hesap Okunsun:");
  scanf("%d", &kayit_no);
  Oku(&kayit_no);
  printf("Bye!\n");
  fclose(fp); //Açtıgın dosyayı her zaman kapat.
  free(hesaplar);
  return 0;
}
void Oku(int *kayit_no) {
  fp == NULL ? exit(11) : printf("Dosyadan Okunuyor..\n");
  //Dosya açılmadıysa, ki bu işlem okumadaysa 11 döndür. yoksa oku.
  fseek(fp, sizeof(stHesap) * (*kayit_no - 1), SEEK_SET);
  //Dosyanın başından, kayit_no = 4 ise, 3 * struct kadar ileri git.
  //İmleç 4. kayıt noya gidiyor. Bu 3.Index, 4.Satır anlamına geliyor. OKU.

  fread(&okunan, sizeof(stHesap), 1, fp);
  //Dosyadan(fp) oku. 1 * struct boyutu kadar. ve bunu okunan struct'ı içine at.
  printf("Okunan degerler listeleniyor...\n");
  printf("Hesap NO:%d\n", okunan.HesapNo);
  printf("Hesap Sahibi:%s\n", okunan.Isim);
  printf("Hesap Bakiye:%.2f\n", okunan.Bakiye);
  printf("------------------------\n");
}
void Yazdir(int *kayit_no)
{
  fp == NULL ? exit(10) : printf("Dosyaya Kayıt Ediliyor..\n");
  //Dosya açılamadıysa, 10 degerini döndür yoksa kayıt işlemini başlat.
  fseek(fp, sizeof(stHesap) * (*kayit_no - 1), SEEK_SET);
  //Dosyanın başlangıcından, kayit_no = 4. hesap için, 4-1 = 3. index olur.
  //3 * struct boyutu kadar imleci ilerlet.
  //imleç ilerde o halde yazma işlemini başlat.

  fwrite(&hesaplar[*kayit_no - 1], sizeof(stHesap), 1, fp);
  //hesaplar yapısının 3. index'ini dosyaya yaz.
  printf("Dosyaya Yazıldı.\n");
}
void Listele()
{
  int i = 0;
  printf("-----------Listeleme-----------\n");
  for(i = 0; i < index_sayisi - 1; i++)
  {
    printf("Hesap No: %d\n", hesaplar[i].HesapNo);
    printf("Hesap Sahibi: %s\n", hesaplar[i].Isim);
    printf("Hesap Bakiye: %.2f\n", hesaplar[i].Bakiye);
    printf("-----------------------------\n");
  }
}
void bilgiAl()
{
  int i = 0;
  while (1) {
    printf("Hesap NO:");
    scanf("%d", &hesaplar[i].HesapNo);
    if(hesaplar[i].HesapNo == 0)
      break;
    //Hesap no 0 ise, çık. Main'e dön. Yoksa bilgi almaya devam et.
    printf("Hesap Sahibi:");
    scanf("%s", &hesaplar[i].Isim);
    printf("Bakiye :");
    scanf("%f", &hesaplar[i].Bakiye);
    i++;
    hesaplar = realloc(hesaplar, sizeof(stHesap) * (i+1) );
    //Dinamik olarak ayarladıgım için, boyut bu şekilde.
    //i+1 yapılmasının sebebi, i=0 dan başlattıgım için.
    index_sayisi = i + 1; //Burası eleman sayısı ile bagdasıyor. index'in + 1 degeri
  }
}
