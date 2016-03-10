#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i;
	printf("Kac deger gireceksiniz.");
	scanf("%d",&n);
	int dizi[n];
	int deger;
	int en_buyuk;
	for ( i=0; i<n; i++)
	{
		printf("Deger giriniz:");
		scanf("%d",&deger);
		dizi[i]=deger;
	}
	for ( i=0; i<n; i++)
	{
		if(i==0)
		{
			en_buyuk=dizi[i];
		}
		else
		{
			if(en_buyuk>dizi[i])
			{
				continue;
			}
			else
			{
				en_buyuk=dizi[i];
			}
		}
	}
	printf("%d",en_buyuk);
	return 0;
}

