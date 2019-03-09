#include "TemasMatematicas.h"
#include "Utilidades.h"

void Conjuntos () {
    system( "cls" );
    system( "color f0");

    string palabra;
    ifstream flujoEntrada( "ArchivosMatematicas/teoriaConjuntos.txt" );
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );
        const string preguntas[5] = { "1. Que puedes decir de lo siguiente?: V = 1, 2, 3",
                            "2. Que puedes decir del siguiente conjunto?: U = {1,2,3...} ",
                            "3. Si tengo el conjunto B = {n tal que n es un vehiculo que va por tierra}, que puedes decir del elemento 'Barco'?",
                            "4. El conjunto G = { 2 } es",
                            "5. Cual seria la forma correcta de expresar el siguiente conjunto por extension?: \nP = {n tal que n es un numero par mayor que 0 y menor que 10}" };

        const string opciones[5][3] = { { "\nA. No es un conjunto", "B. Es un conjunto finito", "C. Es un conjunto universal" },
                              { "\nA. Es un conjunto unitario", "B. Es un conjunto finito", "C. Es un conjunto infinito" },
                              { "\nA. Pertenece a B", "B. No pertenece a B ", "C. Conforma un conjunto vacio" },
                              { "\nA. Finito y unitario", "B. Unitario e infinito", "C. Finito y vacio " },
                              { "\nA. P = {0,2,4,6,10}", "B. P = {1,2,4,6,8}", "C. P = {0,2,4,6,8}" } };
        const char respuestas [] = { 'a','c','b','a','c', '\0' };

        realizarExamen( preguntas, opciones, respuestas, 1 );
    }
    system( "PAUSE" );
}

void Aritmetica() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosMatematicas/teoriaAritmetica.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2.No\n";
    do {
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. Resuelve la siguiente operacion: (3 + 21) + 4 = ?",
                                "2. De la operacion 1 + (3 - 5) = ? se puede decir que",
                                "3. Hay 5 lapices de colores y 2 borradores en una caja. Dos lapices y un borrador son de mi hermano y el resto es mio. Cuantos utiles tengo en total? ",
                                "4. Resuelve la siguiente operacion: ( (15 - 6) - (2 - 1) ) - 4 = ?",
                                "5. El mes pasado he comprado un paquete de 25 dulces, y mis 2 primos pequenios se han comido 3 dulces cada uno. Ademas, mi madre me compro 4 dulces ayer. Cuantos dulces tengo actualmente?" };


        const string opciones[5][3] = { { "\nA. 27", "B. 28", "C. 26" },
                                  { "\nA. Su resultado es 1", "B. No se puede hacer con numeros naturales", "C. No se puede resolver"  },
                                  { "\nA. 4 utiles", "B. 7 utiles", "C. 3 utiles" },
                                  { "\nA. 2", "B. 8", "C. 4" },
                                  { "\nA. 25 dulces", "B. 23 dulces", "C. 26 dulces" } };

        const char respuestas[ ] = { 'b','b','a','c','b' };

        realizarExamen( preguntas, opciones, respuestas, 2 );
    }

    system( "PAUSE" );

}

void Geometria () {
    system( "cls" );
    system( "color 4f");

    string palabra;
    ifstream flujoEntrada( "ArchivosMatematicas/teoriaGeometria.txt" );
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2.No\n";
    do {
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

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

        realizarExamen( preguntas, opciones, respuestas, 3 );
    }

    system( "PAUSE" );
}

