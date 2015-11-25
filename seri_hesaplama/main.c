#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("2n-1/x^2n Serisinin Hesabı\n");
    int n,i,j;
    float x,seri=0;
    printf("Pozitif Tam Sayı:");
    scanf("%d",&n);
    printf("Reel Sayi:");
    scanf("%f",&x);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<(2*i);j++)
        {
            x*=x;
        }
        seri=seri+(((2*i)-1)/x);
    }
    printf("Seri = %.2f",seri);
    return 0;
}
