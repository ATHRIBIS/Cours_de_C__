//
// Created by Aymeric Schaeffer on 26/02/2021.
//

#include "Guerrier.h"

Guerrier::Guerrier(std::string nom) : Personnage(nom), m_energie(100) {}


void Guerrier::coupDeMassueLegendaire(Personnage &cible) {
    cible.recevoirDegats(15);
}