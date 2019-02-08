#include "defineform.h"

/************************
Principe : initailisation des membres du type carte

Entrée : la carte

Sortie : la carte remplie

Note :
***********************/
void initCarte(tCarteId *tCarte1, int nCpt){

    if((tCarte1->ID=malloc(TAILLE*sizeof(int)))==NULL){
        return;
    }
    else{
        tCarte1->ID = nCpt;
    }

    fflush(stdin);

    printf("Nom : ");
    if((tCarte1->Nom=malloc(TAILLE*sizeof(char*)))==NULL){
        return;
    }
    else{
        gets(tCarte1->Nom);
    }

    printf("Prenom : ");
    if((tCarte1->Prenom=malloc(TAILLE*sizeof(char*)))==NULL){
        return;
    }
    else{
        gets(tCarte1->Prenom);
    }

    printf("Adresse : ");
    if((tCarte1->Adresse=malloc(TAILLE*sizeof(char*)))==NULL){
        return;
    }
    else{
        gets(tCarte1->Adresse);
    }

    printf("Code postal : ");
    if((tCarte1->CodePostal=malloc(TAILLE*sizeof(char*)))==NULL){
        return;
    }
    else{
        gets(tCarte1->CodePostal);
    }

    printf("Ville : ");
    if((tCarte1->Ville=malloc(TAILLE*sizeof(char*)))==NULL){
        return;
    }
    else{
        gets(tCarte1->Ville);
    }
}

void freeCarte(tCarteId *tCarte1){

    free(tCarte1->ID);
    free(tCarte1->Nom);
    free(tCarte1->Prenom);
    free(tCarte1->Adresse);
    free(tCarte1->CodePostal);
    free(tCarte1->Ville);
}
