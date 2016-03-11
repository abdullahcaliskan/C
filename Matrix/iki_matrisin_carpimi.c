#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[2][2]={1,2,3,4};
    int m2[2][2]={1,2,3,4};
    int satir,sutun,i,j,top=0,k=0,s=0;
    int a=2,b=2,c=2,d=2;
    int m3[2][2];
    int syc=2;
    for(satir=0;satir<a;satir++)
    {
        for(sutun=0;sutun<d;sutun++)
        {
            for(i=0;i<a;i++)
            {
                top=0;
                k=0;
                s=0;
                for(j=0;j<b;j++)
                {
                    top+=m1[i][j]*m2[k][s];
                    k++;
                }
                i++;
                s++;
                m3[satir][sutun]=top;
                sutun++;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%4d",m3[i][j]);
        }
        printf("\n");
    }
}
