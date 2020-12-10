//
// Created by Aymeric Schaeffer on 06/12/2020.
//
#include <iostream>
#include <string>

using namespace std;
/*
 * -----------------------------------------------------------
 * Une classe est par défaut : privé
 * (le terme struct est par défaut : public)
 * Toujours déclarer ses attributs privés (boite noir)
 * Et passer par des méthodes pour les modifiers
 *
 * On délcare les méthodes en premier, puis les attributs
 *
 * POO INCLUS DANS MAIN
 * PROCHAINE ETAPE : SEPARER LE MAIN
 * -----------------------------------------------------------
 */
class Personnage{
public: //// Disponible en exterieur /////////////////////////
    //////// Méthodes ////////////////////////////////////////
    void attaquer(Personnage &cible) { // En POO on commence par défénir les méthodes

    }
    void recevoirDegats(int nbDegats) {

    }
    void estVivant(){

    }
    void boirePotionDeVie(int quantitePV) {

    }
    void changerArme(string nomNouvelleArme, int degatsNouvelleArme) {

    }

private: /// Disponible seulement à l'interieur ///////////////
    //////// Attributs ////////////////////////////////////////
    int m_vie; // m de membre = variable membre
    int m_mana;
    string m_nomArme;
    int m_degatsArme;

}; // Avec un ; a la fin !

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
