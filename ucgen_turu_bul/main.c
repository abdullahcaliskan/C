#include <stdio.h>
#include <stdlib.h>

int main()
{
    int aci1,aci2,aci3;
    printf("Sırayla 1,2 ve 3. açıları giriniz:\n");
    scanf("%d%d%d",&aci1,&aci2,&aci3);
    if(aci1+aci2+aci3==180)
    {
        if(aci1==60 && aci2==60 && aci3==60)
        {
            printf("Eşkenar Üçgendir.");
        }
        else if(aci1==aci2 || aci1==aci3 || aci2==aci3)
        {
            printf("İkizkenar Üçgendir.");
        }
        else if(aci1==90 || aci2==90 || aci3==90)
        {
            printf("Dik Üçgendir.");
        }
        else
        {
            printf("Çeşitkenar Üçgendir.");
        }
    }
    else
    {
        printf("Girdiğiniz açılar ile üçgen oluşmaz.");
    }
    return 0;
}
