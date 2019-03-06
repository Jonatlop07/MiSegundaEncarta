#include "TemasIngles.h"
#include "Utilidades.h"

void Vocabulario() {
    string palabra;
    ifstream flujoEntrada("ArchivosIngles/vocabulario.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

void Expresiones_Basicas() {
    string palabra;
    ifstream flujoEntrada("ArchivosIngles/principalesExpresiones.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();



}

void Pronombres_Verbos() {
    string palabra;
    ifstream flujoEntrada("ArchivosIngles/verbo_to_be.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}
