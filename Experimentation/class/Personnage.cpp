//
// Created by Aymeric Schaeffer on 05/02/2021.
//

using namespace std;

#include <string>

#include "Personnage.h"
#include "Item.h"

// Définition des méthodes relatives au combat

int Personnage::attaquer(Personnage& cible) {
    int state=1;
    cible.estBlesse(state);
    return state;
}
int Personnage::estBlesse(int& nbDegat) {
    int state=1;
    m_vie -= nbDegat;
    estEnVie(*this);
    return state;
}
int Personnage::estSoigne(int& nb) {
    int state=1;
    m_vie += nb;
    estEnVie(*this);
    return state;
}
void Personnage::estEnVie(Personnage& cible) {
    if (cible.m_vie > 0 && cible.m_vie <= 20) {
        cible.m_enVie = true;
    } else if (cible.m_vie > 20) {
        cible.m_enVie = true;
        cible.m_vie = 20;
    } else {
        cible.m_enVie = false;
        cible.m_vie = 0;
    }
}

// Définition des méthodes relatives aux actions diverses

int Personnage::consommer() {
    int state=1;
    return state;
}
string Personnage::dire(string& text) {
    return text;
}

Personnage::Personnage(const string &mNom,
                       const string &mDescription,
                       int mVie,
                       int mFaim,
                       bool mEnVie,
                       string mNomArme,
                       string mArmeDescription,
                       int mArmeDegat,
                       string mNomItem)
                       : m_nom(mNom),
                       m_description(mDescription),
                       m_vie(mVie),
                       m_faim(mFaim),
                       m_enVie(mEnVie),
                       m_arme(mNomArme, mDescription, mArmeDegat), m_item(mNomItem) {}

Personnage::~Personnage() {
}

void Personnage::setMVie(int mVie) {
    m_vie = mVie;
}

int Personnage::getMVie() const {
    return m_vie;
}
