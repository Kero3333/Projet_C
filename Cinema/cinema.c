//On appelle des librairies
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

char selectionDeFilms(string categorie[]); //on déclare la fonction avec pour paramètre un tableau

int main(int argc, string argv[])   //on définie main ayant pour paramètre des arguments
{
    //si lors du lancement le programme ne reçoit pas deux arguments, il renvoit alors un message
    if (argc != 2)
    {
        printf("Usage : ./Cinema votreAge\n");;
        return 1;
    }
    int ageUser = atoi(argv[1]);    //on définie un entier qui récupère la valeur du second argument

    //on déclare trois tableaux correspondants aux différentes catégories de films contenants chacun trois films
    string filmCategorieEnfant[3] = {"My little pony", "Ralph 2.0", "Mulan"};
    string filmCategorieAdos[3] = {"Sherlock", "Hunger games", "Le labyrinthe"};
    string filmCategorieAdulte[3] = {"The Shining", "La Nonne", "Conjuring"};

    char choix; //on déclare la variable qui va servir à récupérer la valeur que renvoie la fonction

    //si l'âge de l'utilisateur est inférieur à 11 ans
    if (ageUser < 11)
    {
        selectionDeFilms(filmCategorieEnfant); //on fait appelle à la fonction
    }
    //si l'âge de l'utilisateur est égale ou supérieur à 11 ans et inférieur à 18 ans
    else if (ageUser >= 11 && ageUser < 18)
    {
        choix = selectionDeFilms(filmCategorieAdos);
        //si la valeur de retour de la fonction est 'n'
        if (choix == 'n')
        {
            string autreCategorie;
            //alors on lui demande dans quelle catégorie il souhaite chercher
            do
            {
                autreCategorie = get_string("Voulez-vous chercher dans la catégorie ados ou enfant ?\n");

                if (strcmp(autreCategorie, "ados") == 0)
                {
                    choix = selectionDeFilms(filmCategorieAdos);
                }
                else if (strcmp(autreCategorie, "enfant") == 0)
                {
                    choix = selectionDeFilms(filmCategorieEnfant);
                }
            }
            while (choix != 'o'); //tant que la valeur de retour de la fonction n'est pas égale à 'o', on continue la boucle
        }
    }
    //si l'âge de l'utilisateur est de plus de 18 ans
    else
    {
        choix = selectionDeFilms(filmCategorieAdulte);
        if (choix == 'n')
        {
            string autreCategorie;
            do
            {
                autreCategorie = get_string("Voulez-vous chercher dans la catégorie adulte, ados, enfant ?\n");

                if (strcmp(autreCategorie, "adulte") == 0)
                {
                    choix = selectionDeFilms(filmCategorieAdulte);
                }
                else if (strcmp(autreCategorie, "ados") == 0)
                {
                    choix = selectionDeFilms(filmCategorieAdos);
                }
                else if (strcmp(autreCategorie, "enfant") == 0)
                {
                    choix = selectionDeFilms(filmCategorieEnfant);
                }
            }
            while (choix != 'o');
        }
    }
}
//on définit la fonction
char selectionDeFilms(string categorie[])
{
    char rep;

    for (int i = 0; i < 3; i++)
    {
        do
        {
            printf("%s\n", categorie[i]);
            rep = get_char("Voulez-vous voir ce film ? ( o / n )\n");
            if (rep == 'o')
            {
                return 'o'; //on retourne la valeur 'o' si l'utilisateur désire voir le film proposé
            }
        }
        while (rep != 'n');
    }
    return 'n'; //on retourne la valeur 'n'
}