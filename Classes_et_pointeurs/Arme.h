//
// Created by Aymeric Schaeffer on 23/02/2021.
//

#ifndef COURS_ARME_H
#define COURS_ARME_H

#include <string>

class Arme {
public:
    Arme();
    Arme(std::string nomArme, int degatsArme);

    int getMDegats() const;

private:
    int m_degats;
    std::string m_nomArme;
};


#endif //COURS_ARME_H
