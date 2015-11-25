#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sayi,durum=0;
    printf("Sayi giriniz\n");
    scanf("%d",&sayi);
    for(i=2; i<sayi; i++)
    {
        if(sayi%i==0)
        {
            printf("Asal degildir!\n");
            printf("%d e bolunuyor...\n",i);
            break;
        }
    }
    if(i==sayi)
    {
        printf("Asaldir!");
    }
    return 0;
}
