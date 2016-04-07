#include <stdlib.h>
#include <stdio.h>

void firstOpen(char *, char *);

int main()
{
  FILE *login;
  login = fopen("LoginInfo","r");
  char user_id[30], user_pw[30], verifyID[30], verifyPW[30];
  if(login == NULL)
    {
      firstOpen(user_id, user_pw);
    }
  else
    {
      printf("Giriş Yapın.\n");
      printf("User ID:");
      scanf("%s",&verifyID);
      printf("User PW:");
      scanf("%s",&verifyPW);
      fscanf(login,"%s %s", &user_id, &user_pw);
      if(!strcmp(verifyID,user_id) && !strcmp(verifyPW,user_pw))
	{
	  printf("OK!\n");
	}
      else
	{
	  printf("Giriş İzni verilmedi.\n");
	}
    }
  printf("Hoşgeldiniz, %s\n",user_id);
  
}

void firstOpen(char *id, char *pw)
{
  printf("Uygulama ilk defa çalıştırıldı.\n"
	 "Lütfen kullanıcı adı ve şifre belirleyin.\n");
  printf("User ID :");
  scanf("%s",id);
  printf("User PW :");
  scanf("%s",pw);
  FILE *dosya;
  dosya = fopen("LoginInfo","w");
  fprintf(dosya,"%s %s",id,pw);
  printf("Kayıt Gerçekleştirildi\n");
  fclose(dosya);
}
