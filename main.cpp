//
// Created by Aymeric Schaeffer on 21/11/2020.
//

#include <iostream>
#include <string>
#include <vector>

#include "TP_1_Convertisseur_secondes/maths.h"
#include "TP_1_Convertisseur_secondes/convertSeconds.h"
#include "Tableaux/calculMoyenne.h"
using namespace std;

void hub() {
    //cahpitre 6 and 7
    int cinEntry;
    do {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                "====================== KILO ======================\n"
                "Hi, my name is Kilo.\n"
                "How can i help u ?\n"
                "U can choose an option just below :\n\n"
                "-------------------------------------------------\n"
                "[1] Can u explain me how the world works ?\n" //done
                "[2] Why red is red ?\n" //done
                "[3] calc();\n" //in progress
                "[4] Converter\n"
                "[0] My bad, BYE \n"
                "-------------------------------------------------\n"
                "Did u choose ?\n"
                "I can advise u the 3rd\n"
                "====================== KILO ======================\n"
                "/> ";
        cin >> cinEntry;
        switch (cinEntry) {
            case 1:
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                        "====================== KILO ======================\n"
                        "U know .. sometimes it works, sometimes not.\n"
                        "Sometimes ur wrong, sometimes ur right..\n"
                        "Sometimes a life appear just like a star,\n"
                        "And forgot its previous life\n"
                        "So it returns back and see how far is it\n"
                        "To the moon, and the heart of the earth\n\n\n"
                        "-------------------------------------------------\n"
                        "[1] Okay ...\n"
                        "[0] So weird ... BYE KILO \n"
                        "-------------------------------------------------\n"
                        "====================== KILO ======================\n"
                        "/> ";
                        cin >> cinEntry;
                break;
            case 2:
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                        "====================== KILO ======================\n"
                        "Red is just red\n"
                        "..\n"
                        "Like a poppy\n"
                        "Like ur lips\n"
                        "Like my mind\n"
                        "Like love\n\n\n\n"
                        "-------------------------------------------------\n"
                        "[1] Sounds pretty\n"
                        "[0] U crazy BYE KILO\n"
                        "-------------------------------------------------\n"
                        "====================== KILO ======================\n"
                        "/> ";
                cin >> cinEntry;
                break;
            case 3:
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                        "====================== KILO ======================\n"
                        "LOOK AT MY CALC DUDE\n"
                        "I JUST BOUGHT A HUUUUGE CALC OMG THATS SO BIIIG\n"
                        "LOOKS THICK AND THICK AND MORE BIG THAN I THOUGHT\n"
                        "ANNNHHHH YEEEAHHHH UNHHHHH THATS SO BIG\n\n\n\n"
                        "-------------------------------------------------\n"
                        "[1] Addition\n"
                        "[2] Division\n"
                        "[3] Errr... thing ? like an explodeNumberThings..\n"
                        "[0] U kinky BYE KILO\n"
                        "-------------------------------------------------\n"
                        "====================== KILO ======================\n"
                        "/> ";
                cin >> cinEntry;
                switch (cinEntry) {
                    case 1:
                        do {
                            double a, b, resultKilo;
                            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                                    "====================== KILO ======================\n"
                                    "Whats ur a number bro ?\n\n\n\n\n\n\n\n\n"
                                    "Hurry up\n"
                                    "\n\n"
                                    "NOW\n"
                                    "====================== KILO ======================\n"
                                    "/> a = ";
                            cin >> a;
                            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                                    "====================== KILO ======================\n"
                                    "Whats ur b number bro ?\n\n\n\n\n\n\n\n\n"
                                    "b like boat\n"
                                    "\n\n"
                                    "u stupid\n"
                                    "====================== KILO ======================\n"
                                    "/> b = ";
                            cin >> b;
                            resultKilo = a+b;
                            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
                                    "====================== KILO ======================\n"
                                    "Seems like ur result look like seem look seelook :\n"
                                    "just kidding\n"
                                    "it is :\n" <<
                                 a << " + " << b << " = " << resultKilo <<
                                 "\n\n\n-------------------------------------------------\n"
                                 "[1] That's nice but idc\n"
                                 "[2] Lets do it again\n"
                                 "[0] U cool but BYE KILO\n"
                                 "-------------------------------------------------\n"
                                 "U stupid, using a calc for that ? thats too easy\n"
                                 "for me.\n"
                                 "====================== KILO ======================\n"
                                 "/> ";
                            cin >> cinEntry;
                        } while (cinEntry == 2);
                        break;
                    default:
                        cinEntry = 0;
                }
            case 4:
                int convertHoursInput, convertMinutesInput, convertSecondsInput;
                cout << "Enter ur hours :\n/> " << endl;
                cin >> convertHoursInput;
                cout << "Enter ur minutes :\n/> " << endl;
                cin >> convertMinutesInput;
                cout << "Enter ur seconds :\n/> " << endl;
                cin >> convertSecondsInput;
                cout << "Waw amazing thats make : " << convertSeconds(convertHoursInput, convertMinutesInput, convertSecondsInput) << "seconds !";
                cin >> cinEntry;
                break;
        }
        cin.ignore();                                                                                                   //Au cas ou ..
    } while (cinEntry != 0);
}

void inversionNombre(double& d, double& e) {                                                                            //Le & permet de faire un passage par référence et nn par valeur. pour faire une référence constante :
    double tamp = d;                                                                                                    //double const& e, dans le cadre des fonctions
    d = e;
    e = tamp;
}

int second_main() {
    //chapitre 4
    int ageUtilisateur(16);
    string prenom("Aymeric"), nom("Schaeffer");
    __unused bool partieGagnee;                                                                                         //On ne met pas de parentheses pour des variables vides

    cout << "L'utilisateur a : " << ageUtilisateur << " 18ans !" << endl;
    cout << "L'utilisateur s'appel : " << prenom + " " + nom << endl;

    string& prenomUtilisateur(prenom);
    cout << "Le prénom de l'utilisateur est : " << prenomUtilisateur << endl;                                           //Une référence vers une autre variable

    //chapitre 5
    double taille;
    cout << "> Quelle est votre taille ? (en cm)" << endl;
    cin >> taille;                                                                                                      //Pas d'espace donc on peut utiliser cin
    cout << "Vous faites " << taille << "cm ! C'est très grand !" << endl;

    cin.ignore();                                                                                                       //Permet de clore le cin, de le délimiter

    string objetPrefere("Sans nom");
    cout << "> Quelle est votre objet préféré ?" << endl;
    getline(cin, objetPrefere);                                                                                  //On peut rentrer des espace car on prend la ligne avec getline. On met le stream en premier puis la variable
    cout << "Votre objet préféré est : " << objetPrefere << ". Moi aussi !" << endl;

    int const a(6), b(4), c(8);
    int resultatDuCalcul;
    resultatDuCalcul = ((a+b)*c)%c+a;
    cout << "Le calcul est : " << resultatDuCalcul << endl;

    hub();

    //chapitre 7
    double d(1), e(9.999);
    cout << "d vaut : " << d << " et e vaut : " << e << "." << endl;
    inversionNombre(d, e);
    cout << "d vaut : " << d << " et e vaut : " << e << "." << endl;

    return 0;
}

int third_main() {
    __unused int meilleurScore[5];                                                                                      //Exemple déclaration de tableaux
    __unused double anglesTriangle[3];
    int tailleTableauJoueurs(3); //Valeure par défaut

    do {
        cout << "Combien de joueurs participent ?\n/> ";
        cin >> tailleTableauJoueurs; cin.ignore();
    } while (!(tailleTableauJoueurs >= 3 && tailleTableauJoueurs <= 30));
    string listJoueurs[tailleTableauJoueurs];

    for (int i = 1; i <= tailleTableauJoueurs; i++) {
        cout << "Pseudo du joueur n°" << i << " : ";
        getline(cin, listJoueurs[i]);
    }
    cout << "Liste des joueurs enregistrés :\n";
    for (int i = 1; i <= tailleTableauJoueurs; ++i) {
        cout << " - Joueur n°" << i << " : " << listJoueurs[i] << endl;
    }

    return 0;
}

int main() {
    //chapitre 8
    int const nombreScores(3);
    int meilleursScore[nombreScores];
    meilleursScore[0] = 666511;
    meilleursScore[1] = 95544;
    meilleursScore[2] = 59655;

    for (int i=0; i<nombreScores; i++) {
        cout << meilleursScore[i] << endl;
    }

//  TABLEAU STATIQUE

    //sans fonction - Moyenne de notes
    cout << "Programme de moyenne :" << endl;
    int const nombreNotes(4);
    double notes[nombreNotes] = {13.5, 20, 18.5, 10.5};
    double moyenne;
    for (int i=0; i<nombreNotes; i++) {
        moyenne += notes[i];
    }
    moyenne /= nombreNotes;
    cout << "Moyenne de " << moyenne << endl;

    //par fonction - Moyenne de notes
    cout << "Votre moyenne est " << calculMoyenne(notes, 4) << " (par fonction)" << endl;

//    TABLEAU DYNAMIQUE/VECTOR

    vector<int> tableau(3);

    return 0;
}
