#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define tam 150
int main()
{
    setlocale(LC_ALL,"Turkish");
    int ogr_no,ogr_boy,en_yakin_no=0,en_yakin_boy=0,durum=0,boy_farki;
    while(durum==0)
    {
        printf("Öğrenci Numarasını giriniz:");
        scanf("%d",&ogr_no);
        if(ogr_no<=0)
        {
            break;
        }
        else
        {
            printf("Öğrenci Boyunu Giriniz:");
            scanf("%d",&ogr_boy);
            boy_farki=abs(tam-ogr_boy);
            if(abs(tam-en_yakin_boy)>boy_farki)
            {
                en_yakin_boy=ogr_boy;
                en_yakin_no=ogr_no;
            }
        }
    }
    printf("%d numaralı ögrencinin boyu en yakındır. Ögrenci Boyu:%d",en_yakin_no,en_yakin_boy);
    return 0;
}
