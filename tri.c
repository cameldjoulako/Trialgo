#include "fonction.h"

void tri(){
    operation=0;
    /*Pour tous les éléments de la liste de gauche à droite*/
        for(CompteurDebut=0; CompteurDebut<Nb_elements; CompteurDebut ++){
            /* Pour tous les éléments à partir du dernier jusqu'au premier élément trié */
            for(CompteurFin=Nb_elements-1; CompteurFin>CompteurDebut; CompteurFin--){
                /* Si l' élément courant est plus petit que l' élément précédent */
            if (Tableau[CompteurFin]<Tableau[CompteurFin-1]){

                 /* Alors, on échange les éléments */
                Echange = Tableau[CompteurFin];
                Tableau[CompteurFin] = Tableau[CompteurFin-1];
                Tableau[CompteurFin-1] = Echange;
                operation++;
            }
    }
 }
            /* ou encore cette methode
                for(CompteurDebut=0; CompteurDebut<Nb_elements-1; CompteurDebut ++){
                    for(CompteurFin=CompteurDebut+1; CompteurFin<Nb_elements; CompteurFin++){
                        if (Tableau[CompteurDebut]>Tableau[CompteurFin]){
                            Echange = Tableau[CompteurDebut];
                            Tableau[CompteurDebut] = Tableau[CompteurFin];
                            Tableau[CompteurFin] = Echange;
                            operation++;
                        }
                    }
                }
            */

    printf("\n\n\n\t\Le tableau  apres tri est le suivant: |"); /*Affichage de la liste */
    for(CompteurDebut=0; CompteurDebut<Nb_elements; CompteurDebut++)
    {
        printf(" %d |",Tableau[CompteurDebut]);
    }


    printf("\n\n\t\t\tLe nombre d'operation effectue est %d : ",operation);
}

