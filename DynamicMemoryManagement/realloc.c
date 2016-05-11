#include <stdlib.h>
#include <stdio.h>

int main()
{
  /*
    void *malloc(size_t size)
    void *calloc(size_t nitems, size_t size)
    void *[cm]alloc( kaç tane , boyut ) Sıralamamız bu şekilde.
    void *realloc(void *ptr, size_t size)
    
    Dinamik bellek yönetiminde asıl iş, yer ayırmak değil. Onu program
    esnasında değiştirebilmektir. Çünkü, normal tanımlama ile dinamik olarak ayırmak arasında bir fark yoktur.
   */

  int *dynamic;
  dynamic = malloc(sizeof(int)); //4 Bytelık alan olusturduk
  *dynamic = 1; 
  printf("%d\n",*dynamic);
  dynamic = realloc(dynamic, 2*sizeof(int)); // 8 byte olarak arttırdım.
  printf("%d %d\n",dynamic[0],*(dynamic+1));
  printf("%d\n",sizeof(dynamic));

  free(dynamic); //Alanı boşalttık
}
