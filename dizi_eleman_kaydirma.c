#include <stdio.h>
#include <stdlib.h>

int eleman_kaydir(int[], char, int);

int main()
{
    int n,i;
    printf("Dizi kac elemanlı olacak");
    scanf("%d",&n);
    int dizi[n];
    for(i=0;i<n;i++)
    {
        printf("%d. Elemanı giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }
    eleman_kaydir(dizi,'D',n);
    //Fonksiyona gönderilen D düz T ise ters demektir. 
    printf("Düz : %d\n",dizi[2]);
    return 0;
}
int eleman_kaydir(int oDizi[], char order_by, int n)
{
    int i,a;
    if(order_by=='D')
    {
        for(i=0;i<n-1;i++)
        {
            a=oDizi[i];
            oDizi[i]=oDizi[i+1];
            oDizi[i+1]=a;
        }
    }
    else
    {
        for(i=n-1;i>0;i--)
        {
            a=oDizi[i];
            oDizi[i]=oDizi[i-1];
            oDizi[i-1]=a;
        }
    }
}
