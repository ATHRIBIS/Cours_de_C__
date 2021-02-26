//
// Created by Aymeric Schaeffer on 26/02/2021.
//

using namespace std;

#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
#include "MagicienNoir.h"

int main() {
    Personnage dieu("Dieu");
    Guerrier hercule("Hercule Poirot");
    Magicien sorciere("Saurciaire");
    MagicienNoir sorciereDemoniaque("Demoniasse");

    dieu.sePresenter();
    hercule.sePresenter();
    sorciere.sePresenter();
    sorciereDemoniaque.sePresenter();

}