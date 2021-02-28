//
// Created by Aymeric Schaeffer on 26/02/2021.
//
using namespace std;

#include <iostream>
#include <vector>
#include "Vehicules.h"
#include "Garage.h"

void presenter(Vehicule const& v) { //On ajoute constante pour de l'affichage (a titre indicatif)
    /*
     * On appel une référence (ou pointeur) du Vehicule pour la fonction virtuelle (résolution dynamique de lien)
     */
    v.affiche();
}

int main() {
    //Vehicule truck;
    //Voiture lambo;
    //Moto cinquantecc;

    //presenter(truck);
    //presenter(lambo);
    //presenter(cinquantecc);
    /*
     * Dans le cas d'une résolution statique de lien,
     * la console presentera les trois objets comme étant un Véhicule,
     * car le compilateur manipule dans la fonction presenter() un type Vehicule !!!
     */

    /*
     * La résolution dynamique nécessite deux ingrédients :
     * - utiliser un pointeur ou référence
     * - utiliser des méthodes virtuelles -> fonctions virtuelles
     *
     * On aurait pu faire :
     */
    Vehicule *v2(nullptr);
    Vehicule *v1(nullptr);
    //v1 = new Vehicule;
    //v2 = new Moto;

    v1->affiche();
    v2->affiche();


    /*
     * Voyons maintentant le cas du destructeur en polymorphisme :
     * (un constructeur lui ne peut pas être virtuel, cela n'a pas de sens
     * car on sait déja quest ce qu'on créé lors de la création de l'objet)
     */
    Vehicule *myV(nullptr); //On créé un pointeur vide vers une adresse Vehicule
    //myV = new Voiture; //On le fait pointer vers un objet de type Voiture (que l'on créer)
    //On créé un objet Voiture et on met son addresse dans un pointeur de Vehicule
    //-> Méthode virtuelle

    myV->affiche(); //On affiche la présentation

    delete myV; //On désalloue la mémoire, détruit la voiture
    /*
     * On problème réside dans delete myV;
     * delte n'est pas une fonction virtuelle
     * delete va donc utiliser la méthode de Vehicule et non de Voiture !!
     *
     * UN DESTRUCTEUR EST TOUJOURS VIRTUEL SI ON UTILISE LE POLYMORPHISME
     */

    //------------------------------------------------------------------------------------------------------------------
    //TP Garagistes - Collections hétérogènes
    //------------------------------------------------------------------------------------------------------------------

    //Colletion hétérogène
/*
    listeVehicules.push_back(new Voiture(15000, 5));
    listeVehicules.push_back(new Voiture(10000, 3));
    //On ajoute a la collection une voiture avec les parametres choisis
    listeVehicules.push_back(new Moto(4000, 90));
    //On ajoute une moto et deux voitures
*/
    /*
     * On va afficher des informations sur nos véhicules
     */
/*
    for(auto & listeVehicule : listeVehicules) {
        listeVehicule->affiche();
        cout << endl;
    }
*/
    /*
     * On va maintenant librer la mémoire :
     */

/*
    for(auto & listeVehicule : listeVehicules) {
        delete listeVehicule; //On libère la mémoire
        listeVehicule = nullptr; //On reset les adresses des pointeurs
        cout << listeVehicule << endl;
    }
*/
    //Garage::ajouterVehicule(9090, 90); //NON FONCTIONNEL
    return 0;

    /*
     * Classes abstrraites
     */


}