nclude <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//97 > 122

char temizle(char dizi[],int boyut);

int main(int argc, char *argv[]) {
	char a[]="al?go**rit-ma";
	temizle(a,strlen(a));
	printf(a);

	return 0;
}
char temizle(char dizi[],int boyut)
{
	int i,j,k,syc=0;
	int asc;
	for(i=0;i<boyut;i++)
	{
		asc=dizi[i];
		if(asc>=97 && asc<=122)
		{
			continue;
		}
		else
		{
			k=0;
			for(j=i;k<boyut-i-1;j++)
			{
				dizi[j]=dizi[j+1];
				k++;
			}
			syc++;
		}
		i=i-1;

	}
    dizi[boyut-syc]='\0';
}

