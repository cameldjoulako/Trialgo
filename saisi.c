#include "fonction.h"

void saisi(){
    /* Saisie des �l�ments de la liste */
        do{
            printf("\n\n\t\t\SUIVER ATTENTIVEMENT LES INSTRUCTIONS:");
            printf("\n\n\t\t\t\t\ ENTRER LE NOMBRE D'ELEMENTS DE LA LISTE :");
            scanf("%d", &Nb_elements);
        }while(Nb_elements<=0);
        Tableau=(int*)malloc(Nb_elements*sizeof(int));
        for(CompteurDebut=0; CompteurDebut<Nb_elements; CompteurDebut++)
        {
            /* Affichage d'un message demandant la valeur du i�me entier */
            /* avec i increment� � chaque passage de la boucle */
            printf("\n\t\t\t\Saisissez la valeur de l'element %d:   ",CompteurDebut+1);
            /* Saisie de la valeur du i�me entier */
            scanf("%d",&Tableau[CompteurDebut]);
        }
    printf("\n\tvoici le tableau non trie que vous avez entrer: |");
        for(CompteurDebut=0; CompteurDebut<Nb_elements; CompteurDebut++){
            printf("%i | ", Tableau[CompteurDebut]);
            printf("%i | ", Tableau[CompteurDebut]);
        }

}
