//
// Created by Aymeric Schaeffer on 23/02/2021.
//

#ifndef COURS_PERSONNAGE_H
#define COURS_PERSONNAGE_H

#include <iostream>
#include <string>

class Personnage {
public:
    Personnage(std::string nom);

    void recevoirDegats(int degats);
    void coupDePoing(Personnage &cible);

    void sePresenter() const;

protected:
    std::string m_nom;
    int m_vie;
};


#endif //COURS_PERSONNAGE_H
