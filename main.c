#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char lettre[1];
    char lettre1[] = "m";
    char lettre2[] = "a";
    char lettre3[] = "i";  
    char lettre4[] = "s";
    char lettre5[] = "o";
    char lettre6[] = "n";

    printf("Peux-tu taper une lettre ?\n\n");
    scanf("%s", lettre);
    printf("Tu viens de taper la lettre %s !\n\n", lettre);

      if (strcmp(lettre, lettre1) == 0) // Si la lettre tapée est bien la lettre m
      {
          printf("Je connais cette lettre, c'est la 1ère lettre du mot maison\n");
      }
      else if (strcmp(lettre, lettre2) == 0) // Si la lettre tapée est bien la lettre a
      {
          printf("Je connais cette lettre, c'est la 2ème lettre du mot maison\n");
      }
      else if (strcmp(lettre, lettre3) == 0) // Si la lettre tapée est bien la lettre i
      {
          printf("Je connais cette lettre, c'est la 3ème lettre du mot maison\n");
      }
      else if (strcmp(lettre, lettre4) == 0) // Si la lettre tapée est bien la lettre s
      {
          printf("Je connais cette lettre, c'est la 4ème lettre du mot maison\n");
      }
      else if (strcmp(lettre, lettre5) == 0) // Si la lettre tapée est bien la lettre o
      {
          printf("Je connais cette lettre, c'est la 5ème lettre du mot maison\n");
      }
      else if (strcmp(lettre, lettre6) == 0) // Si la lettre tapée est bien la lettre n
      {
          printf("Je connais cette lettre, c'est la 6ème lettre du mot maison\n");
      }   
      else
      {   
          printf("Je ne connais pas cette lettre espèce de boloss !");
      }

    return 0;
}
