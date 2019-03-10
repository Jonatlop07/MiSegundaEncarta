#include "TemasHistoria.h"
#include "Utilidades.h"

void Prehistoria() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaPrehistoria.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 4 );
    }

    system( "PAUSE" );

}

void Edad_Antigua() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadAntigua.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 5 );
    }

    system( "PAUSE" );
}

void Edad_Media() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadMedia.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 6 );
    }

    system( "PAUSE" );
}

void Renacimiento() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRenacimiento.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 7 );
    }

    system( "PAUSE" );
}

void Edad_Moderna() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRevIndustrial.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 8 );
    }

    system( "PAUSE" );
}

void Edad_Contemporanea() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadContemporanea.txt");
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

        realizarExamen( preguntas, opciones, respuestas, 9 );
    }

    system( "PAUSE" );
}
