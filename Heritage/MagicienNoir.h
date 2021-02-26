//
// Created by Aymeric Schaeffer on 26/02/2021.
//

#ifndef HERITAGE_MAGICIENNOIR_H
#define HERITAGE_MAGICIENNOIR_H

#include "Magicien.h"
class MagicienNoir : public Magicien {
public:
    MagicienNoir(std::string nom);
    void sortMort(Personnage &cible);

protected:
    int m_darkness;
};


#endif //HERITAGE_MAGICIENNOIR_H
