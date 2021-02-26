//
// Created by Aymeric Schaeffer on 26/02/2021.
//

#ifndef HERITAGE_MAGICIEN_H
#define HERITAGE_MAGICIEN_H

#include "Personnage.h"

class Magicien : public Personnage {
public:
    void enchantementMagique(Personnage &cible);
    void bouleDeFeu(Personnage &cible);

private:
    int m_mana;
};


#endif //HERITAGE_MAGICIEN_H
