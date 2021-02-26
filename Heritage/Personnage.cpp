//
// Created by Aymeric Schaeffer on 23/02/2021.
//
using namespace std;
#include "Personnage.h"


Personnage::Personnage(std::string nom) : m_vie(100), m_nom(nom) {}


void Personnage::recevoirDegats(int degats) {
    m_vie -= degats;
}

void Personnage::coupDePoing(Personnage &cible) {
    cible.recevoirDegats(10);
}
void Personnage::sePresenter() const {
    cout << "Je m'appel " << m_nom << "." << endl;
    cout << "J'ai " << m_vie << " points de vie.\n" << endl;
}