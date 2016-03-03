#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,dizi[6]={5,2,7,6,8,1},sirali_dizi[6],en_kucuk,en_index,a;
    for(i=6;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(j==0)
            {
                en_kucuk=dizi[0];
                en_index=0;
            }
            else
            {
                if(en_kucuk<dizi[j])
                {
                    continue;
                }
                else
                {
                    en_kucuk=dizi[j];
                    en_index=j;
                }
            }
        }
        a=dizi[i-1];
        dizi[en_index]=a;
        dizi[i-1]=en_kucuk;
        sirali_dizi[i-1]=en_kucuk;
    }
    for (i=0; i<6;i++)
    {
        printf("%d\n",sirali_dizi[i]);
    }
    return 0;
}
