#include <stdlib.h>
#include <stdio.h>
/*
Pointer ile diziler ilişkilidir. Dizinin herhangi bir elemanına 
pointer ile erişilebilir.
 */
int main()
{
  int dizi[10], *p, i;
  for(i=0; i<10; i++)
    {
      dizi[i]=i;
    }
  // Dizilere sırasıyla 0, 1, 2, 3, 4, .....9 degerlerini atadık.
  printf("Sizeof : %d\n",sizeof(dizi));
  // 4 * 10 = 40 byte yazmalı.
  p = dizi;
  // Dizinin adresini aldık. p işaretcimize.
  printf("%d | %p\n Deger : %d\n",p,p,*p);
  // Dizinin adresini veya pointerin degerini ekrana yaz. Ayrıca pointerın işaret ettiği adresteki değeri bas.
  p++;
  // Pointerin işaret ettigi adres 4 byte kadar ileri gitsin. (ex. 400(dizi[0]) > 404(dizi[1]))
  printf("%d | %p\n Deger : %d\n",p,p,*p);
  
}
