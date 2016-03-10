#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    int y;
}NOKTALAR;

typedef struct
{
    NOKTALAR nokta_baslangic;
    NOKTALAR nokta_bitis;
}KENARLAR;

typedef struct
{
    KENARLAR sol_kenar;
    KENARLAR sag_kenar;
    KENARLAR alt_kenar;
}UCGEN;
int main()
{
    UCGEN ucgen;

    ucgen.sol_kenar.nokta_baslangic.x = 4;
    ucgen.sol_kenar.nokta_baslangic.y = 5;
    ucgen.sol_kenar.nokta_bitis.x = 0;
    ucgen.sol_kenar.nokta_bitis.y = 0;
}
 
