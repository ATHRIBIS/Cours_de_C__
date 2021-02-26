//
// Created by Aymeric Schaeffer on 23/02/2021.
//
using namespace std;
#include "Personnage.h"


Personnage::Personnage() : m_vie(100), m_nom("Jack") {}


void Personnage::recevoirDegats(int degats) {
    m_vie -= degats;
}

void Personnage::coupDePoing(Personnage &cible) {
    cible.recevoirDegats(10);
}