#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int);

int main()
{
    int sayi;
    printf("Faktöriyeli Hesaplanacak sayıyı giriniz:");
    scanf("%d",&sayi);
    printf("%d",faktoriyel(sayi));
    return 0;
}
int faktoriyel(int sayi)
{
    int sonuc=1;
    if(sayi<=1)
        return 1;
    sonuc=sayi*faktoriyel(sayi-1);
    return sonuc;
}
