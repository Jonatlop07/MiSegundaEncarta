#include "TemasIngles.h"
#include "Utilidades.h"

void Vocabulario() {
    string palabra;
    ifstream flujoEntrada("ArchivosIngles/vocabulario.txt");
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

    realizarExamen( preguntas, opciones, respuestas, 13 );

    system( "PAUSE" );
}

void Expresiones_Basicas() {
    string palabra;
    ifstream flujoEntrada("ArchivosIngles/principalesExpresiones.txt");
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

    realizarExamen( preguntas, opciones, respuestas, 14 );

    system( "PAUSE" );

}

void Pronombres_Verbos() {
    string palabra;
    ifstream flujoEntrada("ArchivosIngles/verbo_to_be.txt");
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

    realizarExamen( preguntas, opciones, respuestas, 15 );

    system( "PAUSE" );
}
