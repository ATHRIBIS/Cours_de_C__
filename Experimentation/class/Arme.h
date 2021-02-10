//
// Created by Aymeric Schaeffer on 05/02/2021.
//

#ifndef COURS_ARME_H
#define COURS_ARME_H

#include <string>

class Arme {
public:
    Arme(const string &mNom, const string &mDescription = "Just an another weapon..", const int mNbPtsAttaque = 3); //constructeur
    int changerArme(Arme &nouvelleArme); //changer d'arme

private:
    std::string m_nom; //nom de l'arme
    std::string m_description; //sa description
    int m_nbPtsAttaque; //le nb de dégats qu'elle inflige
};


#endif //COURS_ARME_H
