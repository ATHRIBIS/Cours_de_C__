//
// Created by Aymeric Schaeffer on 23/02/2021.
//

#ifndef COURS_PERSONNAGE_H
#define COURS_PERSONNAGE_H

#include "Arme.h"

class Personnage {
public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme); //Défini les paramètre d'une arme en meme temps que le personnage
    Personnage(Personnage const& objetReferent); //Constructeur de copie
    ~Personnage();
    Personnage& operator=(Personnage const& objetReferent);

    void estAttaque(Personnage &attaquant);

private:
    int m_vie;
    int m_mana;
    Arme *m_arme; //Pointeur vers l'arme
};


#endif //COURS_PERSONNAGE_H
