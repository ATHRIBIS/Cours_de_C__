//
// Created by Aymeric Schaeffer on 27/02/2021.
//

#ifndef COURS_GARAGE_H
#define COURS_GARAGE_H

#include "Vehicules.h"
#include <string>
#include <vector>

class Garage {
public:
    void ajouterVehicule(int matricul, int prix);
    void supprimerVehicule();

private:
    std::vector<Vehicule*> listeVehicules; //On créé un vector dynamique

};


#endif //COURS_GARAGE_H
