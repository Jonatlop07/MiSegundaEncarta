#include <iostream>
#include <fstream>
#include <string.h>
#include "TemasMatematicas.h"

using namespace std;

string leer_palabra (istream& flujoEntrada) {
    string p;
    flujoEntrada >> p;
    return p;
}

void Conjuntos () {
    string parrafo = "";

    ifstream flujoEntrada("ArchivosMatematicas/teoriaConjuntos.txt");


    while ( !flujoEntrada.eof() ) {

        parrafo += leer_palabra(flujoEntrada);
        parrafo += ' ';
    }
    cout << parrafo << " \n";

    flujoEntrada.close();
}

void Aritmetica() {

}

void Geometria () {

}

