/*
 * Algoritmos.h
 *
 */

#ifndef ALGORITMOS_H_
#define ALGORITMOS_H_

#include "PruebaBarrio.h"
#include "PruebaVia.h"
#include "PruebaArbol.h"
#include "PruebaConjuntoBarrio.h"
#include "ConjuntoBarrios.h"



class Algoritmos {

private:
    
    // TODO atributo, puntero a la clase conjunto de barrios
	ConjuntoBarrios *cjtoBarrios;
	PruebaArbol *pruebaA;
	PruebaVia *pruebaV;
	PruebaBarrio *pruebaB;
	PruebaConjuntoBarrio *pruebaCB;
	void pruebasConjuntos();
	// carga los datos desde los ficheros de texto
	void cargarDatosBarrios();
	void cargarDatosVias();
	void cargarArboles();

	  // ejecuta todos los algoritmos del proyecto
	void run ();

public:

	 Algoritmos();
	 // Algoritmo 0 (ejemplo), muestra todos los barrios con sus vías
	 void mostrarBarrios();

     // Algoritmo  1: pedir al usuario el nombre del barrio.
	 void algoritmo1(string nombreVia, string nombFichero);
	 // Algoritmo  2:

	 void algoritmo2(string genero);
	 // Algoritmo  3:
	 void algoritmo3(string nombFichero2);
	 // Algoritmo  4:
	 void algoritmo4();


	 void pruebas();

	 ~Algoritmos();
    
};

#endif /* ALGORITMOS_H_ */
