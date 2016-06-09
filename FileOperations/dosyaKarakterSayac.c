#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef enum
{
    False,
    True
} Bool;

int harfMi(char);
int boslukMu(char);
int rakamMi(char);

int main(int argC, char **argV)
{
    setlocale(LC_ALL, "Turkish");

    if(argC != 1)
    {
        if(argV[1][0] == 'r')
        {
            printf("Hesaplanıyor.");
            Bool durum;
            durum = harfMi(argV[2][0]);
            if (durum == True)
                printf(" Evet");
            else
                printf(" Hayır");
        }
        else
        {
            printf("Parametre Sıkıntısı");
        }
    }
    else
    {
        Bool deneme;
        FILE *dosya;
        dosya = fopen("apo.txt","r");
        if(dosya == NULL)
            printf("Dosya Açılmadı");
        int sayac[4] = {0};
        char karakter;
        karakter = fgetc(dosya);
        while(karakter != EOF)
        {
            if(boslukMu(karakter))
                sayac[False] += 1;
            else if(harfMi(karakter)) //97 122
                sayac[1] += 1;
            else if(rakamMi(karakter))
                sayac[3] += 1;
            else
                sayac[2] += 1;
            karakter = fgetc(dosya);
        }
        fclose(dosya);
        printf("Boşluk : %d\n"
               "Karakter: %d\n"
               "İşaret : %d\n"
               "Rakam : %d",sayac[0],sayac[1],sayac[2],sayac[3]);
        return 0;
    }
}
int boslukMu(char karakter)
{
    if(karakter == 32)
        return 1;
    else
        return 0;
}
int harfMi(char karakter)
{
    if((karakter >= 65 && karakter <= 90) || (karakter >= 97 && karakter <= 122))
        return 1;
    else
        return 0;
}
int rakamMi(char karakter)
{
    if(karakter >= 48 && karakter <= 57)
        return 1;
    else
        return 0;
}
