#include <stdio.h>
#include <stdlib.h>

long int writeFiboArray(long int, long int, long int);

int main()
{
    long int sonIndex;
    printf("Son index degerini girin:");
    scanf("%ld",&sonIndex);
    writeFiboArray(0,1,sonIndex);
    return 0;
}
// i=0 j=1 i+j=1 2 3 5 8 13 ...
// 0 1 1 2 3 5 8 13 ...
long int writeFiboArray(long int i, long int j, long int sonIndex)
{
    long int toplam;
    if(i==0)
        printf("1 ");
    if(sonIndex<=1)
        return i+j;
    toplam=i+j; //toplam = 1
    i=j; // i=1 j=1
    j=toplam; // j=toplam oluyor. j=1
    printf("%lu ",toplam);
    writeFiboArray(i,j,sonIndex-1);
}
