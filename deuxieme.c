#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int longueur_mot = 0;
    char mot[100] = "0";
    //char *cherche_mot;
    char lettre[1] = "0";

    printf("Peux-tu taper un mot ?\n\n");
    scanf("%s", mot);
    printf("Tu viens de taper le mot %s !\n\n", mot);

    longueur_mot = strlen(mot);
    printf("La chaine %s fait %d caracteres de long\n\n", mot, longueur_mot);
        if (mot != NULL)
    {
        printf("Peux-tu taper une lettre à présent ?\n\n");
        scanf("%s", lettre);
        printf("Tu viens de taper la lettre %s !\n\n", lettre);
    }
        return 0;
}