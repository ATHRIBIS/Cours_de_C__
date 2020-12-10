//
// Created by Aymeric Schaeffer on 06/12/2020.
//
/*
 * - NOTRE PROGRAMME PRINCIPAL (INCLUS HEADER CLASSE)
 * ON CRÉER NOS OBJETS A PARTIR DE NOTRE CLASSE
 * EX : david, goliath DEPUIS Personnage
 *
 * - ON APPEL ENSUIE NOS OBJETS
 */
#include <iostream>
#include <string>
#include "class/Personnage.h"
using namespace std;
int main() {
    // Nouveau constructeur

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);

    goliath.changerArme("Double hache superpuissante grrr", 40);
    goliath.attaquer(david);
    return 0;
}
