#include "defineform.h"


int main()
{
    static int nCpt = 1;
    int nChoix = 0;

    tCarteId tCarte1;

    FILE* fichier = NULL;

    if(resume(fichier)>1){
        nCpt = resume(fichier);
        }

    do{
        printf("---Carte d'identite---\n\n1: Saisir une carte\n2: Lire une carte\n3: Reinitialiser les cartes\n4: Quitter\n");
        scanf("%d",&nChoix);

        switch(nChoix){
            case 1: initCarte(&tCarte1, nCpt);
                    nCpt++;
                    ecrireCarte(fichier, tCarte1);
                    break;
            case 2: lireCarte(fichier);break;
            case 3: razCartes(fichier);break;
            default : return 0;
        }
    }while(nChoix!=4);

    return 0;
}
