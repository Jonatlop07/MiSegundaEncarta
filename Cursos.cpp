#include "Cursos.h"
#include "TemasMatematicas.h"
#include "TemasHistoria.h"
#include "TemasCiencias.h"
#include "TemasIngles.h"
int elegirCurso () {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "\n\n\n\tOfrecemos los siguientes cursos: \n\n";
    cout << "\n\t1. Matematicas. \n\t2. Historia. \n\t3. Ciencias naturales. \n\t4. Ingles.\n\n";
    cout << "\tPor favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 4;

       if ( valor_incorrecto ) {
            cout << "\tValor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    system( "cls" );

    return opcion;
}

void cursoMatematicas() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "\n\n\n\tElige un tema: \n\n";
    cout << "\n\t1. Conjuntos. \n\t2. Aritmetica. \n\t3. Geometria.\n\n";
    cout << "\tPor favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 3;

       if ( valor_incorrecto ) {
            cout << "\tValor incorrecto. Intentalo de nuevo: ";
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

    cout << "\n\n\n\tElige un tema: \n\n";
    cout << "\n\t1. Prehistoria. \n\t2. Edad Antigua. \n\t3. Edad Media. \n\t4. Renacimiento. " <<
            "\n\t5. Edad Moderna.\n\n";
    cout << "\tPor favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 6;

       if ( valor_incorrecto ) {
            cout << "\tValor incorrecto. Intentalo de nuevo: ";
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
    }

    system( "cls" );
}


void cursoCienciasNaturales() {
    int opcion = 0;
    bool valor_incorrecto = false;

    cout << "\n\n\n\tElige un tema: \n\n";
    cout << "\n\t1. El sistema solar. \n\t2. Los reinos animal y vegetal. \n\t3. La celula.\n\n";
    cout << "\tPor favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 3;

       if ( valor_incorrecto ) {
            cout << "\tValor incorrecto. Intentalo de nuevo: ";
       }
    } while ( valor_incorrecto );

    switch (opcion) {
        case(1):
            SistemaSolar();
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

    cout << "\n\n\n\tElige un tema: \n\n";
    cout << "\n\t1. Vocabulario. \n\t2. Expresiones basicas. \n\t3. Pronombres y verbo to be.\n\n";
    cout << "\tPor favor, elige el que sea mas de tu interes: ";

    do {
       cin >> opcion;
       valor_incorrecto = opcion < 1 || opcion > 3;

       if ( valor_incorrecto ) {
            cout << "\tValor incorrecto. Intentalo de nuevo: ";
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
