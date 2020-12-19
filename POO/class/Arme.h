//
// Created by Aymeric Schaeffer on 12/12/2020.
//

#ifndef COURS_ARME_H
#define COURS_ARME_H
#include <string>

class Arme {
public:
    Arme(std::string nom = "", int degats = 0);
    void changer(std::string nom, int degats);

    void afficher() const;
    int getMDegats() const;

private:
    std::string m_nom;
    int m_degats;
};


#endif //COURS_ARME_H
