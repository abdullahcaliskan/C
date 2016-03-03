#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Binary Search: Sıralı bir dizide arama yapma algoritmasıdır. Her seferinde aranılan ifadeyi dizinin orta ifadesine eşitmi
    diye sorgular. Eşit olmaması durumunda aranılan ifadenin hangi yarıda oldugu kontrol edilir. ve yeni dizimiz artık aranan
    ifadenin bulunduğu yarıdır. Böylece büyük dizilerde arama işlemi yapılırken arama yapılacak değer azaltılır. Böylece makine daha
    az işlem yapar. daha performanslı çalışır.
    */

    //Dizinin elemanlarını kullanıcıdan isteyelim.
    int eleman_sayisi,eleman,i,aranacak,orta;
    //Normalde böyle bir dizide arama yaparken. veriler ya databaseden gelir yada ağ üzerinden bir makineden gelebilir.
    //Ben burda binary search algoritmasını gösterebilmek için bu şekilde oluşturuyorum.
    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&eleman_sayisi);
    int dizi[eleman_sayisi]; // Dizimizi eleman sayısına göre oluşturduk.
    int baslangic=0,son=eleman_sayisi-1;
    for(i=0; i<eleman_sayisi; i++)//döngüde kullanıcıdan dizinin elemanlarını girmesini istiyoruz.
    {
        printf("Dizinin %d. elemanını giriniz:",i);
        scanf("%d",&eleman); // Girilen sayı değerini eleman değişkeni içine alıyoruz.
        dizi[i]=eleman; // Girilen değeri dizimize ekliyoruz.
    }
    printf("Aranacak değeri giriniz:");
    scanf("%d",&aranacak);
    orta=(baslangic+son)/2;
    while(baslangic<=son) // Baslangıç değerimiz sona gelene kadar çalış. Yani sonun üstüne çıkma indis anlamında.
    {
        if(aranacak<dizi[orta])
        {
            son=orta-1;
            orta=(baslangic+son)/2;
        }
        else if(aranacak==dizi[orta])
        {
            printf("Aranan ifade %d indisinde bulundu",orta);
            break;
        }
        else
        {
            baslangic=orta+1;
        }
    }
    if(baslangic>son)
    {
        printf("Aranan ifade bulunamadı");
    }
    return 0;
}
