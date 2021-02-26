//
// Created by Aymeric Schaeffer on 26/02/2021.
//
#include "Magicien.h"

Magicien::Magicien(std::string nom) : Personnage(nom), m_mana(100) {}


void Magicien::sortSoin() {
    m_vie += 10;
    if (m_vie > 100) {
        m_vie = 100;
    }
}


void Magicien::sePresenter() const {
    Personnage::sePresenter();
    std::cout << "Je me présente avec la fonction de présentation de la classe Magicien" << std::endl;
}