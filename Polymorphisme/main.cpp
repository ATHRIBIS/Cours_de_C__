//
// Created by Aymeric Schaeffer on 26/02/2021.
//
using namespace std;

#include <iostream>
#include "Vehicules.h"

void presenter(Vehicule v) {
    v.affiche();
}

int main() {
    Vehicule truck;
    Voiture lambo;
    Moto cinquantecc;

    presenter(truck);
    presenter(lambo);
    presenter(cinquantecc);
    /*
     * Dans le cas d'une résolution statique de lien,
     * la console presentera les trois objets comme étant un Véhicule,
     * car le compilateur manipule dans la fonction presenter() un type Vehicule !!!
     */

    /*
     * La résolution dynamique nécessite deux ingrédients :
     * - utiliser un pointeur ou référence
     * - utiliser des méthodes virtuelles
     */

    return 0;
}