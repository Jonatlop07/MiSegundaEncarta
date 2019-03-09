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
        } else if ( palabra == "__" ) {
            cout << ' ';
        } else if ( palabra == "/w" ) {
            Sleep( 20000 );
        } else {
            cout << palabra << " ";
        }
    }
}

void realizarExamen ( const string preguntas[], const string opciones [][3], const char respuestas[] ) {
    char eleccion;
    int respuestas_correctas = 0;
    bool valor_incorrecto = false;

    for ( int i = 0; i < 5; i++ ) {
        cout << preguntas[ i ] << endl;

        for ( int j = 0; j < 3; j++ )
            cout << opciones[ i ][ j ] << endl;

        do {
            cin >> eleccion;
            valor_incorrecto = tolower( eleccion ) != 'a' && tolower( eleccion ) != 'b' && tolower( eleccion ) != 'c';

            if ( valor_incorrecto )
                cout << "El caracter ingresado no es valido. Intentalo de nuevo:" << endl;

        } while ( valor_incorrecto );

        if ( ( eleccion == 'a' || eleccion == 'A' ) && tolower(eleccion) == respuestas[ i ] )
            respuestas_correctas++;

        if ( ( eleccion == 'b' || eleccion == 'B' ) && tolower( eleccion ) == respuestas[ i ] )
            respuestas_correctas++;

        if ( ( eleccion == 'a' || eleccion == 'A' ) && tolower( eleccion ) == respuestas[ i ] )
            respuestas_correctas++;
    }
    cout << "Tu resultado es: " << respuestas_correctas << "/5" << endl;
}
