//
// Created by Aymeric Schaeffer on 10/02/2021.
//

#include "ZFraction.h"

ZFraction::ZFraction(int num, int den) : m_num(num), m_den(den) {} //les deux params sont donnés
ZFraction::ZFraction(int ent) : m_num(ent), m_den(1) {} //fraction sur 1
ZFraction::ZFraction() : m_num(0), m_den(0) {} //fraction nulle

ZFraction& ZFraction::operator+=(ZFraction const& b) {
    m_num = (m_num*b.m_den + b.m_num*m_den); //règle de maths d'addition de fraction
    m_den = (m_den*b.m_den); //en mettant sur le m^ dénominateur
    return *this;
}

ZFraction& ZFraction::operator*=(ZFraction const& b) {
    m_num *= b.m_num;
    m_den *= b.m_den;
    return *this;
}

ZFraction operator+(ZFraction const& a, ZFraction const& b) {
    ZFraction c(a); //c est la copie de a pour ne pas modifier a
    c += b; //a (copie) est additionné à b
    return c; //copie renvoyé
}

ZFraction operator*(ZFraction const& a, ZFraction const& b) {
    ZFraction c(a); //pareille que operator+
    c *= b;
    return c;
}

int pgcd(int a, int b) {
    while (b != 0) {
        const int t = b;
        b = a%b;
        a=t;
    }
    return a;
}
