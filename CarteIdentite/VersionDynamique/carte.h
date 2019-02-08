#ifndef CARTE_H_INCLUDED
#define CARTE_H_INCLUDED

#define TAILLE 255

typedef struct tCarteId{
    int ID;
    char *Nom;
    char *Prenom;
    char *Adresse;
    char *CodePostal;
    char *Ville;
}tCarteId;

///Initialisation d'une carte
extern void initCarte(tCarteId *tCarte1, int nCpt);

extern void freeCarte(tCarteId *tCarte1);

#endif // CARTE_H_INCLUDED
