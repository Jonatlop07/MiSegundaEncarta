#include "TemasMatematicas.h"
#include "Utilidades.h"

void Conjuntos () {
    string palabra;
    ifstream flujoEntrada( "ArchivosMatematicas/teoriaConjuntos.txt" );
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

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

    system( "PAUSE" );
}

void Aritmetica() {
    string palabra;
    ifstream flujoEntrada("ArchivosMatematicas/teoriaAritmetica.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

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

    system( "PAUSE" );

}

void Geometria () {
    string palabra;
    ifstream flujoEntrada( "ArchivosMatematicas/teoriaGeometria.txt" );
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

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

    system( "PAUSE" );
}

