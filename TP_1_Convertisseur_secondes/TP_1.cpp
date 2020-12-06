//
// Created by Aymeric Schaeffer on 22/11/2020.
//

#include <iostream>
#include "maths.h"


void nombreRecu() {
    int nombreRecu;
    std::cout << "Mon nombre de départ est : " << std::endl;
    std::cin >> nombreRecu;
    nombreRecu = ajoutDeux(nombreRecu);
    std::cout << "Mon nombre passé par ajoutDeux() est égal à : " << nombreRecu << std::endl;
}
