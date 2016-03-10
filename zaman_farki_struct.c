#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int saat;
    int dakika;
    int saniye;
} ZAMAN;

ZAMAN FarkBul(ZAMAN, ZAMAN);
ZAMAN DegerAl();
void Listele(ZAMAN);

int main()
{
    ZAMAN baslangic, bitis, fark;
    printf("Baslangici Giriniz \n");
    baslangic = DegerAl();
    printf("Bitisi Giriniz\n");
    bitis = DegerAl();
    fark = FarkBul(baslangic, bitis);
    Listele(fark);
    return 0;
}
void Listele(ZAMAN fark_sure)
{
    printf("Zaman > Saat : %d Dakika : %d Saniye : %d",fark_sure.saat, fark_sure.dakika, fark_sure.saniye);
}

ZAMAN DegerAl()
{
    ZAMAN sure;
    printf("Saat Gir :");
    scanf("%d",&sure.saat);
    printf("Dakika Gir :");
    scanf("%d",&sure.dakika);
    printf("Saniye Gir :");
    scanf("%d",&sure.saniye);
    return sure;
}

ZAMAN FarkBul(ZAMAN baslangic, ZAMAN bitis)
{
    ZAMAN fark;
    int kalan;
    kalan = bitis.saniye - baslangic.saniye;
    if(kalan < 0)
    {
        bitis.dakika--;
        bitis.saniye += 60;
        kalan = bitis.saniye - baslangic.saniye;
    }
    fark.saniye = kalan;
    kalan = bitis.dakika - baslangic.dakika;
    if(kalan < 0)
    {
        bitis.saat--;
        bitis.dakika += 60;
        kalan = bitis.dakika - baslangic.dakika;
    }
    fark.dakika = kalan;
    kalan = bitis.saat - baslangic.saat;
    fark.saat = kalan;
    return fark;
}
