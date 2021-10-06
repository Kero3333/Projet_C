#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage : ./Cinema votreAge\n");;
        return 1;
    }
    int ageUser = atoi(argv[1]);
    printf("%i\n", ageUser);

    string filmCategorieEnfant[3] = {"My little pony","Ralph 2.0","Mulan"};
    string filmCategorieAdos[3] = {"Sherlock","T","V"};
    string filmCategorieAdulte[3] = {"The Shining","La Nonne","Conjuring"};

    if (ageUser < 11)
    {

    }
    else if (ageUser >= 11 && ageUser < 18)
    {

    }
    else
    {

    }
}
