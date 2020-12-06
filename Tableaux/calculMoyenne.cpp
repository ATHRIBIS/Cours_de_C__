//
// Created by Aymeric Schaeffer on 29/11/2020.
//
#include "calculMoyenne.h"
double calculMoyenne(double tableau[], int tailleTableau) {
    double moyenne;
    for (int i=0; i<tailleTableau; i++) {
        moyenne += tableau[i];
    }
    moyenne /= tailleTableau;
    return moyenne;
}