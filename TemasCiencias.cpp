#include "TemasCiencias.h"
#include "Utilidades.h"

void Universo() {
    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaUniverso.txt");
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
void Reinos(){
    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaReinos.txt");
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

void Celula(){
    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaCelula.txt");
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

