#include "defineform.h"
#include <string.h>

#define CHAINE "Carte d'identite"

/************************
Principe : copie un type carte dans le fichier

Entrée : la carte, le fichier

Sortie : écriture dans le fichier

Note :
***********************/
void ecrireCarte(FILE* fichier, tCarteId *tCarte1){

    fichier = fopen("Cartes d'identité.txt", "a");

    fprintf(fichier, "\n");
    fprintf(fichier, "Carte d'identite %d\n",tCarte1->ID);
    fprintf(fichier, "Nom : %s\n",tCarte1->Nom);
    fprintf(fichier, "Prenom : %s\n",tCarte1->Prenom);
    fprintf(fichier, "Adresse : %s\n",tCarte1->Adresse);
    fprintf(fichier, "Code postal : %s\n",tCarte1->CodePostal);
    fprintf(fichier, "Ville : %s\n",tCarte1->Ville);

    fclose(fichier);
}

/************************
Principe : affiche le contenu du fichier

Entrée : le fichier

Sortie : le fichier

Note :
***********************/
void lireCarte(FILE* fichier){

    char sChaine[TAILLE];

    system("cls");
    fichier = fopen("Cartes d'identité.txt", "r");
    while(fgets(sChaine, TAILLE, fichier)!=NULL){
        printf("%s",sChaine);
    }
    fclose(fichier);

}

/************************
Principe : réinitialise le fichier

Entrée : le fichier

Sortie : le fichier réinitilaisé

Note : le printf sert à écraser les données
***********************/
void razCartes(FILE* fichier){

    fichier = fopen("Cartes d'identité.txt", "w");

    fprintf(fichier, "---CARTES D'IDENTITES---");

    fclose(fichier);
}

/************************
Principe : compte le nombre de "Carte d'identite" dans le fichier

Entrée : le fichier

Sortie : un entier : le nombre de cartes + 1

Note : la constante CHAINE correspond à la chaine que l'on écrit dans le fichier à chaque nouvelle carte
        on peut donc considérer que chaque fois qu'elle apparait, il s'agit d'une nouvelle carte
***********************/
int resume(FILE* fichier){

    char sChaine[TAILLE];
    int nTest = 0;

    fichier = fopen("Cartes d'identité.txt", "r");
    while(fgets(sChaine, strlen(CHAINE)+1, fichier)!=NULL){
        if(strcmp(sChaine,CHAINE)==0){
            nTest++;
        }
    }
    fclose(fichier);

    return nTest+1;
}
