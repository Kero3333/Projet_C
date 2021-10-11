#include <stdio.h>

//on déclare les fonctions
void exercice1(void);
void exercice2(void);
void exercice3(void);
int exercice4(void);

int main(void)
{
    //premier exercice
    exercice1();
    //second exercice
    exercice2();
    //troisième exercice
    exercice3();
    //quatrième exercice
    exercice4();
}

int exercice4(void)
{
    //on ouvre et on crée le fichier .csv si celui-ci n'existe pas
    FILE *file = fopen("voiture.csv", "a");
    //on retourne 1 si le fichier n'existe pas
    if (!file)
    {
        return 1;
    }

    //on récupère le modèle de la voiture
    char modeleVoiture[20]; //on définit un tableau de caractère de taille suffisante
    printf("Veuillez entrer le modèle de la voiture (20 caractères maximum)\n");
    scanf("%s", modeleVoiture);

    //on récupère l'immatriculation de la voiture
    char immatr[20];
    printf("Veuillez entrer la plaque d'immatriculation (20 caractères maximum)\n");
    scanf("%s", immatr);

    //on écrit dans le fichier le modèle et l'immatriculation de la voiture et on ferme le fichier
    fprintf(file, "%s %s\n", modeleVoiture, immatr);
    fclose(file);
    return 0;
}

void exercice3(void)
{
    int tabVal[3];
    //on demande la valeur du premier entier
    printf("veuillez saisir un premier entier\n");
    scanf("%i", &tabVal[0]); //on récupère l'entier et on la stock à l'adresse mémoire de entier1

    //on demande la valeur du second entier
    printf("veuillez saisir un second entier\n");
    scanf("%i", &tabVal[1]); //on récupère l'entier et on la stock à l'adresse mémoire de entier2

    //on demande la valeur du troisième entier
    printf("veuillez saisir un troisième entier\n");
    scanf("%i", &tabVal[2]); //on récupère l'entier et on la stock à l'adresse mémoire de entier3

    //on fait le trie entre les 3 valeur saisis
    int grandEntier = tabVal[0]; //on initialise la variable grandEntier à la première valeur saisi par défault
    for (int i = 1; i < 3; i++) //on parcours le tableau à partir du second élément de celui-ci
    {
        if (tabVal[i] > grandEntier) //si la valeur d'un élément du tableau est supérieur à la valeur de la variable grandEntier
        {
            grandEntier = tabVal[i]; //alors grandEntier prend la valeur de l'élément du tableau
        }
    }
    //on affiche la variable grandEntier
    printf("Voici le plus grand entier saisi : %i\n", grandEntier);
}

void exercice2(void)
{
    //on demande la valeur du premier entier
    int entier1;
    printf("veuillez saisir un premier entier\n");
    scanf("%i", &entier1); //on récupère l'entier et on la stock à l'adresse mémoire de entier1

    //on demande la valeur du second entier
    int entier2;
    printf("veuillez saisir un second entier\n");
    scanf("%i", &entier2); //on récupère l'entier et on la stock à l'adresse mémoire de entier2

    //on affiche les valeurs avant l'échange
    printf("la valeur du premier entier est de %i et le second entier est de %i\n", entier1, entier2);

    //l'échange des valeurs
    int tmp = entier1;  //on initialise une variable temporaire avec entier1
    entier1 = entier2;  //on stock la valeur de entier2 dans entier1
    entier2 = tmp;  //on assigne tmp à l'entier2

    //on affiche les deux entiers après l'échange de leurs valeurs respective
    printf("la valeur du premier entier après échange est de %i et celui du second entier est de %i\n", entier1, entier2);

}

void exercice1(void)
{
    //on demande la valeur du premier entier
    int entier1;
    printf("veuillez saisir un premier entier\n");
    scanf("%i", &entier1); //on récupère l'entier et on la stock à l'adresse mémoire de entier1

    //on demande la valeur du second entier
    int entier2;
    printf("veuillez saisir un second entier\n");
    scanf("%i", &entier2); //on récupère l'entier et on la stock à l'adresse mémoire de entier2

    //on fait le produit de ces deux entiers et on l'affiche
    int produit = entier1 * entier2;
    printf("Voici le produit de ces deux entiers : %i\n", produit);
}