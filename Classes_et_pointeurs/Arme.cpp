//
// Created by Aymeric Schaeffer on 23/02/2021.
//

#include "Arme.h"
#include <iostream>

using namespace std;

Arme::Arme() : m_degats(10) {

}
Arme::Arme(string nomArme, int degatsArme) : m_degats(degatsArme), m_nomArme(nomArme) {

}
int Arme::getMDegats() const {
    return m_degats;
}

