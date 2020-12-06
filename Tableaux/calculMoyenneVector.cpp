//
// Created by Aymeric Schaeffer on 29/11/2020.
//
#include "calculMoyenneVector.h"
#include <vector>
double calculMoyenneVector(std::vector<double> const& notes) { // const pour éviter de modifier malencontreusement la vector
    double moyenne(0);
    for (double note : notes) {
        moyenne += note;
    }
    moyenne /= notes.size();
    return moyenne;
}