#include <stdio.h>
#include <stdlib.h>
int *Tableau;  /*Tableau devrant contenir la Liste des entiers */
int Nb_elements ;  /* Nombre d'éléments dans la liste */
int CompteurDebut;  /* Compteur pour la boucle allant du début à la fin */
int CompteurFin;  /* Compteur pour la boucle allant de droite à gauche */
int Echange;  /* Variable temporaire pour l'échange de deux éléments */
int operation;  /*Compte le nombre d'operation effectué pour trier la liste */
int choix2;
int caracterelu;
void entete();
void menu();
void saisi();
void tri();
void menufin();
void lecture_fichier(FILE*fichier);

