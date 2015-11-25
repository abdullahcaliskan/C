#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kenar=4,satir,j;
    for(satir=1;satir<=kenar;satir++)
    {
        //Satırdan önce boşluk bırakıyoruz ki tepe noktası ortada olsun
        for(j=1;j<=kenar-satir;j++)
        {
            printf(" ");
        }
        //Kaç yıldız olacagını belirtip yıldızları yazdırıyoruz.
        for(j=1;j<=(2*satir-1);j++)
        {
            printf("*");
        }
        //alt satıra geçiş ana döngü içinde olmalı
        printf("\n");
    }
    //Dörtgeni tersten yazdırıyoruz. Fakat kenar-1 olmalı. 4 kere degil 3 kere yazdırmamız gerekiyor.
    for(satir=kenar-1;satir>=1;satir--)
    {
        //Burada tersten geldiğimiz için yukarıdaki koda benzer
        for(j=1;j<=kenar-satir;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*satir-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
