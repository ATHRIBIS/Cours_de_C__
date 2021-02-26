//
// Created by Aymeric Schaeffer on 23/02/2021.
//

#ifndef COURS_PERSONNAGE_H
#define COURS_PERSONNAGE_H

#include <iostream>
#include <string>

class Personnage {
public:
    Personnage();
    void recevoirDegats(int degats);
    void coupDePoing(Personnage &cible);

private:
    std::string m_nom;
    int m_vie;
};


#endif //COURS_PERSONNAGE_H
