nclude <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char stringConcat(char a[], char b[], char c[], int an, int bn);

int main(int argc, char *argv[]) {
	char kardiz1[100], kardiz2[100];
	printf("1. Diziyi girin:");
	gets(kardiz1);
	printf("2. Diziyi girin:");
	gets(kardiz2);
	char kardiz3[200];
	
	stringConcat(kardiz1,kardiz2,kardiz3,strlen(kardiz1),strlen(kardiz2));
	printf(kardiz3);
	return 0;
}
char stringConcat(char a[], char b[], char c[], int an, int bn)
{
	int i,j;
	for(i=0; i<an; i++)
	{
		c[i]=a[i];
	}
	c[i]=' ';
	i++;
	int syc=0;
	for(j=i; syc<bn; j++)
	{
		c[j]=b[syc];
		syc++;
	}
	
}

