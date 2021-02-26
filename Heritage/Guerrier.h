//
// Created by Aymeric Schaeffer on 26/02/2021.
//

#ifndef HERITAGE_GUERRIER_H
#define HERITAGE_GUERRIER_H

#include "Personnage.h"

/*
 * Création de la clase Guerrier p300
 *
 * Elle hérite de la classe Personnage.
 * C'est pourquoi on inclu le header Personnage.h
 *
 * A est B
 * Un Guerrier est un Personnage
 * -> relation d'héritage
 *
 * Guerrier(fille) hérite de Personnage(mère)
 * -> Guerrier recoit les méthodes et attributs de Personnage
 */

class Guerrier : public Personnage {
public:
    void coupDeMassueLegendaire(Personnage &cible); //Methode spécifique a la classe Guerrier
};


#endif //HERITAGE_GUERRIER_H
