#include <stdio.h>
#include <stdlib.h>

int main()

{
    char ChaineDeCaractere [4];
    int TypeDeCable = 0;
    int CableDroitOuCroisse = 0;
    int CroisementDePin = 0;



    printf("Bonjour et bienvenue dans le simulateur de cable RJ45");
    debut :
    printf("\nVous allez apprendre a certire un cable, mais d'abord comprendre la logique, tu es partant oui ou non ? : ");
    scanf("%s", &ChaineDeCaractere);
    system("@cls||clear");

    if (ChaineDeCaractere [0] == 'o' || ChaineDeCaractere [0] == 'O')
    {
        printf("\nTres bien, alors commenceons\n");
        printf("Combien de type de cable y a t-il ? : ");
        scanf("%d", &TypeDeCable);


        while (TypeDeCable != 2)
        {
            if (TypeDeCable < 2 && TypeDeCable >= 0)
            {
                printf("\nCe n'est pas la bonne reponse, il y en a plus. Recommence : ");
                scanf("%d", &TypeDeCable);

            }
            else if (TypeDeCable >2 && TypeDeCable <=19)
            {
                printf("\nNon il y en a moins, recommence : ");
                scanf(" %d", &TypeDeCable);

            }
            else if (TypeDeCable < 0)
            {
                printf("\nPas tres intelligent de mettre un chiffre negatif, RECOMMENCE ! : ");
                scanf("%d", &TypeDeCable);

            }
            else if (TypeDeCable > 20)
            {
                printf("\nC'est beaucoup trop haut, redescend et recommence : ");
                scanf("%d", &TypeDeCable);

            }

        }
    }
    else
        goto debut;

        if (TypeDeCable == 2)
            system("@cls||clear");
        {
            printf("\nOk tres bien ");
            printf("\nLes cables peuvent servir soit a connecter deux memes stations entre elles\nOu une station et un equipement");
            printf("\n\nPour connecteur deux stations entre elles, quel cable vas-tu utiliser ?");
            printf("\n***Tape 1 pour cable droit\n***Tape 2 pour cable croise\n\nDonne ta reponse ici : ");
            scanf (" %d", &CableDroitOuCroisse);


            while (CableDroitOuCroisse != 2)
            {
                if (CableDroitOuCroisse < 1 || CableDroitOuCroisse >2)
                {
                    printf("\nJe te donne juste 2 possibilites, 1 et 2, et toi tu mets %d... recommence : ", CableDroitOuCroisse);
                    scanf(" %d", &CableDroitOuCroisse);

                }
                else
                {
                    printf("\nCe n'est pas juste recommence : ");
                    scanf (" %d", &CableDroitOuCroisse);

                }
            }
            if (CableDroitOuCroisse == 2)
                system("@cls||clear");
            {
                printf("\nTres bien tu utiliseras du cable CROISE");
                printf("\nEt pour relier une station a un equipement tu utilises ?");
                printf("\n***Tape 1 pour cable droit\n***Tape 2 pour cable croise\n\nDonne ta reponse ici : ");
                scanf (" %d", &CableDroitOuCroisse);


                while (CableDroitOuCroisse != 1)
                {
                    printf("\nCe n'est pas juste recommence");
                    scanf (" %d", &CableDroitOuCroisse);

                }
                if (CableDroitOuCroisse == 1)
                    system("@cls||clear");
                {
                    printf("\nExcellent a voir, tu utiliseras du cable DROIT !!");
                    printf("\nMaintenant passons a la prochaine questions");
                    printf("\n\nSi tu prends le pin 1, tu devras le mettres dans l'entree numero : ");
                    scanf(" %d", &CroisementDePin);


                    while (CroisementDePin != 3)
                    {
                        if (CroisementDePin > 3)
                        {
                            printf("\nC'est plus bas, reessaye : ");
                            scanf(" %d", &CroisementDePin);

                        }
                        else if (CroisementDePin < 3)
                        {
                            printf("\nC'est un peu plus que ca, reessaye : ");
                            scanf(" %d", &CroisementDePin);

                        }
                    }

                    if (CroisementDePin == 3)
                        system("@cls||clear");
                    {
                        printf("\nC'est bien ca, tu connectes la sortie 1 a l'entree 3");
                        printf("\nMaintenant Si tu prends le pin 2, tu devras le mettres dans l'entree numero : ");
                        scanf("%d", &CroisementDePin);


                        while (CroisementDePin != 6)
                        {
                            if (CroisementDePin > 6)
                            {
                            printf("\nC'est plus bas, reessaye : ");
                            scanf(" %d", &CroisementDePin);

                            }
                             else if (CroisementDePin < 6)
                            {
                            printf("\nC'est un peu plus que ca, reessaye : ");
                            scanf(" %d", &CroisementDePin);

                            }
                        }
                        if (CroisementDePin == 6)
                            system("@cls||clear");
                        {
                            printf("Parfait c'est tous ce qui a a savoir ! ");
                            printf("\n\nIl y a 2 types de cable :\n1. Cable droit\n2. Cable croisee");
                            printf("\nAussi, pour certire un cable droit en croisee il faut mettre le pin\n\n1 dans le 3 = 1->3\nEt\n2 dans le 6 = 2->6");
                            printf("\n\nSi tu le desires, tu peux recommencer...");
                            printf("\nVeux-tu recommencer ? (Oui ou non)");
                            scanf("%s", &ChaineDeCaractere);

                        }

                        if (ChaineDeCaractere[0] == 'O' || ChaineDeCaractere[0] == 'o')
                            goto debut;

                     }
                 }
              }

        }


    return 0;

}
