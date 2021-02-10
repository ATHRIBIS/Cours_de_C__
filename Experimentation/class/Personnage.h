//
// Created by Aymeric Schaeffer on 05/02/2021.
//

#ifndef COURS_PERSONNAGE_H
#define COURS_PERSONNAGE_H

#include <string>

#include "Arme.h"
#include "Item.h"

class Personnage {
public:
    Personnage(const std::string &mNom, const std::string &mDescription, int mVie, int mFaim, bool mEnVie, std::string mNomArme,
               std::string mArmeDescription, int mArmeDegat, std::string mNomItem);

    ~Personnage();

    // Définition des méthodes relatives au combat

    int attaquer(Personnage& cibleAttaque);
    int estBlesse(int& nbDegat);
    int estSoigne(int& nb);
    void estEnVie(Personnage& cible);

    // Définition des méthodes relatives aux actions diverses

    int consommer();
    std::string dire(std::string& textDit);

    void setMVie(int mVie);

    int getMVie() const;

private:
    std::string m_nom;
    std::string m_description;
    int m_vie;
    int m_faim;
    bool m_enVie;
    Arme m_arme; //personnage possède une arme
    Item m_item;
};


#endif //COURS_PERSONNAGE_H
