#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED
#include "defineform.h"

///Afficher les cartes
extern void lireCarte(FILE* fichier);

///Ecrire une carte dans le fichier
extern void ecrireCarte(FILE* fichier, tCarteId tCarte1);

///R�initialise le fichier
extern void razCartes(FILE* fichier);

///Renvoie le nombres de cartes d�j� pr�sentes + 1
extern int resume(FILE* fichier);

#endif // FICHIER_H_INCLUDED
