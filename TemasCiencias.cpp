#include "TemasCiencias.h"
#include "Utilidades.h"

void Universo() {
    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaUniverso.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}
void Reinos(){
    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaReinos.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

void Celula(){
    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaCelula.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

