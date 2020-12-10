//
// Created by Aymeric Schaeffer on 10/12/2020.
//

#ifndef COURS_PERSONNAGE_H
#define COURS_PERSONNAGE_H
#include <string>

/*
 * Ne jamais utiliser using namespace std; au début d'un header, fichier .h
 */

class Personnage {
public:
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant();

private:
    int m_vie;
    int m_mana;
    std::string m_nomArme;
    int m_degatsArme;
};


#endif //COURS_PERSONNAGE_H
