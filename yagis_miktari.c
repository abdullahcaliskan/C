#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double ortalama(double,int);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Turkish");
	double yagis_miktari[12][30],yillik=0;
	char aylar[12][20]={"Ocak","Şubat","Mart","Nisan","Mayıs","Haziran","Temmuz","Ağustos","Eylül","Ekim","Kasım","Aralık"};
	int i,j;
	for(i=0;i<12;i++)
	{
		for(j=0;j<30;j++)
		{
			printf("%d. Ay %d. Gün Düşen yağış miktarı : \n",i,j);
			yagis_miktari[i][j]=j;
		}
	}
	double toplam=0;
	for(i=0;i<12;i++)
	{
		toplam=0;
		for(j=0;j<30;j++)
		{
			toplam=toplam+yagis_miktari[i][j];
		}
		yillik=yillik+toplam;
		printf("%d. Ay: %s\n",i+1,aylar[i]);
		printf("--------------------------\n");
		printf("Ortalama Günlük : %.3f\n",ortalama(toplam,30));
		printf("Toplam Düşen Yağış : %.3f\n",toplam);
	}
	printf("Yillik oran = %.3f",yillik);
	return 0;
}
double ortalama(double deger,int sayi)
{
	return (deger/sayi);
}

