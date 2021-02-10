//
// Created by Aymeric Schaeffer on 05/02/2021.
//

using namespace std;

#include "Arme.h"

int Arme::changerArme(Arme &nouvelleArme) {
    nouvelleArme.m_nom = m_nom;
    nouvelleArme.m_description = m_description;
    nouvelleArme.m_nbPtsAttaque = m_nbPtsAttaque;
}

Arme::Arme(const string &mNom, const string &mDescription, const int mNbPtsAttaque) : m_nom(mNom),
                                                                                m_description(mDescription),
                                                                                m_nbPtsAttaque(mNbPtsAttaque) {}
