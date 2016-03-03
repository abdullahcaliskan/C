#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long int privateFibonacci(long int);

int main()
{
    setlocale(LC_ALL,"Turkish");
    //F(n) = F(n-1) + F(n-2)
    //F(2) = F(1)   + F(0)
    //F(3) = F(2)   + F(1)
    //Yukarıdaki fonk. bakılınca f(1) ler ortak demekki;
    //F(5) = F(4)   + F(3)

    //F(5) = 3      + 2
    //Fonk. parametresi n degeri olmali. ayrıca index sayısı.
    int index;
    printf("Kaçıncı index degerini öğrenmek istiyorsunuz? > ");
    scanf("%d",&index);
    printf("%lu\n",privateFibonacci(index));
    return 0;
}
long int privateFibonacci(long int n)
{
    if(n<=2)
        return 1;
    return privateFibonacci(n-1)+privateFibonacci(n-2);
}
