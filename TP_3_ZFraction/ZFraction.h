#include <__bit_reference>
//
// Created by Aymeric Schaeffer on 10/02/2021.
//

#ifndef COURS_ZFRACTION_H
#define COURS_ZFRACTION_H


class ZFraction {
public:
    //déclaration des constructeurs
    ZFraction(int num, int den);
    ZFraction(int ent);
    ZFraction();

    //methodes de calculs
    ZFraction& operator+=(ZFraction const& b); //dans la classe car besoin d'acceder aux valeurs private
    ZFraction& operator*=(ZFraction const& b); //les autres operateurs utilisent ces methodes-ci

    void afficher(std::ostream &flux) const;
    bool estEgal(ZFraction const &autre) const;

private:
    int m_num;
    int m_den;
};

ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);
std::ostream &operator<<(std::ostream &flux, ZFraction const &fraction);
bool operator==(ZFraction const &a, ZFraction const &b);
bool operator!=(ZFraction const &a, ZFraction const &b);
int pgcd(int a = 0, int b = 0);

#endif //COURS_ZFRACTION_H
