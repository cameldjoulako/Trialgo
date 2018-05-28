#include "fonction.h"

void lecture_fichier(FILE*fichier){
    caracterelu=0;
    caracterelu=fgetc(fichier);
    while(caracterelu!=EOF){
        printf("%c", caracterelu);
        caracterelu=fgetc(fichier);
    }
}
