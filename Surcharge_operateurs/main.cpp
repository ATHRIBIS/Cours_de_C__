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
    Duree duree1(1,60,28), duree2(0,10,61);
    Duree resultat;

    duree1.afficher();
    cout << "+" << endl;
    duree2.afficher();

    resultat = duree1 + duree2;
    cout << "=" << endl;
    resultat.afficher();

    //Prochaine étape : Les opérateurs de flux

    return 0;
}
