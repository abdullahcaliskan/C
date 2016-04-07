#include <stdlib.h>
#include <stdio.h>

int main()
{
  FILE *fp = fopen("ornek.txt", "r");
  int salon, matine, hit;
  salon = fgetc(fp);
  matine = fgetc(fp);
  printf("%c %d\n",salon, salon);
  printf("%c %d\n",matine, matine);
  fclose(fp);
  
  printf("2. Asama\n");
  fp = fopen("ornek.txt","r");
  char s1, s2, s3;
  s1 = fgetc(fp);
  s2 = fgetc(fp);
  printf("%c %d\n",s1, s1);
  printf("%c %d\n",s2, s2);
  fclose(fp);
}
