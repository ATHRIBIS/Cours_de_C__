//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#include "Vehicules.h"

void Vehicule::affiche() const {
    std::cout << "Ceci est un Véhicule" << std::endl;
}

void Voiture::affiche() const {
    std::cout << "Ceci est une Voiture" << std::endl;
}

void Moto::affiche() const {
    std::cout << "Ceci est une Moto" << std::endl;
}

/*
 * On ne précise pas de fonction virtuelle dans le fichier source !!!
 */