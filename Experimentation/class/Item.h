//
// Created by Aymeric Schaeffer on 10/02/2021.
//

#ifndef COURS_ITEM_H
#define COURS_ITEM_H

#include <string>

class Item {
public:
    Item(const std::string &mNom, const std::string &mDescription = "Just an another item..", bool mUtilisable = true, int mType = 0, int mValue1 = 0, int mValue2 = 0,
         int mValue3 = 0);

    void utiliser();
    void estConsomme();

private:
    std::string m_nom;
    std::string m_description;
    bool m_utilisable;
    int m_type;
    int m_value1; //point de vie
    int m_value2; //point de défense
    int m_value3; //point de mana
};


#endif //COURS_ITEM_H
