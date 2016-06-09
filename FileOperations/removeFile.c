#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  FILE *fp = fopen("remove.txt", "w+");
  char *icerik = "rastgele icerik";
  if ( fputs(icerik, fp) != -1)
  //-1 Döndürürse veya EOF, hata çıkmıstır.
  {
    printf("Dosyaya Yazıldı\n");
    printf("Dosyadan Okuma Başlıyor...\n");
    char content[50];
    rewind(fp); //İmleci başa getir.
    if ( fgets(content, 50, fp) != NULL ) //Dosyadan başarılı. OKUNDU.
    {
      printf("Dosyadan okuma başarılı\n");
      printf("okunan deger : %s\n", content);
      printf("Dosya kaldırılıyor... \n");
      if ( remove("remove.txt") == 0 )
        printf("Dosya silindi.\n");
      else
        printf("Dosya Silinemedi.\n");


    }
    else
      printf("Error Oluştu."); //Burada, dosyadan okunamıyor.
  }
  else //Error. Dosyaya yazılamadı.
    printf("Bir Hata Oluştu\n");
  return 0;
}
