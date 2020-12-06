//
// Created by Aymeric Schaeffer on 06/12/2020.
//
#include <iostream>
#include <string>

using namespace std;

int lesson() {
    // Les pointeurs : les bases
    int myScore(10); // Créer une variable
    int *ptrScore(nullptr); // Créer un pointeur vide - ! Toujours déclarer un pointeur vide !

    ptrScore = &myScore; // Le pointeur pointe vers le symbole (adresse mémoire) de myScore

    cout << "myScore : " << myScore << endl // Valeur de la variable myScore
    << "ptrScore : " << ptrScore << endl // Valeur du pointeur-score
    << "&myScore : " << &myScore << endl // Adresse de la variable myScore
    << "*ptrScore : " << *ptrScore << endl; // Accède a la valeur de la variable pointée == déréférencer

    // Allocation dynamique
    int *monJoliPointeur(nullptr); // Créer un pointeur vide == 0 : aucune adresse mémoire
    monJoliPointeur = new int; // Créer une variable vide et l'attribue au pointeur. Cette variable n'a pas de nom
    *monJoliPointeur = 2;
    *monJoliPointeur = 3; // Affection a la variale sans nom par déréférencement (affection par pointeur)

    // Libérer la mémoire
    delete monJoliPointeur; // On libère la case mémoire (supprime la variable)
    monJoliPointeur = nullptr; // Pointeur ne pointe plus vers la case mémoire d'avant.
    return 0;
}
void jeuQuestions() {
    // Choisir parmi plusieurs variable
    string reponseA, reponseB, reponseC;
    reponseA = "La peur de la loterie";
    reponseB = "la peur du noir";
    reponseC = "La peur des vendredis 13";
    cout << "Qu'est ce que la 'kenophobie' ?" << endl
    << "A) " << reponseA << endl
    << "B) " << reponseB << endl
    << "C) " << reponseC << endl;

    char reponse;
    cout << "Quelle est votre reponse ? \n/> ";
    cin >> reponse;

    string *reponseUtilisateur(nullptr);
    switch (reponse) {
        case 'A':
            reponseUtilisateur = &reponseA;
            break;
        case 'B':
            reponseUtilisateur = &reponseB;
            break;
        case 'C':
            reponseUtilisateur = &reponseC;
            break;
    }
    cout << "Vous avez choisis la réponse : " << *reponseUtilisateur << endl;
}

int main() {
    lesson();
    jeuQuestions();
    return 0;
}