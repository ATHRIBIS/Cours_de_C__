//
// Created by Aymeric Schaeffer on 06/12/2020.
//
#include <iostream>
#include <string>
#include "class/Personnage.h"
using namespace std;
int main() {
    Personnage david, goliath; // Création de deux objets
    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);

    goliath.changerArme("Double hache superpuissante grrr", 40);
    goliath.attaquer(david);
    return 0;
}
