#include <stdlib.h>
#include <stdio.h>

int main()
{
  /*
    Dinamik bellek yönetimi: Bundan önceki örneklerimizde, dizilere tahmini olarak sabit bir eleman sayısı veriyorduk.
    Bu yaklaşım bize şu dezavantajları getiriyor;
    1-Etkinlikten Yoksunluk : Etkinlik, sistem kaynaklarının ideal ve uygun bir şekilde kullanılmasıdır.
    Yani RAM'de gereksiz yere alan işgal etmemize sebep oluyor. Sunucu taraflı olarak veya büyük projelerde RAM yönetimi gerçekten önemlidir.
    
    Kısacası : Dinamik bellek yönetimi ile, iyi programcı ve kötü programcı ayırt edilir. Be Good Programmer :)

    void *malloc(size_t size) << malloc fonksiyonu bu şekilde tanımlanmıştır.
    Buradaki, size_t size: RAM Bellekte kaç bytelık alan ayrılsın? Biz buraya elimiz ile 20 Byte yazabiliriz.
    Bu kullanım tarzını yapmayın. Çünkü kullandıgınız derleyici mesela int veri tipi için 4byte * 5 de olabilir. 8byte * 5 te olabilir.
    kısaca siz, kullandıgınız veri tipinin ne kadar alan kapladığını sizeof() oparetörü ile çekin ve kaç tane blok istediginizi yazın.
    Birde *malloc tan anlayacagımız üzere geri dönüş değeri bir pointer'mış. Ancak veri tipini biz belirleyecegiz. Void.
   */

  int *dynamic; // Dinamik bir dizi yapabilmek için, pointer kullanıyoruz/tanımlıyoruz.

  dynamic = (int*) malloc( sizeof(int) * 5 ); // int veri tipinin boyutundan 5 tane yapıyoruz. ex; 4 * 5 = 20 byte

  if(dynamic == NULL) // İstedigimiz alan yoksa? RAM yetersiz kaldıysa?
    {
      printf("Yetersiz RAM Kapasitesi.");
      return(-10); //Yazılım dökümanına ekleyin. -10 geri dönüş degeri
      //Yetersiz RAM oldugunu gösterir.
    }
  
  *dynamic = 1;
  printf("%d\n",*dynamic);

  *(dynamic + 0) = 2;
  printf("%d\n",*(dynamic+0));

  dynamic[0] = 3;
  printf("%d\n",dynamic[0]);

  //Mesela bu örnegimizde, ben hep 0. indis ile işlem yaptım. Yani 4 bytelık alanı kullandım. Ya geriye kalan 4 bytelık 4 blok? Onlar boşa...
  //Buda, 4 * 4 = 16byte yapar. Küçük bir işlem oldugu için bu kadar.
  //Sunucularda gerçekten bir yogunluk var ve RAM kullanımı çok yüksek.
  // Bu yüzden dikkatli olmalıyız.


  free(dynamic); //İşimiz bitti. Bu alanı işletim sistemine geri vermeliyiz. Geri vermezsek bu alan halen bizde oldugu düşünülecek ve boşa kayıp.
}
