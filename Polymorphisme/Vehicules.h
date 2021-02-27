//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#ifndef COURS_VEHICULES_H
#define COURS_VEHICULES_H

#include <iostream>


class Vehicule {
public:
    virtual void affiche() const;
    /*
     * le mot-clef virtual est indiqué dans le header .h UNIQUEMENT
     * pas de le fichier source .cpp
     */

protected:
    int m_prix;
};


class Moto : public Vehicule {
public:
    virtual void affiche() const;
    /*
     * En théorie, les classe filles sont déja virtuelle par héritage
     * On peut préciser virtual pour mieux s'y retrouver
     */

private:
    double m_vitesse;
};


class Voiture : public Vehicule {
public:
    virtual void affiche() const;
    /*
     * Idem ici que l28-29
     */

private:
    int m_portes;
};


#endif //COURS_VEHICULES_H
