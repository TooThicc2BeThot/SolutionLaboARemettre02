// But : Complétez le devoir 2
// Auteur : Vincent Beaudry
// Date : 15/09/2020


#include <iostream> 
using namespace std;

void main()
{
    setlocale(LC_ALL, "");

    //Déclaration des variables 
    float km;
    int nbjour;
    int location;
    float essence;
    float resultat;

    location = 45;
    essence = 0.95;

    //L'opérateur vas rentrer le nombre de km et de jour qu'il a passé.

    std::cout << " Entrez le nombre total de kilomètre parcouru : ";
    std::cin >> km;

    std::cout << " Nombre de jour de location du véhicule : ";
    std::cin >> nbjour;


    //Calcule pour trouver le cout finale si la personne depasse les 250 km

    if (km >= 0 && nbjour >= 1)
    {
        if (km / nbjour <= 250)
        {
            std::cout << " Le total est de : " << (nbjour * location) + (km * essence) << " $ " << std::endl;
        }
        else
        {
            resultat = (nbjour * location) + (km * essence) + (km - nbjour * 250 * 0.05);
            std::cout << " Le total sera de : " << resultat << " $ " << std::endl;

        }
        
    }
    

}

/*
Km           Nb de jour             total
251               5                   463.45$

5                 4                   228.08$

-250              10                   erreur

250               15                     912.5$

555               5                      752.25$

*/