//
// Created by Aymeric Schaeffer on 26/02/2021.
//

#include "Magicien.h"


void Magicien::bouleDeFeu(Personnage &cible) {
    cible.recevoirDegats(10);
}


void Magicien::enchantementMagique(Personnage &cible) {
    cible.recevoirDegats(5);
}