//
// Created by Aymeric Schaeffer on 06/12/2020.
//
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string askAWord() {
    string word("UNDEFINED");
    cout << "Bonjour !"<< endl <<"Entrez votre mot :\n/> ";
    getline(cin, word);
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    //supprime la réponse qui apparait en console
    return word;
}
string wordMixer(string word) {
    //On initialise le mélange de mot
    string mixedWord;
    unsigned int randomPosition;
    srand(time(nullptr));

    while (!word.empty()) { //Tant qu'il reste des lettres dans le mot
        randomPosition = rand() % word.size(); //On tire une position au hasard
        mixedWord += word[randomPosition];
        word.erase(randomPosition, 1);
    }
    return mixedWord;
}
void checkUserAnswer(string const& word, string const& mixedWord) {
    cout << "Le mot magique est : " << mixedWord << endl << "Retrouvez le mot !" << endl;
    string userWord = "UNDEFINED";
    int trys(0);
    do {
        if (trys<3) {
            cout << "Entrez une proposition\n/> ";
            getline(cin, userWord);
            trys++;
        } else {
            cout << "Nombre de tentative maximal atteint ! Désolé...\nLe mot était : " << word << ".\nRéessayer une prochaine fois !\nÀ bientôt !" << endl;
            break;
        }

        if (word == userWord) {
            cout << "Bravo ! Vous avez trouvez le mot magique en " << trys << " tentatives !" << endl << "Le mot était : " << word << endl;
        } else if (word != userWord && trys < 3) {
            cout << "CLANG... Réessayez !" << endl;
        } else {}
    } while (word != userWord);

}

int main() {
    //1: On demande de saisir un mot
    string const word = askAWord();

    //2: On mélange les lettres du mot
    string const mixedWord = wordMixer(word);

    //3; On demande à l'utilisateur quel est le mot mystère
    checkUserAnswer(word, mixedWord);
    return 0;
}
