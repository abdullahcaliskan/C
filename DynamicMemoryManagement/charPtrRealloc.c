#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *substr(char *kardiz, int *konum, int *);

int main(int argc, char const *argv[]) {

  char *ptr = calloc(100, sizeof(char)); //100 Bytelık bir alan istedim.
  printf("Bir Cümle Giriniz:");
  scanf("%s", ptr);
  ptr = realloc(ptr, (strlen(ptr) + 1) );
  //Burada strlen + 1 yapmamdaki amaç: \0 sonlandırıcı karakterin eklenebilmesi içindir.
  int konum;
  printf("Başlangıç konumunu giriniz:");
  scanf("%d", &konum);
  int kac_oge;
  printf("Başlangıçtan itibaren kaç kelime:");
  scanf("%d", &kac_oge);

  char *new_kardiz;
  new_kardiz = substr(ptr, &konum, &kac_oge);
  printf(new_kardiz);

  return 0;
}
char *substr(char *kardiz, int *konum, int *oge_sayisi)
{
  int i,j=0;
  char *yeni_kardiz = malloc(1);
  for(i = *konum; j < *oge_sayisi; i++)
  {
    yeni_kardiz[j] = kardiz[i];
    yeni_kardiz = realloc(yeni_kardiz, (strlen(yeni_kardiz)+1) );
    j++;
  }
  return yeni_kardiz;
}
