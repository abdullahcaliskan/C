#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sayiyi_gir();
int basamak_sayisi(int);
float doReel(int, int);

int main(int argc , char *argv[])
{
    printf("ArgC=%d\n",argc);
    printf("ArgV=%s\n",argv[1]);
    int sayi;
    sayi=sayiyi_gir();
    int sayi2=sayiyi_gir();
    printf("%f",doReel(sayi,sayi2));
    return 0;
}
float doReel(int sayi1, int sayi2)
{
    float sonuc;
    sonuc=sayi1 + (sayi2*1.0/pow(10,basamak_sayisi(sayi2)));
    return sonuc;
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
