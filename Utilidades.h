#ifndef UTILIDADES.H
#define UTILIDADES.H

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

string leerPalabra ( istream& ) ;
void escribirLeccion ( ifstream & );
void realizarExamen ( const string preguntas[], const string opciones [][3], const char respuestas[] );

#endif

