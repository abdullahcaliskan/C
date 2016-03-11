#include <stdlib.h>
#include <stdio.h>

int main()
{
  int number = 11; //Number değişkeni ve değeri 11
  int *ptrNumber;  //Tamsayi veri tipinin adresi tutulacak.

  ptrNumber = &number; //Adres alındı (Ex. 500-504, int 4 byte)
  // ptrNumber degeri > 500
  printf("Deger : %d\n",*ptrNumber);
  printf("%d | %p \n",ptrNumber);
  
  ptrNumber++;         //ptrNumber = ptrNumber + 1*sizeof(int)
  // ptrNumber degeri > 504
  printf("Deger : %d\n",*ptrNumber);
  //Burada ilginç bir şey almamız gerekli.
  printf("%d | %p \n",ptrNumber); 
}
