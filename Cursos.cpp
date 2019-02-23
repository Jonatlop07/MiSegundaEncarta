#include <iostream>

using std::cout;
using std::cin;

#include "Cursos.h"
#include "TemasMatematicas.h"
#include "TemasHistoria.h"


int elegirCurso () {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "Ofrecemos los siguientes cursos: \n\n";
    cout << "1. Matematicas. \n2. Historia. \n3. Ciencias naturales. \n4. Ingles.\n\n";
    cout << "Por favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 4;

       if ( valor_incorrecto ) {
            cout << "Valor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    return opcion;
}

void cursoMatematicas() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "Elige un tema: \n\n";
    cout << "1. Conjuntos. \n2. Operaciones basicas. \n3. Funciones. \n4. Geometria.\n\n";
    cout << "Por favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 4;

       if ( valor_incorrecto ) {
            cout << "Valor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    switch (opcion) {
        case(1):
            Conjuntos();
        case(2):
            Operaciones_Basicas();
        case(3):
            Funciones();
        case(4):
            Geometria();
    }
}

void cursoHistoria() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "Elige un tema: \n\n";
    cout << "1. Prehistoria. \n2. Edad Antigua. \n3. Edad Media. \n4. Renacimiento. \n5. Edad Moderna.\n\n";
    cout << "Por favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 5;

       if ( valor_incorrecto ) {
            cout << "Valor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    switch (opcion) {
        case(1):
            Prehistoria();
        case(2):
            Edad_Antigua();
        case(3):
            Edad_Media();
        case(4):
            Renacimiento();
        case(5):
            Edad_Moderna();
    }
}


void cursoCienciasNaturales() {


}

void cursoIngles() {


}
