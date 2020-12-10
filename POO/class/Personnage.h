//
// Created by Aymeric Schaeffer on 10/12/2020.
//
/*
 * - NOTRE FICHIER HEADER
 * - PROTOYPE DE NOTRE CLASSE
 *
 * -- METHODES DEFINIS DANS FICHIER SOURCE
 * -- ATTRIBUTS INITLISÉS DANS FICHIER SOURCE
 * -- CONSTRUCTEUR INITIALISÉ DANS HEADER
 */
#ifndef COURS_PERSONNAGE_H
#define COURS_PERSONNAGE_H
#include <string>

/*
 * Ne jamais utiliser using namespace std; au début d'un header, fichier .h
 */

class Personnage {
public:
    Personnage(); // Constructeur
    /*
     * Le constructeur est une méthode qui n'a pas de type (pas de void etc)
     * Il a le même nom que sa classe
     */
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
