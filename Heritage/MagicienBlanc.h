//
// Created by Aymeric Schaeffer on 26/02/2021.
//

#ifndef HERITAGE_MAGICIENBLANC_H
#define HERITAGE_MAGICIENBLANC_H

#include "Magicien.h"

class MagicienBlanc : public Magicien {
public:
    MagicienBlanc(std::string nom);
    void sortEnvol(Personnage &cible);

protected:
    int m_whiteness;
};


#endif //HERITAGE_MAGICIENBLANC_H
