//
// Created by Aymeric Schaeffer on 29/11/2020.
//
#include <vector>
#include <string>
#include <iostream>
//#include "calculMoyenne.h"
#include "calculMoyenneVector.h"
using namespace std;

int main() {
    std::vector<int> tableauIntExemple(3, 1); // Création d'une tableau int à 3 entrée, chacune contenant 3 par défaut
    std::vector<double> tableauDoubleExemple(3, 4.98);
    std::vector<std::string> tableauStringExemple(3, "Sans nom");
    std::vector<std::string> tableauStringExempleNonDeclare;

    tableauStringExemple[0] = "Jhon"; // Asignation aux cases
    tableauStringExemple[1] = "Elize";
    tableauStringExemple[2] = "Jay";
    std::cout << "tableauStringExempleNonDeclare[2] contient : " << tableauStringExemple[2] << std::endl;

    tableauIntExemple[0] = 2; // Affection de 2 a case 0
    std::cout << "Votre tableau d'int exemple contient en premier :" << tableauIntExemple[0] << std::endl;

    tableauDoubleExemple.push_back(8.79); // Ajoute une valeur en fin de vector
    std::cout << "tableauDoubleExemple vient de recevoir une nouvelle valeur ! " << std::endl << "tableauDoubleExemple : ";
    for (int i=0; i<(tableauDoubleExemple.size() - 1); i++) {
        std::cout << tableauDoubleExemple[i] << " ; ";
    } std::cout << tableauDoubleExemple[(tableauDoubleExemple.size() - 1)] << std::endl;

    tableauDoubleExemple.pop_back(); // Suppression de la dernière case
    tableauDoubleExemple.pop_back(); // Suppression de la dernière case
    std::cout << "tableauDoubleExemple vient de perdre ses deux dernières cases ! " << std::endl << "tableauDoubleExemple : ";
    for (int i=0; i<(tableauDoubleExemple.size() - 1); i++) {
        std::cout << tableauDoubleExemple[i] << " ; ";
    } std::cout << tableauDoubleExemple[(tableauDoubleExemple.size() - 1)] << std::endl;

    std::vector<double> mesNotes; // Déclaration vector mes notes
    mesNotes.push_back(10.5); // Ajout de mes notes
    mesNotes.push_back(20);
    mesNotes.push_back(18.5);
    mesNotes.push_back(17);
    std::cout << "Mes notes sont : ";
    for (int i=0; i<(mesNotes.size() - 1); i++) {
        std::cout << mesNotes[i] << " ; ";
    } std::cout << mesNotes[(mesNotes.size() - 1)] << std::endl;
    std::cout << "Ma moyenne est : " << calculMoyenneVector(mesNotes) << std::endl;

    int const tailleX_MySheet(3), tailleY_MySheet(3), tailleZ_MySheet(3); // Tableau multi-dimensionnel
    double tableauTridimensionnel[tailleX_MySheet][tailleY_MySheet][tailleZ_MySheet];

    string stringTest1("Albert"), stringTest2("Einstein"), stringTest3; // Concaténation
    stringTest3 += stringTest1;
    stringTest3 += " ";
    stringTest3 += stringTest2;
    cout << "Concaténation de 2 variable string : " << stringTest3 <<endl;

    return 0;
}