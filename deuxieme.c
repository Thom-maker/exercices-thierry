#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char alphabet[1];
    char alphabet01[] = "a";
    char alphabet02[] = "b";
    char alphabet03[] = "c";  
    char alphabet04[] = "d";
    char alphabet05[] = "e";
    char alphabet06[] = "f";
    char alphabet07[] = "g";
    char alphabet08[] = "h";
    char alphabet09[] = "i";
    char alphabet10[] = "j";
    char alphabet11[] = "k";
    char alphabet12[] = "l";
    char alphabet13[] = "m";
    char alphabet14[] = "n";
    char alphabet15[] = "o";
    char alphabet16[] = "p";
    char alphabet17[] = "q";
    char alphabet18[] = "r";
    char alphabet19[] = "s";
    char alphabet20[] = "t";
    char alphabet21[] = "u";
    char alphabet22[] = "v";
    char alphabet23[] = "w";
    char alphabet24[] = "x";
    char alphabet25[] = "y";
    char alphabet26[] = "z";
    char lettre6[] = "n";
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