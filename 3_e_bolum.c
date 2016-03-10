#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,is,birler,syc=0;
    for(i=100;i<=999;i++)
    {
        is=i;
        birler=is%10;
        is-=birler;
        if(is%100==80)
        {
            if(i%3==0)
            {
                syc++;
                printf("%d sayısı 3 e bölünür\n",i);
            }
        }
    }
    printf("Toplamda: %d tane var\n",syc);
    return 0;
}
