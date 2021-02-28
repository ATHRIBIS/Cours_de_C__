//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#ifndef COURS_VEHICULES_H
#define COURS_VEHICULES_H

#include <iostream>


class Vehicule {
public:
    explicit Vehicule(int matricul, int prix = 10);
    virtual ~Vehicule(); //On remarque ici le terme virtual
    virtual void affiche() const;

protected:
    int m_prix;
    int m_matricul;
};


class Moto : public Vehicule {
public:
    explicit Moto(int matricul, int prix = 5, int vitesse = 90);
    ~Moto() override;
    void affiche() const override;

private:
    double m_vitesse;
};


class Voiture : public Vehicule {
public:
    explicit Voiture(int matricul, int prix = 10, int portes = 4);
    ~Voiture() override;
    void affiche() const override;

private:
    int m_portes;
};


class Camion : public Vehicule {
public:
    explicit Camion(int matricul, int prix = 10000, double poids = 3.5);
    ~Camion() override;
    void affiche() const override;

private:
    int m_poids;
};


#endif //COURS_VEHICULES_H
