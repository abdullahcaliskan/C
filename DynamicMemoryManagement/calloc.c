#include <stdlib.h>
#include <stdio.h>

int main()
{
  /*
    void *calloc(size_t nitems, size_t size)
    void *malloc(size_t size)
    Bunları akılda tutabilmek için, şu forma çevirelim.
    
    void *calloc(blok sayisi, blok boyutu)
    void *malloc(blok sayisi * blok_boyutu) 

    Bu sekilde akılda tutmak daha kolay olacaktır diye düşünüyorum.
    Peki bu iki fonksiyon arasındaki fark nedir?
    malloc istenilen alanı ayırır ve ayırdıgı alanı işaret eden bir pointer geri döndürür.
    calloc istenilen alanı ayırır ve içine 0 doldurur. Ayırdığı alanı işaret eden bir pointer geri döndürür.
    
   */

  int *dynamic_M;
  int *dynamic_C;

  dynamic_M = (int *) malloc(3 * sizeof(int)); // (int *) gelen tipi dönüştürme işlemine tabii tutuyor. yazmasakta olur.
  dynamic_C = calloc(3, sizeof(int)); // 3 blok ayır, 4 bytelık olsun :)

  printf("Malloc Degeri : %d\n",dynamic_M[0]); 
  printf("Malloc Degeri : %d\n",dynamic_M[1]);
  //Eğer ki burdaki değerleri 0 görüyorsanız sebebi, derleyiciniz bu alanları kendisi 0 lamış olabilir.
  printf("Calloc Degeri : %d\n",dynamic_C[0]);
}
