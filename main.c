#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
int main()
{
    	int choix,fin=1;
    entete();
    menu();
    FILE*fichier;
    fichier=fopen("sauvegarde.txt","a+");

    while(fin){
            do{
        printf("Quel est votre choix : ");
        scanf("%d",&choix);
        }while(choix<=0);
    switch(choix){
    case 1: {
        system("cls");
        entete();
        saisi();

        /*  Ecriture du tableau avant le tri dans le fichier*/
             fprintf(fichier,"\n%s\n"," ");
             fprintf(fichier,"\t\t\t%s"," ");
             fprintf(fichier,"\n%s","===================================================================");
             fprintf(fichier,"\n\n\t\t%s\n \t\t|","Voici le tableau non trie que vous avez entrer:");
            for(CompteurDebut=0; CompteurDebut<Nb_elements; CompteurDebut++){
                fprintf(fichier,"%i | ", Tableau[CompteurDebut]);
            }
        /*  fin de l'écriture du tableau avant le tri dans le fichier*/

        tri();

        /*  Ecriture du tableau apres le tri dans le fichier*/
             fprintf(fichier,"\n%s\t\t "," ");
             fprintf(fichier,"\n\t\t%s\n \t\t| ","Apres execution du tri on obtient le tableau suivant:");
            for(CompteurDebut=0; CompteurDebut<Nb_elements; CompteurDebut++){
                fprintf(fichier,"%i | ", Tableau[CompteurDebut]);
            }
            fprintf(fichier,"\n\n\t\t\le nombre d'operation effectue pour le tri est: %d\n",operation);
            fprintf(fichier,"%s\n","===================================================================");
            fclose(fichier);
        /*  fin de l'écriture du tableau apres le tri dans le fichier*/

        fichier=fopen("sauvegarde.txt","a+");
        printf("\t\t\n\n NB: Les differents resultats obtenus ont ete enregistrer dans le fichier Sauvegarde.txt");
        /*menu 2*/
        menufin();
        printf("\n");
        while(1){
        printf("\t\tQuel est votre choix : ");
        scanf("%d",&choix2);
    switch(choix2){
    case 1: {
        system("cls");
        entete();
        lecture_fichier(fichier);

        printf("\n\n ");
        printf("\t\t\t\t\t\t\t\tAPPUYER SUR UNE TOUCHE POUR SORTIR DU PROGRAMME ");
        printf("\n\n ");
    }break;
    case 2: {
         system("cls");
        main();

    }break;
    case 3: system("cls");exit(-1);break;
    default: printf("\t\t\ce choix n'existe pas !\n");}break;
    }

        /*fin menu 2*/
    }break;
    case 2: exit(-1);break;
    default: printf("\t\t\ce choix n'existe pas !\n");}break;
    }
         fclose(fichier);
         free(Tableau);
    return 0;
}
