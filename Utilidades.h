#ifndef UTILIDADES.H
#define UTILIDADES.H

#include <iostream>
#include <string.h>
#include <fstream>
#include <windows.h>
#include <sstream>
using namespace std;

string leerPalabra ( istream& ) ;
void escribirLeccion ( ifstream & );
void realizarExamen ( const string preguntas[], const string opciones [][3], const char respuestas[], int );
ostream& guardarPuntaje ( ostream&, string );
void verificarTema( int, int );
#endif

