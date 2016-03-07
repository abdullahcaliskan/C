#include <stdio.h>
#include <stdlib.h>
float donusum_yap(float,char);
int tip_bas(char);
int main()
{
    char tip;
    float deger;
    printf("Fahrenheit \t--> Celcius icin \tC/c\n"
           "Celcius \t--> Fahrenheit icin \tF/f");
    printf("\nSeciminizi giriniz:");
    scanf("%s",&tip);
    deger=tip_bas(tip);
    if(deger==0)
        return 0;
    scanf("%f",&deger);
    deger=donusum_yap(deger,tip);
    printf("%f",deger);
    return 0;
}
float donusum_yap(float deger,char tip)
{
    if(tip=='F' || tip=='f')
        return ((deger*9)/5)+32;
    else
        return (deger-32)*5/9;
}
int tip_bas(char tip)
{
    if(tip=='F' || tip=='f')
        printf("Celcius degerini giriniz:");
    else if(tip=='C' || tip=='c')
        printf("Fahrenheit degerini giriniz:");
    else
    {
        printf("Yanlis deger girisi.");
        return 0;
    }
    return 1;
}
