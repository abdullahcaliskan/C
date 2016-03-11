#include <stdio.h>
#include <stdlib.h>

int nDegeri(char []);
int skalerCarpim(int , int , int [*][*], int);
int degerAl(int , int , int matrix[*][*]);

int main()
{
    //int satir=nDegeri('satir');
    //int sutun=nDegeri('sutun');
    int satir=3, sutun=3;
    int matrix[satir][sutun];
    degerAl(satir,sutun,matrix);
    int sabit;
    printf("Sabiti giriniz:");
    scanf("%d",&sabit);

    skalerCarpim(satir,sutun,matrix,sabit);
    matrixBas(satir,sutun,matrix);
    return 0;
}
int degerAl(int satir, int sutun, int matrix[satir][sutun])
{
    int i,j;
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%d. Satır %d. Sutun Elemanını giriniz:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
int matrixBas(int satir, int sutun, int matrix[satir][sutun])
{
    int i,j;
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
}
int skalerCarpim(int satir, int sutun, int matrix[satir][sutun], int sabit)
{
    int i,j;
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
        {
            matrix[i][j]=matrix[i][j]*sabit;
        }
    }
}
int nDegeri(char hucre[5])
{
    int n;
    printf(hucre);
    printf(" degerini giriniz:");
    scanf("%d",&n);
    return n;
}

