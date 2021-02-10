//
// Created by Aymeric Schaeffer on 10/02/2021.
//

using namespace std;

#include <iostream>
#include "Item.h"

void Item::estConsomme() {
    m_utilisable = false;
}
void Item::utiliser() {
    switch (m_type) {
        case 0:
            cout << "L'objet utilisé n'a commit aucun changement" << endl;
            break;
        case 1:
            // Type redonner de la vie;
            break;


    }
}

Item::Item(const string &mNom, const string &mDescription, bool mUtilisable, int mType, int mValue1, int mValue2,
           int mValue3) : m_nom(mNom), m_description(mDescription), m_utilisable(mUtilisable), m_type(mType),
                          m_value1(mValue1), m_value2(mValue2), m_value3(mValue3) {}
