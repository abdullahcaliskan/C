#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{

    char sifre [24]= {'x','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z'};
    char name[100];
    char karakter;
    int i,j;
    printf("Adini gir:");
    gets(name);
    for(i=0; i<strlen(name); i++)
    {
        for(j=0; j<24; j++)
        {
            if (name[i]==sifre[j])
            {
                //int result=(5*j+4)%24;
		int result=j+1;
		if(result>23)
			result=0;
                printf("%c",sifre[result]);
            }
        }

    }

    scanf("%s",&karakter);
    return 0;
}
