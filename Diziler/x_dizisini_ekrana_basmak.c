#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tekrar=1,satir=1,i,j,sayi=1;
    int dizi[4][6];
    //Dizi elemanlarının değerleri atanıyor (START)
    for(i=0; i<4; i++)
    {
        for(j=0; j<6; j++)
        {
            dizi[i][j]=sayi;
            sayi++;
        }
    }
    //Dizi elemanlarının değerleri atanıyor (END)
    while(satir<=9) // 9 Satır ekrana basılana kadar çalış (START)
    {
        if(satir<7) // 6. satirda sütun sona erdigi için 6. sütuna kadar farklı, 6 dan sonra farklı işlemler yapmalıyız.
        {
            j=satir-1; //İstenilen düzende yazdırma çabası. > mesela 2. satır için [0][1] [1][0] yazdırılacak.
            for(i=0; i<tekrar; i++) // Tekrar değişkeni o satırda kaç tane değer olacağı
            {
                printf("%4d",dizi[i][j]);
                j--;
            }
        }
        else // 6. satırdan sonraki işlemler
        {
            j=5; //6. satırdan sonra tüm elemanların sütun değeri 5 ile başlıyor.
            if(satir==9) //Mod işlemi ile i nin ilk sayısını buluyoruz. 9%3 0 olacağından özel koşul ekledik.
                sayi=3;
            else
                sayi=satir%3;
            for(i=sayi;i<tekrar;i++)
            {
                printf("%4d",dizi[i][j]);
                j--;
            }
        }
        if(satir<=3) //3. Satıra kadar tekrar işlemini arttırıyoruz.
            tekrar++;
        satir++;
        printf("\n");
    } // 9 Satır (END)

}
