#include "ahorcad.h"

using namespace std;

int jugarAhorcado() {
    system ( "color 0a" );

    int nivel, intentos = 10, num_caracteres;
    int palabra_aleatoria;
    string aux_oculto;

    srand( time ( NULL ) );

    do{
        system( "cls" );
        cout << "Seleccione Nivel:" <<endl;
        cout << "1" << endl;
        cout << "2" << endl;
        cout << "3" << endl;
        cout << "4" << endl;
        cout << "5" << endl;
        cin >> nivel;
    } while( nivel < 1 || nivel > 5 );

    palabra_aleatoria = rand() % 5;

    if( nivel == 1 ) {
        num_caracteres = 7;

        switch ( palabra_aleatoria ){
        case 0:
            aux_oculto = "CORAZON";
            break;
        case 1:
            aux_oculto = "ARMARIO";
            break;
        case 2:
            aux_oculto = "CABEZON";
            break;
        case 3:
            aux_oculto = "GALAXIA";
            break;
        case 4:
            aux_oculto = "CELULAR";
        }
    } else if ( nivel == 2 ) {
        num_caracteres = 9;

        switch ( palabra_aleatoria ){
        case 0:
            aux_oculto = "MALABARES";
            break;
        case 1:
            aux_oculto = "MARIPOSAS";
            break;
        case 2:
            aux_oculto = "INTELECTO";
            break;
        case 3:
            aux_oculto = "LICUADORA";
            break;
        case 4:
            aux_oculto = "VISITANTE";
        }
    } else if ( nivel == 3 ) {
        num_caracteres = 11;

        switch ( palabra_aleatoria ){
        case 0:
            aux_oculto = "EBANISTERIA";
            break;
         case 1:
             aux_oculto = "HABICHUELAS";
            break;
        case 2:
            aux_oculto = "LABORATORIO";
            break;
        case 3:
            aux_oculto = "UBICACIONES";
            break;
        case 4:
            aux_oculto = "YACIMIENTOS";
        }
    } else if ( nivel == 4 ) {
        num_caracteres = 13;

        switch ( palabra_aleatoria ){
        case 0:
            aux_oculto = "ADMINISTRADOR";
            break;
        case 1:
            aux_oculto = "BUSCAPERSONAS";
            break;
        case 2:
            aux_oculto = "FABRICACIONES";
            break;
        case 3:
            aux_oculto = "MANIFESTACION";
            break;
        case 4:
            aux_oculto = "SEMINATURALES";
        }

    } else if ( nivel == 5 ) {
        num_caracteres = 15;

        switch ( palabra_aleatoria ){
        case 0:
            aux_oculto = "RESPONSABILIDAD";
            break;
        case 1:
            aux_oculto = "CARACTERISTICAS";
            break;
        case 2:
            aux_oculto = "PROFESIONALISMO";
            break;
        case 3:
            aux_oculto = "HORIZONTALMENTE";
            break;
        case 4:
            aux_oculto = "IRREVOCABILIDAD";
        }
    }

    char letra;
    char palabra[num_caracteres + 1], vacio[num_caracteres + 1];
    bool acertado, completada;

    for ( int i = 0; i < num_caracteres; i++ ) {
        palabra[i] = aux_oculto[i];
        vacio[i] = '_';
    }

    system("pause");

    do{
        system( "cls" );
        cout << setw( 35 );

        for( int i = 0; i < num_caracteres; i++ ){
            cout << vacio[i] << " ";
        }

        switch( intentos ) {
        case 9:
            cout << "____________" << endl << endl;
            break;
        case 8:
            cout<<"____________"<<endl;
            cout<<"|         "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            cout<<"|           "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            break;
        case 7:
            cout<<"____________"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            cout<<"|           "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            break;
        case 6:
            cout<<"____________"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            cout<<"|           "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            cout<<"\--------------"<<endl;
            break;
        case 5:
            cout<<"____________"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            cout<<"|        \\"<<endl;
            cout<<"|         \\"<<endl;
            cout<<"|          \\"<<endl;
            cout<<"\--------------"<<endl;
            break;
        case 4:
            cout<<"____________"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|           "<<endl;
            cout<<"|      / \\"<<endl;
            cout<<"|     /   \\"<<endl;
            cout<<"|    /     \\"<<endl;
            cout<<"\--------------"<<endl;
            break;
        case 3:
            cout<<"____________"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|       |  "<<endl;
            cout<<"|       |  "<<endl;
            cout<<"|       |   "<<endl;
            cout<<"|      / \\"<<endl;
            cout<<"|     /   \\"<<endl;
            cout<<"|    /     \\"<<endl;
            cout<<"\--------------"<<endl;
            break;
        case 2:
            cout<<"____________"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|          "<<endl;
            cout<<"|          "<<endl;
            cout<<"|      /|\\ "<<endl;
            cout<<"|     / | \\"<<endl;
            cout<<"|    /  |  \\"<<endl;
            cout<<"|      / \\"<<endl;
            cout<<"|     /   \\"<<endl;
            cout<<"|    /     \\"<<endl;
            cout<<"\\--------------"<<endl;
            break;
        case 1:
            cout<<"____________"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|       |"<<endl;
            cout<<"|      ___  "<<endl;
            cout<<"|     (^_^)    "<<endl;
            cout<<"|      /|\\ "<<endl;
            cout<<"|     / | \\"<<endl;
            cout<<"|    /  |  \\"<<endl;
            cout<<"|      / \\"<<endl;
            cout<<"|     /   \\"<<endl;
            cout<<"|    /     \\"<<endl;
            cout<<"\\--------------"<<endl;
        }


        cout << "\nIntentos: " << intentos;
        cout << "\nNivel " << nivel << "\nIngrese UNA letra: ";
        cin >> letra;

        acertado = false, completada = true;

        for( int i = 0; i < num_caracteres; i++ ){
            if( toupper( letra ) == palabra[i] ){
                vacio[i] = toupper( letra );
                acertado = true;
            }
        }

        if( acertado == false ) {
            intentos--;
        }

        for( int i =  0; i < num_caracteres; i++ ) {
            if( vacio[i] == '_' ) {
                completada = false;
                break;
            }
        }

        if ( completada ) {
            break;
        }

    } while( intentos > 0 );

    if( intentos > 0 ){
        system( "cls" );
        cout << setw( 35 );

        for( int i = 0; i < num_caracteres; i++ ) {
            cout << vacio[i] << " ";
        }
        cout << endl << endl << endl;
        cout << setw(55) << " \xAD\xAD\xAD FELICIDADES, GANASTE !!!"<<endl << endl;
    } else {
        system("cls");

        cout << "Fallaste.";
        cout<< setw(25) <<"La palabra era: ";

        for( int i = 0; i < num_caracteres; i++ ) {
            cout << palabra[i] << " ";
        }

        cout<<"____________"<<endl;
        cout<<"|       |"<<endl;
        cout<<"|       |"<<endl;
        cout<<"|      ___"<<endl;
        cout<<"|     (x_x)  "<<endl;
        cout<<"|      /|\\ "<<endl;
        cout<<"|     / | \\"<<endl;
        cout<<"|    /  |  \\"<<endl;
        cout<<"|      / \\"<<endl;
        cout<<"|     /   \\"<<endl;
        cout<<"|    /     \\"<<endl;
        cout<<"\\--------------"<<endl;
    }

    system( "pause" );
    int opcion_continuar = 0;
    do {
        cout << "\n Deseas ver otro curso?: \n1. Si \n2. No, salir del programa" << endl;
        cin >> opcion_continuar;
        if ( opcion_continuar != 1 && opcion_continuar != 2 ) {
            cout << "Valor incorrecto. Intentalo de nuevo:" << endl;
        }
    } while ( opcion_continuar != 1 && opcion_continuar != 2 );

    return ( opcion_continuar == 1 ) ? 1 : 3;
}

