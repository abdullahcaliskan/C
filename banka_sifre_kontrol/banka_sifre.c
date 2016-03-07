/*
Bir bankanın şifre kuralları aşağıdaki gibidir (acaba hangi banka?)
Kullanıcı şifresini degistirmek için giriş yaptığında bu kurallara uygun girip girmediğini denetleyecek programı yazın.
Uygunsuz şifre durumunda kullanıcıya nedenini de belirtecek şekilde yapın.
Karakter dizileri ve fonksiyon kullanarak yapmaya çalışın.
* 5 rakamdan oluşmalıdır. OK
* Son 3 şifrenizle aynı olamaz. (Egzersiz için koşullara uyan son 3 şifreyi sabit olarak belirleyin)OK
* 11111 , 22222 gibi aynı rakamlardan oluşamaz. OK
* 0 (Sıfır)ile başlayamaz.OK
* 12345, 34567 gibi ardışık rakamlardan oluşamaz. OK
* 1900 den bulunduğumuz yıla kadar olan yılları içeremez (Örn:1978).OK
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int bes_rakam_mi(int n, char sifre[n]);
int prev_pass_same(int n, char sifre[n]);
int same_number(int n, char sifre[n]);
int started_zero(int n,char sifre[n]);
int ardisik_sayi(int n, char sifre[n]);
int yil_icerme(int n, char sifre[n]);

int main()
{
    int n=5;
    int hata_say=6,sinir=6;
    int hata_mesajlari[hata_say];
    char sifre[n];
    printf("Sifrenizi giriniz:");
    gets(sifre);
    //Hatalar bir matriste tutuluyor.
    char hatalar[6][100]={"\nSifreniz 5 rakamdan olusmali",
                          "\nSifreniz eski sifrelerinizden farkli olmali",
                          "\nSifreniz ayni numaralardan olusamaz",
                          "\nSifrenizin ilk degeri 0 olamaz",
                          "\nSifreniz ardisik sayilardan olusmamali",
                          "\nSifreniz yil icermemeli"};
    //Hata mesajlari adli dizi sayesinde hataların varlıgı/yoklugu 1/0 seklinde atanıyor.
    hata_mesajlari[0]=bes_rakam_mi(n,sifre);
    hata_mesajlari[1]=prev_pass_same(n,sifre);
    hata_mesajlari[2]=same_number(n,sifre);
    hata_mesajlari[3]=started_zero(n,sifre);
    hata_mesajlari[4]=ardisik_sayi(n,sifre);
    hata_mesajlari[5]=yil_icerme(n,sifre);
    int i;
    //Hatalar ekrana basiliyor
    for(i=0;i<hata_say;i++)
    {
        if(hata_mesajlari[i]==1)
        {
            if(i==0)
                printf("< Hatalar >");
            printf(hatalar[i]);
        }
    }
    return 0;
}
int yil_icerme(int n, char sifre[n])
{
    //1900 - 2015 tarihleri sifre icinde varmi? Varsa 1 yoksa 0
    int a=49,b=57; // ASCII kod karsılıgı
    int i,durum=0;
    for(i=0;i<2;i++)
    {
        a=sifre[i];
        b=sifre[i+1];
        if(a==49 && b==57)
        {
            durum=1;
        }
        else if(a==50 && b==48)
        {
            if((sifre[i+2]==48 || sifre[i+2]==49) && (sifre[i+3]>=48 && sifre[i+3]<=53))
                durum=1;
        }
    }
    return durum;
}
int ardisik_sayi(int n, char sifre[n])
{
    //Sifre ardisik sayilardan mi olusuyor. Varsa 1 yoksa 0
    int i,durum=0,a,b;
    for(i=0;i<n-1;i++)
    {
        a=sifre[i];
        b=sifre[i+1];
        if(a+1==b)
            durum=1;
        else
        {
            durum=0;
            break;
        }
    }
    return durum;
}
int started_zero(int n,char sifre[n])
{
    //sifre 0 ile mi baslamis basladiysa 1 yoksa 0
    if(sifre[0]=='0')
        return 1;
    return 0;
}
int same_number(int n, char sifre[n])
{
    //kendini tekrar eden sayilar varmi varsa 1 yoksa 0
    int i,durum=0;
    for(i=0;i<n-1;i++)//01900
    {
        if(sifre[i]==sifre[i+1])
            durum=1;
        else
        {
            durum=0;
            break;
        }
    }
    return durum;
}
int prev_pass_same(int n, char sifre[n])
{
    //sifre önceki sifreler ile eslesiyor mu? evet ise 1 degil ise 0
    char prev_passwords[15]="859677296225963";
    int durum=0,i,j=0;
    for(i=0;i<15;i++)
    {
        if(prev_passwords[i]==sifre[j])
            durum=1;
        if(i%4==0)
        {
            if(durum==1)
                break;
            j=0;
        }

    }
    return durum;
}
int bes_rakam_mi(int n, char sifre[n])
{
    //sifre 5 rakamdan mi olusmus evet ise 0 degilse 1
    int i;
    if(strlen(sifre)==5)
    {
        for(i=0; i<n; i++)
        {
            if(!isdigit(sifre[i]))//isdigit ctype.h kütüphanesinden gelir. sayi midir?
                return 1;
        }
        return 0;
    }
    return 1;
}

