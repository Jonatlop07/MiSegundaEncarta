#include "TemasCiencias.h"
#include "Utilidades.h"

void SistemaSolar() {
    system( "cls" );
    system( "color af");

    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaSistemaSolar.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. El Sol es:",
                                "2. El planeta mas grande del sistema solar es:",
                                "3. Era condiderado un planeta del sistema solar, pero fue re-clasificado:",
                                "4. El planeta mas pequenio del sistema solar es:",
                                "5. La caracteristica mas notoria de este planeta es su anillo formado por satelites:" };

        const string opciones[5][3] = { { "A. Un satelite", "B. Un cometa", "C. Una estrella" },
                                  { "A. Tierra", "B. Jupiter", "C. Mercurio" },
                                  { "A. Luna", "B. Fobos", "C. Pluton" },
                                  { "A. Pluton", "B. Mercurio", "C. Marte" },
                                  { "A. Jupiter", "B. Urano", "C. Saturno" } };

        const char respuestas[ ] = { 'c','b','c','b','c' };

        realizarExamen( preguntas, opciones, respuestas, 9 );
    }

    system( "PAUSE" );
}
void Reinos(){
    system( "cls" );
    system( "color af");

    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaReinos.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. El proceso mediante el cual las plantas obtienen su alimento gracias a la luz solar se llama:",
                                "2. Las reproduccion de las plantas es:",
                                "3. Los animales son:",
                                "4. La respiracion de los insectos es:",
                                "5. Los animales que nacen de huevos son:" };

        const string opciones[5][3] = { { "A. Fotosintetis", "B. Fotoquimica", "C. Fototropismo" },
                                  { "A. Solo sexual", "B. Solo asexual", "C. Sexual y asexual" },
                                  { "A. Seres anaerobicos", "B. Organismos autotrofos", "C. Seres heterotrofos" },
                                  { "A. Pulmonar", "B. Traquial", "C. Cutanea" },
                                  { "A. Oviparos", "B. Ovoviviparos", "C. Viviparos" } };

        const char respuestas[ ] = { 'a','c','c','b','a' };

        realizarExamen( preguntas, opciones, respuestas, 10 );
    }

    system( "PAUSE" );
}

void Celula(){
    system( "cls" );
    system( "color af");

    string palabra;
    ifstream flujoEntrada("ArchivosCienciasNaturales/teoriaCelula.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. Los animales son organismos: ",
                                "2. Las celulas procariotas: ",
                                "3. Es el 'centro de control' de la celula:",
                                "4. Es un organelo indispensable para la fotosintesis de las plantas: ",
                                "5. Es un organelo que procesa y desecha las sustancias que no necesita la celula" };

        const string opciones[5][3] = { { "A. Procariotas", "B. Eucariotas", "C. Unicelulares" },
                                  { "A. No tienen nucleo definido pero tienen membrana celular",
                                    "B. No tienen nucleo definido ni membrana celular",
                                    "C. No tienen mebrana celular pero si nucleo definido" },
                                  { "A. El nucleolo", "B. El nucleotido", "C. El nucleo" },
                                  { "A. Clorofila", "B. Mitocondria", "C. Lisosoma" },
                                  { "A. Aparato de Golgi", "B. Reticulo endoplasmatico", "C. Lisosoma" } };

        const char respuestas[ ] = { 'b','b','c','a','c' };

        realizarExamen( preguntas, opciones, respuestas, 11 );
    }

    system( "PAUSE" );
}

