#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kacTane_dizi[]={ 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 },i,j,kacTane;
    for(i=0; i<10; i++)
    {
        kacTane=kacTane_dizi[i];
        printf("%d . Eleman Değeri:\t%d\t",i,kacTane);
        for(j=1;j<=kacTane; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
