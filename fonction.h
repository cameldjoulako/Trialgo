#include <stdio.h>
#include <stdlib.h>
int *Tableau;  /*Tableau devrant contenir la Liste des entiers */
int Nb_elements ;  /* Nombre d'�l�ments dans la liste */
int CompteurDebut;  /* Compteur pour la boucle allant du d�but � la fin */
int CompteurFin;  /* Compteur pour la boucle allant de droite � gauche */
int Echange;  /* Variable temporaire pour l'�change de deux �l�ments */
int operation;  /*Compte le nombre d'operation effectu� pour trier la liste */
int choix2;
int caracterelu;
void entete();
void menu();
void saisi();
void tri();
void menufin();
void lecture_fichier(FILE*fichier);

