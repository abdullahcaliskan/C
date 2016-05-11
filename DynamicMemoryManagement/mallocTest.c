#include <stdlib.h>
#include <stdio.h>

int main()
{
  int *dynamic;
  dynamic = malloc(0);
  printf("%d\n",dynamic);
  if(dynamic == NULL)
    {
      printf("Dynamic NULL");
    }
  dynamic = realloc(dynamic,sizeof(int));

  if(dynamic == NULL)
    printf("Boom");
  else
    printf("%d",sizeof(dynamic)); 
  printf("Test");
}
