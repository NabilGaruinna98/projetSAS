#include <stdio.h>
#include <stdlib.h>
// AJOUTER
typedef struct
{
    int ID ;
    char titre[50];
    char description [200];
} tache;
    int N ;
tache taches[50];
// Ajouter
void Ajouter()
{
    printf("combien de taches vous voulez ajouter ? : ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        printf("Taper ID : ");
        scanf("%d", &taches[i].ID);
        printf("Taper le titre : ");
        scanf(" %s", taches[i].titre);
        printf("Entrer une description : ");
        scanf(" %s", taches[i].description);
    }
}
//afficher
void Afficher(){
    printf("votre taches sont:");
    for(int i=0;i<N;i++){
    printf("%d", &taches[i].ID);
    printf(" %s", taches[i].titre);
    printf(" %s", taches[i].description);

}
}


// MENU

int main()
{
    int choix ;
    do{

        printf("***************~~MENU~~****************\n");
        printf("1-Ajouter une nouvelle tache \n");
        printf("2-Ajouter plusieurs nouvelle taches\n");
        printf("3-Afficher la liste de toues les taches\n");
        printf("4-Modifier une tache\n");
        printf("5-supprimer une tache\n");
        printf("6-rechercher une tache\n");
        printf("7-Statistiques\n");
        printf("8-quitter le menu \n");
        printf("choisi une de ces option :");

        scanf("%d",&choix);

    switch(choix)
    {
    case 1 :
        Ajouter ();
        break;
    case 2 :
        Afficher();
        break;
    case 3 :
        printf("vous avez choisi l'option 3 . \n");
        break;
    case 4 :
        printf("vous avez choisi l'option 4 . \n");
        break;
    case 5 :
        printf("vous avez choisi l'option 5 . \n");
        break;
    case 6 :
        printf("vous avez choisi l'option 5 . \n");
    case 7 :
        printf("vous avez choisi l'option 7 . \n");
        break;
    case 8 :
        printf(" Au revoire \n");
    default:
        printf( "entrer un nombre valide");

    }
    }
   while (choix != 8);
    return 0;
}


