#include "fonction.h"

void tri(){
    operation=0;
    /*Pour tous les �l�ments de la liste de gauche � droite*/
        for(CompteurDebut=0; CompteurDebut<Nb_elements; CompteurDebut ++){
            /* Pour tous les �l�ments � partir du dernier jusqu'au premier �l�ment tri� */
            for(CompteurFin=Nb_elements-1; CompteurFin>CompteurDebut; CompteurFin--){
                /* Si l' �l�ment courant est plus petit que l' �l�ment pr�c�dent */
            if (Tableau[CompteurFin]<Tableau[CompteurFin-1]){

                 /* Alors, on �change les �l�ments */
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

