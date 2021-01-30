//
// Created by Aymeric Schaeffer on 19/12/2020.
//

#include "duree.h"
#include <iostream>

using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes) {} //constructeur objet Duree

Duree operator+(Duree const& a, Duree const& b) { //définition de l'opérateur
    Duree copie(a);
    copie += b;
    return copie;
}
Duree& Duree::operator+=(const Duree &duree2){ //définition de l'opérateur
    // Secondes
    m_secondes += duree2.m_secondes;
    m_minutes += m_secondes/60;
    m_secondes %= 60;

    // Minutes
    m_minutes += duree2.m_minutes;
    m_heures += m_minutes/60;
    m_minutes %= 60;

    // Heures
    m_heures += duree2.m_heures;

    return *this;
}
void Duree::afficher() const { // Permet d'afficher l'heure
    cout << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}