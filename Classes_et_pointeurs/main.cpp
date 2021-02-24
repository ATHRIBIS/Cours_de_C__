//
// Created by Aymeric Schaeffer on 23/02/2021.
//

using namespace std;
#include "Personnage.h"

/*
 * Le but de ce chapitre est d'utiliser des pointeurs pour gerer les assemblages de classes
 * Dans le chapitre POO, Arme était inclu DANS Personnage,
 * -> Arme m_arme;
 * Changeons cela (pointeur) pour que le code soit plus modulaire !
 * -> Arme *m_arme;
 */

/*
 * A noter !
 * Un pointeur vers une classe ne créer pas tout seul la classe.
 * Il faut utiliser une allocation dynamique : new, DANS LE CONSTRUCTEUR
 * -> Personnage::Personnage() : m_arme(0), m_vie(0), m_mana(100) { //Constructeur
 *          m_arme = new Arme();
 *    }
 */

