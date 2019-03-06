#include "TemasHistoria.h"
#include "Utilidades.h"

void Prehistoria() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaPrehistoria.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

void Edad_Antigua() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadAntigua.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

void Edad_Media() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadMedia.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

void Renacimiento() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRenacimiento.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

void Edad_Moderna() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRevIndustrial.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}

void Edad_Contemporanea() {
    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadContemporanea.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();


}
