//
// Created by Aymeric Schaeffer on 26/02/2021.
//
using namespace std;

#include <iostream>
#include "Vehicules.h"

void presenter(Vehicule const& v) { //On ajoute constante pour de l'affichage (a titre indicatif)
    /*
     * On appel une référence (ou pointeur) du Vehicule pour la fonction virtuelle (résolution dynamique de lien)
     */
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
     * - utiliser des méthodes virtuelles -> fonctions virtuelles
     *
     * On aurait pu faire :
     */
    Vehicule *v1(0), *v2(0);
    v1 = new Vehicule;
    v2 = new Moto;

    v1->affiche();
    v2->affiche();

    return 0;
}