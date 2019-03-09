#include "Cursos.h"
#include "TemasMatematicas.h"
#include "TemasHistoria.h"
#include "TemasCiencias.h"
#include "TemasIngles.h"

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

    system( "cls" );

    return opcion;
}

void cursoMatematicas() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "Elige un tema: \n\n";
    cout << "1. Conjuntos. \n2. Aritmetica. \n3. Geometria.\n\n";
    cout << "Por favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 3;

       if ( valor_incorrecto ) {
            cout << "Valor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    switch (opcion) {
        case(1):
            Conjuntos();
            break;
        case(2):
            Aritmetica();
            break;
        case(3):
            Geometria();
    }

    system( "cls" );
}

void cursoHistoria() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "Elige un tema: \n\n";
    cout << "1. Prehistoria. \n2. Edad Antigua. \n3. Edad Media. \n4. Renacimiento. " <<
            "\n5. Edad Moderna.\n6. Edad Contemporanea.\n\n";
    cout << "Por favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 6;

       if ( valor_incorrecto ) {
            cout << "Valor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    switch (opcion) {
        case(1):
            Prehistoria();
            break;
        case(2):
            Edad_Antigua();
            break;
        case(3):
            Edad_Media();
            break;
        case(4):
            Renacimiento();
            break;
        case(5):
            Edad_Moderna();
            break;
        case(6):
            Edad_Contemporanea();
    }

    system( "cls" );
}


void cursoCienciasNaturales() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "Elige un tema: \n\n";
    cout << "1. El universo. \n2. Los reinos animal y vegetal. \n3. La celula.\n\n";
    cout << "Por favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 3;

       if ( valor_incorrecto ) {
            cout << "Valor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    switch (opcion) {
        case(1):
            Universo();
            break;
        case(2):
            Reinos();
            break;
        case(3):
            Celula();
    }

    system( "cls" );
}

void cursoIngles() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "Elige un tema: \n\n";
    cout << "1. Vocabulario. \n2. Expresiones basicas. \n3. Pronombres y verbo to be.\n\n";
    cout << "Por favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 3;

       if ( valor_incorrecto ) {
            cout << "Valor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    switch (opcion) {
        case(1):
            Vocabulario();
            break;
        case(2):
            Expresiones_Basicas();
            break;
        case(3):
            Pronombres_Verbos();
    }

    system( "cls" );
}
