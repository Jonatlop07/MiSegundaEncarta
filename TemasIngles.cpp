#include "TemasIngles.h"
#include "Utilidades.h"

void Vocabulario() {
    system( "cls" );
    system( "color 4f");

    string palabra;
    ifstream flujoEntrada("ArchivosIngles/vocabulario.txt");
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

        const string preguntas[5] = { "1. What does How mean?",
                                "2. What does Please mean?",
                                "3. What does Because mean?",
                                "4. What does Think mean?",
                                "5. What does Flight mean?" };

        const string opciones[5][3] = { { "A. Como", "B. Minuto", "C. Cual" },
                                  { "A. Referencia", "B. Vista", "C. Por favor" },
                                  { "A. Porque", "B. Causa", "C. Ser" },
                                  { "A. Vivir", "B. Pensar", "C. Salida" },
                                  { "A. Pelea", "B. Vuelo", "C. Gustar" } };

        const char respuestas[ ] = { 'a','c','a','b','b' };

        realizarExamen( preguntas, opciones, respuestas, 12 );
    }

    system( "PAUSE" );
}

void Expresiones_Basicas() {
    system( "cls" );
    system( "color 4f");

    string palabra;
    ifstream flujoEntrada("ArchivosIngles/principalesExpresiones.txt");
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

        const string preguntas[5] = { "1. What time is it?",
                                "2. Where is the laundry?",
                                "3. Where are you from?",
                                "4. Do you speak English?",
                                "5. What does arroz mean?" };

        const string opciones[5][3] = { { "A. I am too tired", "B. Not at all", "C. It is three O' clock" },
                                  { "A. Afternoon and evening", "B. It is near to my house", "C. It is very good" },
                                  { "A. I am from Colombia", "B. It is the same place", "C. It was not very difficult" },
                                  { "A. Yes, I do", "B. I will just check for you", "C. I will tell him you called" },
                                  { "A. It is in the garden", "B. In a minute", "C. Arroz mean rice" } };

        const char respuestas[ ] = { 'c','b','a','a','c' };

        realizarExamen( preguntas, opciones, respuestas, 13 );
    }

    system( "PAUSE" );

}

void Pronombres_Verbos() {
    system( "cls" );
    system( "color 4f");

    string palabra;
    ifstream flujoEntrada("ArchivosIngles/verbo_to_be.txt");
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

        const string preguntas[5] = { "1. Where are the police officers?",
                                "2. I __________ in a bank.",
                                "3. Michael __________ a new car.",
                                "4. Is he Brazilian?",
                                "5. Are you happy?" };

        const string opciones[5][3] = { { "A. They are at the police station", "B. He was at the hospital", "C. She is ten years old" },
                                  { "A. is working", "B. working", "C. work" },
                                  { "A. is wanting", "B. are wanting", "C. wants" },
                                  { "A. Yes, he is", "B. No, she isn't", "C. Yes, he aren't" },
                                  { "A. Yes, I are", "B. No, I am not", "C. I'm so sad" } };

        const char respuestas[ ] = { 'a','c','c','a','b' };

        realizarExamen( preguntas, opciones, respuestas, 14 );
    }

    system( "PAUSE" );
}
