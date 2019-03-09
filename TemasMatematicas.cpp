#include "TemasMatematicas.h"
#include "Utilidades.h"

void Conjuntos () {
    system( "cls" );
    system( "color f0");

    string palabra;
    ifstream flujoEntrada( "ArchivosMatematicas/teoriaConjuntos.txt" );
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
        const char respuestas [] = { 'a','b','c','c','a', '\0' };

        realizarExamen( preguntas, opciones, respuestas );
    }
    system( "PAUSE" );
}

void Aritmetica() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosMatematicas/teoriaAritmetica.txt");
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

        realizarExamen( preguntas, opciones, respuestas );
    }

    system( "PAUSE" );

}

void Geometria () {
    system( "cls" );
    string palabra;
    ifstream flujoEntrada( "ArchivosMatematicas/teoriaGeometria.txt" );
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

        realizarExamen( preguntas, opciones, respuestas );
    }

    system( "PAUSE" );
}

