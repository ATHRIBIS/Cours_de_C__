//
// Created by Aymeric Schaeffer on 19/12/2020.
//
#include <iostream>
#include "class/duree.h"

using namespace std;

int main() {
    /*
     * Au lieu de faire
     * resultat = additionner(duree1, duree2)
     * On pourrait faire
     * resultat = duree1 + duree2
     * duree1 et 2 n'étant pas des nombres mais des objets
    */
    Duree duree1(1,60,28), duree2(0,10,61), duree3(13,34343,434);
    Duree resultat; //contient le résulat de l'heure

    duree1.afficher();
    cout << "+" << endl;
    duree2.afficher();
    cout << "+" << endl;
    duree3.afficher();

    resultat = duree1 + duree2 + duree3;
    /*
     * Revient a ecrire :
     * resultat = operator+(operator(duree1, duree2), duree3);
     */
    cout << "=" << endl;
    resultat.afficher();

    //Prochaine étape : Les opérateurs de flux
    // 2eme essai

    return 0;
}
