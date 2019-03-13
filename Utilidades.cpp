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
            Sleep( 15000 );
        } else {
            cout << palabra << " ";
        }
    }
}

ostream& guardarPuntaje( ostream& os, string enunciadoPuntaje ) {
    os << enunciadoPuntaje;
    os << '\n';
    return os;
}

void verificarTema ( int n_tema, int resp_correct ) {
    ofstream archivoPuntaje ( "puntaje.txt", fstream::app );
    string puntajeTema;
    stringstream ss;
    ss << resp_correct;

    switch ( n_tema ) {
        case (1):
            puntajeTema += ss.str() + " puntos";
            puntajeTema = "Test de conjuntos: ";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (2):
            puntajeTema = "Test de aritmetica: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (3):
            puntajeTema = "Test de geometria: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (4):
            puntajeTema = "Test de prehistoria: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (5):
            puntajeTema = "Test de edad antigua: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (6):
            puntajeTema = "Test de edad media: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (7):
            puntajeTema = "Test de renacimiento: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (8):
            puntajeTema = "Test de edad moderna: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (9):
            puntajeTema = "Test del universo: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (10):
            puntajeTema = "Test de reinos: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (11):
            puntajeTema = "Test de la celula: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (12):
            puntajeTema = "Test de vocabulario: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (13):
            puntajeTema = "Test de expresiones basicas: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
            break;
        case (14):
            puntajeTema = "Test de pronombres y verbo to be: ";
            puntajeTema += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, puntajeTema );
    }
}

void realizarExamen ( const string preguntas[], const string opciones [][3], const char respuestas[], int tema ) {
    system( "color f0" );
    char eleccion;
    int respuestas_correctas = 0;
    bool valor_incorrecto = false;

    for ( int i = 0; i < 5; i++ ) {
        cout << "\n\n\t\t" << preguntas[ i ] << endl;
        cout << "\n";

        for ( int j = 0; j < 3; j++ )
            cout << "\t\t" << opciones[ i ][ j ] << endl;

        do {
            cout << "\t\t";
            cin >> eleccion;
            valor_incorrecto = tolower( eleccion ) != 'a' && tolower( eleccion ) != 'b' && tolower( eleccion ) != 'c';

            if ( valor_incorrecto )
                cout << "El caracter ingresado no es valido. Intentalo de nuevo:" << endl;

        } while ( valor_incorrecto );

        cout << endl;

        if ( ( eleccion == 'a' || eleccion == 'A' ) && ( tolower( eleccion ) == respuestas[ i ] ) )
            respuestas_correctas++;

        else if ( ( eleccion == 'b' || eleccion == 'B' ) && ( tolower( eleccion ) == respuestas[ i ] ) )
            respuestas_correctas++;

        else if ( ( eleccion == 'c' || eleccion == 'C' ) && ( tolower( eleccion ) == respuestas[ i ] ) )
            respuestas_correctas++;

        system( "cls" );
    }
    cout << "\n\n\t\tTu resultado es: " << respuestas_correctas << "/5" << endl;
    verificarTema( tema, respuestas_correctas );
}


