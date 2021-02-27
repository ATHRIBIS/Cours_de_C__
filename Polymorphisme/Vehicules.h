//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#ifndef COURS_VEHICULES_H
#define COURS_VEHICULES_H

#include <iostream>


class Vehicule {
public:
    void affiche() const;
    void xlaxon() const;

protected:
    int m_prix;
};


class Moto : public Vehicule {
public:
    void affiche() const;

private:
    double m_vitesse;
};


class Voiture : public Vehicule {
public:
    void affiche() const;

private:
    int m_portes;
};


#endif //COURS_VEHICULES_H
