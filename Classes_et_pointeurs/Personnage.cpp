//
// Created by Aymeric Schaeffer on 23/02/2021.
//
using namespace std;
#include "Personnage.h"
#include "Arme.h"

Personnage::Personnage() : m_vie(100), m_mana(100), m_arme(0) {
    m_arme = new Arme(); //new appel le constructeur par defaut de la classe Arme
    // !!! new renvoie l'adresse de l'objet créé, qui est stocké dans le pointeur m_Arme
}
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(0) {
    m_arme = new Arme(nomArme, degatsArme); //new appel le constructeur surchargé de la classe Arme
    // !!! new renvoie l'adresse de l'objet créé, qui est stocké dans le pointeur m_Arme
}
Personnage::Personnage(Personnage const& objetReferent) : m_vie(objetReferent.m_vie), m_mana(objetReferent.m_mana), m_arme(0) { //On s'occupe de m_arme dans les crochets
    /*
     * Si on fait :
     * m_arme = new Arme();
     * On utilise le constructeur par défaut, et non un autre, qui pourrait être demandé :
     * m_arme = new Arme(objetReferent.m_arme)
     * Sauf que ! m_arme est un pointeur !
     */
    m_arme = new Arme(*(objetReferent.m_arme));
    // On passe en argument un pointeur
    // Figure 17.7 Page 293
}
Personnage::~Personnage() {
    delete m_arme;
}

void Personnage::estAttaque(Personnage &attaquant) {
    m_vie -= attaquant.m_arme->getMDegats(); //La flèche indique (comme un point .) la propriété d'un pointeur
}
//macbookpro
