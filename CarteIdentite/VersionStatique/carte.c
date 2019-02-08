#include "defineform.h"

/************************
Principe : initailisation des membres du type carte

Entrée : la carte

Sortie : la carte remplie

Note :
***********************/
void initCarte(tCarteId *tCarte1, int nCpt){

    tCarte1->ID = nCpt;

    fflush(stdin);
    printf("Nom : ");
    gets(tCarte1->Nom);

    printf("Prenom : ");
    gets(tCarte1->Prenom);

    printf("Adresse : ");
    gets(tCarte1->Adresse);

    printf("Code postal : ");
    gets(tCarte1->CodePostal);

    printf("Ville : ");
    gets(tCarte1->Ville);
}
