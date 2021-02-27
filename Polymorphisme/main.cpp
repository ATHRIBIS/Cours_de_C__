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


    /*
     * Voyons maintentant le cas du destructeur en polymorphisme :
     * (un constructeur lui ne peut pas être virtuel, cela n'a pas de sens
     * car on sait déja quest ce qu'on créé lors de la création de l'objet)
     */
    Vehicule *myV(0); //On créé un pointeur vide vers une adresse Vehicule
    myV = new Voiture; //On le fait pointer vers un objet de type Voiture (que l'on créer)
    //On créé un objet Voiture et on met son addresse dans un pointeur de Vehicule
    //-> Méthode virtuelle

    myV->affiche(); //On affiche la présentation

    delete myV; //On désalloue la mémoire, détruit la voiture
    /*
     * On problème réside dans delete myV;
     * delte n'est pas une fonction virtuelle
     * delete va donc utiliser la méthode de Vehicule et non de Voiture !!
     *
     * UN DESTRUCTEUR EST TOUJOURS VIRTUEL SI ON UTILISE LE POLYMORPHISME
     */

    return 0;
}