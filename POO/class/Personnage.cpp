//
// Created by Aymeric Schaeffer on 10/12/2020.
//

#include "Personnage.h"
#include <string>
using namespace std;

void Personnage::recevoirDegats(int nbDegats) {
    m_vie -= nbDegats; // On enlève le nombre de dégats reçus
    if (m_vie < 0) {
        m_vie = 0;
    } // Evite d'avoir une vie négative
}

void Personnage::attaquer(Personnage &cible) { // référence vers un objet de type Personnage
    cible.recevoirDegats(m_degatsArme); // On inflige les dégats de l'arme du joueur a la cible (qui recoit les dégats)
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme) {
    m_nomArme = nomNouvelleArme;
    m_degatsArme = degatsNouvelleArme;
}

bool Personnage::estVivant() {
    if (m_vie > 0) { // Plus que 0 de vie ?
        return true; // Vivant
    } else {
        return false; // Mort
    }
}

