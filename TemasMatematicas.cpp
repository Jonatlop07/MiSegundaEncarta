#include "TemasMatematicas.h"
#include "Utilidades.h"

void Conjuntos () {
    string palabra;
    ifstream flujoEntrada("ArchivosMatematicas/teoriaConjuntos.txt");
    escribirLeccion( flujoEntrada );

    flujoEntrada.close();
}

void Aritmetica() {
    string palabra;
    ifstream flujoEntrada("ArchivosMatematicas/teoriaAritmetica.txt");
    escribirLeccion( flujoEntrada );

    flujoEntrada.close();
}

void Geometria () {
    string palabra;
    ifstream flujoEntrada( "ArchivosMatematicas/teoriaGeometria.txt" );
    escribirLeccion( flujoEntrada );

    flujoEntrada.close();
}

