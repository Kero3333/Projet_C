#include <stdio.h>
#include <math.h>

int main(void)
{
    //on récupère la longueur de AB en tant que float
    float longAB;
    printf("Quelle est la longueur de AB (en cm)? ");
    scanf("%f", &longAB);

    //on récupère la longueur de BC en tant que float
    float longBC;
    printf("Quelle est la longueur de BC (en cm)? ");
    scanf("%f", &longBC);

    float longAC = sqrt((longAB*longAB)+(longBC*longBC)); //on calcule la longueur de AC en usant du théorème de Pythagore
    printf("la longueur de l'hypoténuse est de %.2f cm\n", longAC); //on affiche au centième près la longueur de AC
}
