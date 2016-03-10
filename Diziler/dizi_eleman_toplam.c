#include <stdio.h>
#include <stdlib.h>

int topla(int [], int [], int);
int degerGir(int [], int);
int nDegeri();

int main()
{
    int n=nDegeri();
    int dizi[n];
    degerGir(dizi,n);
    int dizi2[n];
    degerGir(dizi2,n);
    printf("%d",topla(dizi,dizi2,n));
    return 0;
}
int topla(int dizi[], int dizi2[], int n)
{
    int i,toplam=0;
    for(i=0;i<n;i++)
    {
        toplam+=dizi[i]+dizi2[i];
    }
    return toplam;
}
int degerGir(int liste[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d. Elemanı giriniz:",i+1);
        scanf("%d",&liste[i]);
    }
}
int nDegeri()
{
    int n;
    printf("Kaç eleman gireceksiniz:");
    scanf("%d",&n);
    return n;
}
