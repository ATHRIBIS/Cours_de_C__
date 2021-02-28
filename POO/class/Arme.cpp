//
// Created by Aymeric Schaeffer on 12/12/2020.
//

#include "Arme.h"
#include <iostream>

using namespace std;

Arme::Arme(std::string nom, int degats) : m_nom(nom), m_degats(degats) {}

void Arme::changer(std::string nom, int degats) {
    m_nom = nom;
    m_degats = degats;
}
void Arme::afficher() const {
    cout << "Arme : " << m_nom << " (Dégâts : " << m_degats << ")" << endl;
}

int Arme::getMDegats() const {
    return m_degats;
}
