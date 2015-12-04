#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* >>>>>>>>>>>>>>>>>>>>>>>> Function/Method Sector  (START) <<<<<<<<<<<<<<<<<<<<<< */
int sumXY(int dizi1[6],int dizi2[6])
{
    //X dizisinin 0. indisiyle Y dizisinin 0. indisini çarpar ve sonucu toplam'a atar.
    int i,toplam=0;
    for(i=0;i<6;i++)
    {
        toplam=toplam+(dizi1[i]*dizi2[i]);
    }
    return toplam;
}

int sumX(int dizi1[6])
{
    //X dizisinin elemanlarını toplar.
    int toplam=0,i;
    for(i=0;i<6;i++)
    {
        toplam=toplam+(dizi1[i]);
    }
    return toplam;
}

int sumY(int dizi2[6])
{
    //Y dizisinin elemanlarını toplar.
    int toplam=0,i;
    for(i=0;i<6;i++)
    {
        toplam=toplam+(dizi2[i]);
    }
    return toplam;
}

int sumXX(int dizi1[6])
{
    //X dizisinin elemanlarının karelerini alıp toplar. X^2.
    int toplam=0,i;
    for(i=0;i<6;i++)
    {
        toplam=toplam+(dizi1[i]*dizi1[i]);
    }
    return toplam;
}

int sumYY(int dizi2[6])
{
    //Y dizisinin elemanlarının karelerini alıp toplar. Y^2.
    int toplam=0,i;
    for(i=0;i<6;i++)
    {
        toplam=toplam+(dizi2[i]*dizi2[i]);
    }
    return toplam;
}


/* >>>>>>>>>>>>>>>>>>>>>>>> Function/Method Sector  (END) <<<<<<<<<<<<<<<<<<<<<<<< */

int main()
{
    /* Definition Sector (START) */
    int x[]={15,18,20,24,15,29};
    int y[]={25,23,19,27,18,28};
    double r;
    int toplamXY, toplamX, toplamY, toplamXX, toplamYY;
    /* Definition Sector (END) */
    /*Operation Sector (START) */
    toplamXY=sumXY(x,y);
    toplamX=sumX(x);
    toplamY=sumY(y);
    toplamXX=sumXX(x);
    toplamYY=sumYY(y);
    /* Operation Sector (END) */
    /* Korelasyon START */
    r=(toplamXY-(toplamX*toplamY/6));
    r=r / (sqrt( (toplamXX-(toplamX*toplamX/6)) * (toplamYY-(toplamY*toplamY/6))));
    printf("Korelasyon Katsayısı = %f\n",r);
    /* Korelasyon END */
    return 0;
}
