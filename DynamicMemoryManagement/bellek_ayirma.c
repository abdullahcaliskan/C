#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int *dizi;
  dizi = calloc(1024*1024*1024,sizeof(int)); // 1024 * 4 Byte = 4KB = 4096 Byte
  //Yukarıya bir ekleme yaptım. 4 MB olması lazım
  // Yukarıya bir ekleme daha yaptım. Böylece ayrılan alan 4GB olmus oldu.
  char bas;
  scanf("%c",&bas); // 1 byte'da burda var. = 4097 Byte kullanım olmalı.
  free(dizi);
  //Bu konu hakkında bir not; calloc ile ayırma yaptıgımızda, memory kullanımı tavan yapıyor.
  //Ama malloc ile ayırırsak sadece sanal bellekten kullanım yapmıs oluyoruz.
  return 0;
}
