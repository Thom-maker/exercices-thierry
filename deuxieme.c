#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int longueurChaine = 0;
    char mot[100] = "0";
    printf("Peux-tu taper un mot ?\n\n");
    scanf("%s", mot);
    printf("Tu viens de taper le mot %s !\n\n", mot);
        // On récupère la longueur de la chaîne dans longueurChaine
    longueurChaine = strlen(mot);
        // On affiche la longueur de la chaîne
    printf("La chaine %s fait %d caracteres de long", mot, longueurChaine);
    
    return 0;
}