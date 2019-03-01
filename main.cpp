#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

#include "Cursos.h"

int main() {
    int opcion_curso;

    cout << "Bienvenido a Educate, una aplicacion interactiva gratuita para estudiantes de todas las edades. \n";
    opcion_curso = elegirCurso();

    switch (opcion_curso) {
        case(1):
            cursoMatematicas();
            break;
        case(2):
            cursoHistoria();
            break;
        case(3):
            cursoCienciasNaturales();
            break;
        case(4):
            cursoIngles();
    }

    return 0;
}

