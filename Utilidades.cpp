#include "Utilidades.h"

string leerPalabra ( istream& flujoEntrada) {
    string p;
    flujoEntrada >> p;
    return p;
}

void escribirLeccion ( ifstream& flujoEntrada) {
    string palabra;

    while ( !flujoEntrada.eof() ) {
        palabra = leerPalabra ( flujoEntrada );

        if ( palabra == "|" ) {
            cout << '\t';
        } else if ( palabra == "/n" ) {
            cout << '\n';
        } else {
            cout << palabra << " ";
        }
    }
}
