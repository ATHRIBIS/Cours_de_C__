//
// Created by Aymeric Schaeffer on 06/12/2020.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    char c=0;
    for(int i=1; i<1000; i++) {
        c=i;
        cout << "Numéro "<<i<<" : "<<c<<endl;
    }
    return 0;
}
