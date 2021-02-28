//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#include "Garage.h"
#include "Vehicules.h"

void Garage::ajouterVehicule(int matricul, int prix) {
    listeVehicules.push_back(new Vehicule(matricul, prix));
}

void Garage::supprimerVehicule() {
    listeVehicules.pop_back();
}
