//
// Created by Aymeric Schaeffer on 29/11/2020.
//
#include <fstream>
#include <iostream>
#include <string>
#include "logSystem.h"

using namespace std;

int main() {
    logInit();
    string const scoresPath("/Volumes/Stockage/Développement/Aymeric/2020/Programmez avec le langage C++/Flux/files/scores.txt");
    logAlert(1, "Set path : done");
    logAlert(0, "Trying to open the score stream");
    ofstream scoreStreamOut(scoresPath.c_str(), ios::app); //Déclaration d'un flux sortant, ios::append pour ajouter, pas supprimer
    if (scoreStreamOut) {
        cout << "Le fichier s'est ouvert avec succes !" << endl;
        logAlert(1, "Stream opend with succes !");
        int scoreUtilisateur;
        string nomUtilisateur;
        logAlert(0, "Var init !");

        cout << "Quel est votre nom ?\n/> ";
        getline(cin, nomUtilisateur);
        logAlert(0, "The user supposed to enter its value : nomUtilisateur - stream cin");
        cout << endl << "Quel est votre score ?\n/>";
        cin >> scoreUtilisateur; cin.ignore();
        logAlert(0, "cin.ignore();");
        logAlert(0, "The user supposed to enter its value : scoreUtilisateur - stream cin");
        scoreStreamOut << "Le joueur \"" << nomUtilisateur << "\" à un score de : " << scoreUtilisateur << endl;
        logAlert(1, "App shows in scoreStreamOut stream a text");
    } else {
        cout << "ERREUR : impossible d'ouvrir le fichier !" << endl;
        logError(9, "FATAL: Unable to find scores.txt or their are some trouble in persmissions's file");
    }

    ifstream scoreStreamIn(scoresPath); //Déclaration d'un flux entrant
    if (scoreStreamIn) { //On test si l'ouverture est réussis
        cout << "Le fichier s'est ouvert avec succes !" << endl;
        string ligneDuFichierOuvert; //Variable qui contient la ligne lue

        while (getline(scoreStreamIn, ligneDuFichierOuvert)) { //getline() renvoi true si la lecture est possible ligne suivante
            cout << ligneDuFichierOuvert << endl;
            //On affiche en console la ligne lue
        }

        scoreStreamIn.close();
        /*
         * En sortant du bloc le fichier se referme tout seul
         * mais on peut le forcer à se fermer avec l'appel .close()
         *
         * De la m^ manière on peut déclarer un flux sans fichier,
         * et le déclrer ensuite : monflux.open("lien.c_str()")
         */
    } else {
        cout << "ERREUR : impossible d'ouvrir le fichier !" << endl;
        logError(9, "FATAL: Unable to find scores.txt or their are some trouble in persmissions's file");

    }
    ofstream cursorTestStreamOut(scoresPath.c_str(), ios::app); //Écriture
    ifstream cursorTestStreamIn(scoresPath.c_str(), ios::app); //Lecture
    int position = cursorTestStreamIn.tellg(); //On récupère la position de
    cout << "Nous nous situons position : " << position << " du fichier (caractère)"<< endl;

    cout << "A quelle position voulez vous aller de puis le debut ? (en caractere)" <<endl<< "/> ";
    int cursorLine(0); //Variable pour demander a luser la position voulu
    cin >> cursorLine; cin.ignore();
    cursorTestStreamIn.seekg(cursorLine, ios::beg); //On place le curseur de écriture =/= curseur lecture
    position = cursorTestStreamIn.tellg(); //On récupère la position du curseur de écriture =/= curseur lecture
    cout << "Nous nous situons modification, position : " << position << " du fichier (caractère)"<< endl;

    cursorTestStreamOut.seekp(0, ios::end);
    int fileSize;
    fileSize = cursorTestStreamOut.tellp();
    cout << "La taille du fichier scores.txt est de : " << fileSize <<" octet(s)." << endl;


    return 0;

}