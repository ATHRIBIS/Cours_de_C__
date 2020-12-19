//
// Created by Aymeric Schaeffer on 19/12/2020.
//

#ifndef COURS_DUREE_H
#define COURS_DUREE_H


class Duree {
public:
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    Duree& operator+=(const Duree &duree2);
    void afficher() const;

private:
    int m_heures;
    int m_minutes;
    int m_secondes;
};
Duree operator+(Duree const& a, Duree const& b);


#endif //COURS_DUREE_H
