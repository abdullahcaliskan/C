#include <stdlib.h>
#include <stdio.h>

int main()
{
  int not;
  printf("Bir not giriniz:");
  scanf("%d",&not);

  switch(not>=90 && not<=100) //Not 90 ile 100 arasında deger olarak 1 gelir. Degilse 0 gelir.
    {
    case 1:
      printf("AA");
      break;
    case 0:
      switch(not>=80) //Burda not <= 90 yapmama gerek yok. zaten not 90 dan büyük olsaydı
	//AA yazar çıkardı.
	{
	case 1:
	  printf("BB");
	case 0: //Demekki not 80 den küçük
	  printf("Bura böyle gidecek");
	  //	  switch()
	}
      break;
    }
}
