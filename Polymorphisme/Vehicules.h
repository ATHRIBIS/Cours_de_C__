//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#ifndef COURS_VEHICULES_H
#define COURS_VEHICULES_H

#include <iostream>


class Vehicule {
public:
    Vehicule(int prix = 10);
    virtual ~Vehicule(); //On remarque ici le terme virtual
    virtual void affiche() const;

protected:
    int m_prix;
};


class Moto : public Vehicule {
public:
    Moto(int prix = 5, int vitesse = 90);
    virtual ~Moto();
    virtual void affiche() const;

private:
    double m_vitesse;
};


class Voiture : public Vehicule {
public:
    Voiture(int prix = 10, int portes = 4);
    virtual ~Voiture();
    virtual void affiche() const;

private:
    int m_portes;
};


#endif //COURS_VEHICULES_H
