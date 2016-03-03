#include <stdio.h>
#include <stdlib.h>

int sayiyi_gir();
int basamak_sayisi(int);

int main(int argc , char *argv[])
{
    int sayi;
    sayi=sayiyi_gir();
    sayi=basamak_sayisi(sayi);
    printf("%d Basamaklidir.",sayi);
    return 0;
}
int basamak_sayisi(int sayi)
{
    int basamak=1,mod=10,mod_sonucu;
    if(sayi<10)
        return 1;
    do
    {
        mod_sonucu=sayi%mod;
        sayi-=mod_sonucu;
        sayi/=10;
        mod+=10;
        basamak+=1;
    }
    while(sayi>=10);
    return basamak;
}
int sayiyi_gir()
{
    int girdi;
    while(1)
    {
        printf("Pozitif bir sayi giriniz:");
        scanf("%d",&girdi);
        if(girdi>=0)
        {
            break;
        }
    }
    return girdi;
}
