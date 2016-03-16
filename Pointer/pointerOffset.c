#include <stdlib.h>
#include <stdio.h>

int main()
{
  int dizi[10], *p, i, *ptr;
  dizi[0] = 10;
  dizi[1] = 20;
  p = dizi;
  // Dizinin ilk elemanının adresini p pointer'ina atadık.
  ptr = &dizi[0];
  // Dizinin ilk elemanının adresini p pointer'ina atadık.

  printf(" p %p\n ptr %p\n",*p,*ptr);

  ptr++;
  //Yukarıdaki işlem ile. dizi[1] degerinin adresini tutmaya başladık. sebebi.
  //dizi[0] adresi : 500 ise 4 byte ekler. 504 olur. Diziler, RAM de arka arkaya gelir. Yani sıralıdır!!!
  //pointerimizin adresini arttırıyor ve dizi[1] degerinin adresini almıs olduk.

  printf("dizi[0] = %d\n",*p); //*p : 500. adresten 4 byte ileri 500,501,502,503 hücrelerindeki degerleri verir.
  printf("dizi[1] = %d\n",*ptr); // *ptr : Az önce 504 yapmıstık. yani 504,505,506,507 hücrelerindeki degerleri verir.
  printf("dizi[1] = %d\n",*(p+1)); // *(p+1) = *ptr demek. Yani ptr ye yaptıgımız şeyi p+1 ile yaptık.
  //*(p+1) deki 1, pointer ' in offset'idir.
  //Offset : Dizinin kaçıncı elemanının kullanılacagını belirtir. Bir nevi index.  
}
