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

ostream& guardarPuntaje( ostream& os, string enunciadoPuntaje ) {
    os << enunciadoPuntaje;
    os << '\n';
    return os;
}

void verificarCurso ( int n_curso, int resp_correct ) {
    ofstream archivoPuntaje ( "puntaje.txt", fstream::app );
    string cursoPuntaje;
    stringstream ss;
    ss << resp_correct;

    switch ( n_curso ) {
        case (1):
            cursoPuntaje = "Test de conjuntos: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (2):
            cursoPuntaje = "Test de aritmetica: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (3):
            cursoPuntaje = "Test de geometria: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (4):
            cursoPuntaje = "Test de prehistoria: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (5):
            cursoPuntaje = "Test de edad antigua: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (6):
            cursoPuntaje = "Test de edad media: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (7):
            cursoPuntaje = "Test de renacimiento: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (8):
            cursoPuntaje = "Test de edad moderna: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (9):
            cursoPuntaje = "Test de edad contemporanea: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (10):
            cursoPuntaje = "Test del universo: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (11):
            cursoPuntaje = "Test de reinos: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (12):
            cursoPuntaje = "Test de la celula: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (13):
            cursoPuntaje = "Test de vocabulario: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (14):
            cursoPuntaje = "Test de expresiones basicas: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
            break;
        case (15):
            cursoPuntaje = "Test de pronombres y verbo to be: ";
            cursoPuntaje += ss.str() + " puntos";
            guardarPuntaje( archivoPuntaje, cursoPuntaje );
    }
}

void realizarExamen ( const string preguntas[], const string opciones [][3], const char respuestas[], int curso ) {
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

        cout << endl;

        if ( ( eleccion == 'a' || eleccion == 'A' ) && ( tolower( eleccion ) == respuestas[ i ] ) )
            respuestas_correctas++;

        else if ( ( eleccion == 'b' || eleccion == 'B' ) && ( tolower( eleccion ) == respuestas[ i ] ) )
            respuestas_correctas++;

        else if ( ( eleccion == 'c' || eleccion == 'C' ) && ( tolower( eleccion ) == respuestas[ i ] ) )
            respuestas_correctas++;

        system( "cls" );
    }
    cout << "Tu resultado es: " << respuestas_correctas << "/5" << endl;
    verificarCurso( curso, respuestas_correctas );
}


