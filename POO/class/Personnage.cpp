//
// Created by Aymeric Schaeffer on 10/12/2020.
//
/*
 * - NOTRE FICHIER SOURCE CONTENANT LES !METHODES! DE NOTRE CLASS
 * EX : Personnage::attaquer() {}
 *
 * - ON INCLU LE HEADER DE NOTRE CLASS
 */
#include "Personnage.h"
#include "Arme.h"

using namespace std;
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(nomArme, degatsArme) {

} // AVEC SURCHARGE

// Les attributs sont donnés au constructeur dans le fichier source

void Personnage::recevoirDegats(int nbDegats) {
    m_vie -= nbDegats; // On enlève le nombre de dégats reçus
    if (m_vie < 0) {
        m_vie = 0;
    } // Evite d'avoir une vie négative
}

void Personnage::attaquer(Personnage &cible) { // référence vers un objet de type Personnage
    cible.recevoirDegats(m_arme.getMDegats()); // On inflige les dégats de l'arme du joueur a la cible (qui recoit les dégats)
}

void Personnage::boirePotionDeVie(int quantitePotion) {
    m_vie += quantitePotion;
    if (m_vie > 100) {
        m_vie = 100;
    }
}

void Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme) {
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() {
    if (m_vie > 0) { // Plus que 0 de vie ?
        return true; // Vivant
    } else {
        return false; // Mort
    }
}

void Personnage::quelleArme() {
    m_arme.afficher();
}
