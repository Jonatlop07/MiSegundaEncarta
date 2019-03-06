#include "TemasHistoria.h"
#include "Utilidades.h"

void Prehistoria() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaPrehistoria.txt");
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

void Edad_Antigua() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadAntigua.txt");
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

void Edad_Media() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadMedia.txt");
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

void Renacimiento() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRenacimiento.txt");
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

void Edad_Moderna() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRevIndustrial.txt");
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

void Edad_Contemporanea() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadContemporanea.txt");
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
