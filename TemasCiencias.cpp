#include "TemasCiencias.h"
#include "Utilidades.h"

void Universo() {
    system( "cls" );
    system( "color af");

    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaUniverso.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2.No\n";
    do {
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1.",
                                "2.",
                                "3.",
                                "4.",
                                "5." };

        const string opciones[5][3] = { { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." } };

        const char respuestas[ ] = { 'a','b','c','c','a' };

        realizarExamen( preguntas, opciones, respuestas, 10 );
    }

    system( "PAUSE" );
}
void Reinos(){
    system( "cls" );
    system( "color af");

    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaReinos.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2.No\n";
    do {
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1.",
                                "2.",
                                "3.",
                                "4.",
                                "5." };

        const string opciones[5][3] = { { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." } };

        const char respuestas[ ] = { 'a','b','c','c','a' };

        realizarExamen( preguntas, opciones, respuestas, 11 );
    }

    system( "PAUSE" );
}

void Celula(){
    system( "cls" );
    system( "color af");

    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaCelula.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2.No\n";
    do {
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1.",
                                "2.",
                                "3.",
                                "4.",
                                "5." };

        const string opciones[5][3] = { { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." },
                                  { "A.", "B.", "C." } };

        const char respuestas[ ] = { 'a','b','c','c','a' };

        realizarExamen( preguntas, opciones, respuestas, 12 );
    }

    system( "PAUSE" );
}

