#include "TemasHistoria.h"
#include "Utilidades.h"

void Prehistoria() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaPrehistoria.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. Donde se desarrollo la metalurgia?",
                                "2. Las principales actividades economicas de los hombres durante el paleolitico fueron:",
                                "3. El efecto principal de la domesticacion de plantas y animales fue:",
                                "4. Un elemento que permitio la fabricacion de las primeras herramientas fue:",
                                "5. Cual de los siguientes elementos corresponde al periodo Neolitico?" };

        const string opciones[5][3] = { { "A. En la edad de bronce", "B. En la edad de piedra", "C. En la edad de hierro" },
                                  { "A. La pesca y la ganaderia", "B. La agricultura y la ganaderia",
                                    "C. La caza, la pesca y la recoleccion" },
                                  { "A. El sedentarismo de los grupos humanos", "B. El desarrollo del comercio y la moneda",
                                    "C. Surgimiento de organizaciones como clanes" },
                                  { "A. La abundancia de materia prima", "B. La capacidad de hablar",
                                    "C. La escasez de alimentos y necesidad de cazar " },
                                  { "A. El desarrollo del comercio a largas distancias",
                                    "B. Aparicion de las primeras aldeas sedentarias",
                                    "C. Creación de la rueda y los primeros sistemas de escritura" } };

        const char respuestas[ ] = { 'a','c','c','c','b' };

        realizarExamen( preguntas, opciones, respuestas, 4 );
    }
    system( "PAUSE" );
}

void Edad_Antigua() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadAntigua.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. El nacimiento de la democracia se le atribuye principalmente a esta civilizacion",
                                "2. En la Grecia antigua surge por primera vez en la historia de la humanidad la forma de gobierno denominado democracia \no gobierno del pueblo, donde permitia la participacion solamente a quienes eran considerados ciudadanos. \nEse tipo de democracia, practicada especialmente en la ciudad Estado de Atenas, tuvo entre sus caracteristicas mas importantes la posibilidad de",
                                "3. Las ciudades pertenecientes a Egipto, Mesopotamia y China al igual que las de la India se construyeron",
                                "4. Que faraon unifico el Alto y el Bajo Egipto por vez primera fundando la dinastia sobre el anio 3150 a.C.?",
                                "5. Que rios hacen parte de la cuenca fluvial de la antigua Mesopotamia?" };

        const string opciones[5][3] = { { "A. Roma", "B. Grecia", "C. Egipto" },
                                  { "A. decidir sobre los asuntos relacionados con el gobierno la ciudad.",
                                   "B. que todos los hombres participaran en la guerra y tomaran parte del botin.",
                                    "C. que todas las personas incluidas las mujeres participaran en el senado." },
                                  { "A. con muchos monumentos", "B. a la misma altura", "C. al lado de los rios" },
                                  { "A. Keops", "B. Narmer", "C. Ramses II" },
                                  { "A. Tigris y Eufrates", "B. Indo y Ganges", "C. Nilo y Danubio" } };

        const char respuestas[ ] = { 'b','a','c','b','a' };

        realizarExamen( preguntas, opciones, respuestas, 5 );
    }
    system( "PAUSE" );
}

void Edad_Media() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaEdadMedia.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. Cual de los siguientes hechos historicos es comunmente aceptado como el iniciador de la Edad Media?",
                                      "2. Cual fue el sistema de organizacion social, politica y economica predominante durante la Edad Media?",
                                      "3. El papel de la iglesia en la edad media era:",
                                      "4. En la edad media aparece una clase social, la cual se denomino:",
                                      "5. En el periodo medieval, era el estamento mas alto despues del rey. No pagaban impuestos. A que grupo social corresponde la descripcion?" };

        const string opciones[5][3] = { { "A. La caida del imperio romano", "B. La fundacion de la iglesia catolica", "C. La caida del imperio Bizantino" },
                                  { "A. Comunismo", "B. Feudalismo", "C. Trueque" },
                                  { "A. Eran seniores feudales.",
                                    "B. Mantener a salvo la cultura con sus bibliotecas.",
                                    "C. Difundir la religion en todos los rincones de la tierra" },
                                  { "A. Terratenientes", "B. Feudales", "C. Burguesia" },
                                  { "A. Vasallos", "B. Nobleza", "C. El clero" } };

        const char respuestas[ ] = { 'a','b','c','c','b' };

        realizarExamen( preguntas, opciones, respuestas, 6 );
    }

    system( "PAUSE" );
}

void Renacimiento() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRenacimiento.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. El origen del Renacimiento se situa en...",
                                    "2. Segun la teoria analizada anteriormente. Que es La Reforma?:",
                                    "3. Cual es el objeto de estudio esencial del Humanismo?",
                                    "4. En la Epoca Moderna se vio un cambio sustancial en la vision del mundo y la mentalidad, donde el ser humano se transformo en el centro del universo. Como se llama esa mentalidad?",
                                    "5. Uno de los aspectos mas significativos que marcaron el cambio en la estructura social desde el Mundo Medieval al Mundo Moderno europeo, fue el crecimiento y desarrollo en las ciudades de un nuevo grupo social, denominado:" };

        const string opciones[5][3] = { { "\nA. En Italia desde el siglo XIV",
                                          "B. En Alemania desde el siglo XIV",
                                          "C. En Espania desde el siglo XV" },
                                  { "\nA. Una corriente de pensamiento que surge durante el Renacimiento y provoca la ruptura de la unidad religiosa de Europa.",
                                    "B. Una escuela de intelectuales que buscan la reforma del panorama social europeo de la epoca.",
                                    "C. El deseo de los artistas del Renacimiento de cambiar las formas y contenidos del arte de la epoca." },
                                  { "\nA. El ser humano y sus comportamientos.",
                                    "B. Las relaciones del Hombre y Dios.",
                                    "C. Las formas de educar al ser humano." },
                                  { "\nA. Teocentrismo", "B. Geocentrismo", "C. Antropocentrismo" },
                                  { "\nA. Aristocracia", "B. Campesinado", "C. Burguesia" } };

        const char respuestas[ ] = { 'a','a','a','c','c' };

        realizarExamen( preguntas, opciones, respuestas, 7 );
    }

    system( "PAUSE" );
}

void Edad_Moderna() {
    system( "cls" );
    system( "color e0");

    string palabra;
    ifstream flujoEntrada("ArchivosSociales/teoriaRevIndustrial.txt");
    escribirLeccion( flujoEntrada );
    flujoEntrada.close();

    int eleccion;
    cout << "++++    Deseas realizar un test para demostrar lo que aprendiste?\n++++    1. Si\n++++    2. No\n";
    do {
        cout << "\t";
        cin >> eleccion;
        if ( eleccion != 1 && eleccion != 2 )
            cout << "Valor incorrecto. Intentalo de nuevo: " << endl;
    } while ( eleccion != 1 && eleccion != 2 );

    if ( eleccion == 1 ) {
        system( "cls" );

        const string preguntas[5] = { "1. Donde tuvo lugar por primera vez?",
                                "2. Para que tuviera lugar la revolucion industrial fue necesario uno de estos factores:",
                                "3. Elemento esencial en la industrializacion fue:",
                                "4. Los principales inventos en la industria textil fueron:",
                                "5. La revolucion industrial supuso en materia demografica" };

        const string opciones[5][3] = { { "A. Francia", "B. Inglaterra", "C. Espania" },
                                  { "A. El trabajo de mano de obra esclava",
                                    "B. Una revolucion en el campo agricola",
                                    "C. La revolucion francesa" },
                                  { "A. La abolicion de la esclavitud", "B. El descenso generalizado de la poblacion", "C. El uso de la maquina de vapor" },
                                  { "A. La hiladora mecanica de Samuelson", "B. La locomotora de Stephenson", "C. El telar multiforme de Anderson" },
                                  { "A. El incremento de la poblacion del campo", "B. La emigracion del campo a la ciudad", "C. El descenso de la poblacion de las ciudades" } };

        const char respuestas[ ] = { 'b','a','c','b','b' };

        realizarExamen( preguntas, opciones, respuestas, 8 );
    }

    system( "PAUSE" );
}

