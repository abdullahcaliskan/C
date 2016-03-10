#include <stdio.h>
#include <stdlib.h>
char kardizBAS(char kardiz[100]);
int main()
{
    char kardiz[100];
    printf("Karakter dizisini giriniz:");
    gets(kardiz);
    kardizBAS(kardiz);
    return 0;
}
char kardizBAS(char kardiz[100])
{
    int i,n=strlen(kardiz);
    printf("Tersten : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%c",kardiz[i]);
    }
}
