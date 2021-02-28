//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#include "Vehicules.h"

/*
 * Définition de la classe Vehicule
 */

void Vehicule::affiche() const {
    std::cout << "Ceci est un Véhicule au prix de " << m_prix << " euros." << std::endl;
}
Vehicule::Vehicule(int matricul, int prix) : m_matricul(matricul), m_prix(prix) {}
Vehicule::~Vehicule() noexcept = default;

/*
 * Définition de la classe Voiture
 */

void Voiture::affiche() const {
    std::cout << "Ceci est une Voiture a " << m_portes << " portes, valant " << m_prix << " euros." << std::endl;
}
Voiture::Voiture(int matricul, int prix, int portes) : Vehicule(matricul, prix), m_portes(portes) {}
Voiture::~Voiture() noexcept = default;
/*
 * Définition de la classe Moto
 */

void Moto::affiche() const {
    std::cout << "Ceci est une Moto allant a " << m_vitesse << " km/h, au prix de " << m_prix << " euros." << std::endl;
}
Moto::Moto(int matricul, int prix, int vitesse) : Vehicule(matricul, prix), m_vitesse(vitesse) {}
Moto::~Moto() noexcept = default;

/*
 * Définition de la classe Moto
 */

void Camion::affiche() const {
    std::cout << "Ceci est un Camion pesant " << m_poids << " tonnes, au prix de " << m_prix << " euros." << std::endl;
}
Camion::Camion(int matricul, int prix, double poids) : Vehicule(matricul, prix), m_poids(poids) {}
Camion::~Camion() noexcept = default;


/*
 * On ne précise pas de fonction virtuelle dans le fichier source !!!
 */