#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cift_sayilar[50],i; // cift_sayilar dizisi içinde max. 98 vardır.
    //Aşağıdaki döngü yardımıyla 0,2,4 şeklinde devam eden sayıları indisleri ile çarparak dizimize aktarıyoruz.
    for(i=0; i<50; i++)
    {
        cift_sayilar[i]=2*i;
    }
    //Aranacak sayıyı kullanıcıdan isteyelim
    printf("Aranacak Sayıyı giriniz:");
    int ara;
    scanf("%d",&ara);
    for (i=0;i<50;i++)
    {
        if(ara==cift_sayilar[i])
        {
            printf("Aranan sayı %d indisinde bulundu.",i);
            break;
        }

    }
    return 0;
}
