#ifndef CARTE_H_INCLUDED
#define CARTE_H_INCLUDED

#define TAILLE 255

typedef struct tCarteId{
    int ID;
    char Nom[TAILLE];
    char Prenom[TAILLE];
    char Adresse[TAILLE];
    char CodePostal[TAILLE];
    char Ville[TAILLE];
}tCarteId;

///Initialisation d'une carte
extern void initCarte(tCarteId *tCarte1, int nCpt);

#endif // CARTE_H_INCLUDED
