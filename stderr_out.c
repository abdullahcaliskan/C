#include <stdlib.h>
#include <stdio.h>



int main()
{
	// stderr dosyası buffered degildir. Yani yazılan şey anında ekranda görülür.
	// Ama stdout dosyası buffered'dır. Yani, yazılan şey dosya kapatılana kadar yazılmaz. Yada, program kapatılana kadar

	// Ekrana bir anda yazar. Ama program kapatılana kadar. eger \n kullanırsak ekrana direkt yazar.
	// Çünkü dosya flush edilmiş oluyor. Performans açısından, dosyayı bu şekilde flush edebiliriz.
	for (int i = 0; i < 5; i++){
		printf("%d", i);
		sleep(1);
	}

	// Ekrana 1 saniye bekleyip yazar.
	for (int i = 0; i < 5; i++) {
		fprintf(stderr, "%d\n",i);
		sleep(1);
	}
	
}