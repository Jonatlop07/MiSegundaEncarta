#include "TemasIngles.h"
#include "Utilidades.h"

void Vocabulario() {
    system( "cls" );
    system( "color 4f");

    string palabra;
    ifstream flujoEntrada("ArchivosIngles/vocabulario.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 13 );
    }

    system( "PAUSE" );
}

void Expresiones_Basicas() {
    system( "cls" );
    system( "color 4f");

    string palabra;
    ifstream flujoEntrada("ArchivosIngles/principalesExpresiones.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 14 );
    }

    system( "PAUSE" );

}

void Pronombres_Verbos() {
    system( "cls" );
    system( "color 4f");

    string palabra;
    ifstream flujoEntrada("ArchivosIngles/verbo_to_be.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 15 );
    }

    system( "PAUSE" );
}
