/*
 * Via.h
 *
 */

#ifndef VIA_H_
#define VIA_H_
#include "listapi.h"
#include "Arbol.h"
#include "cola.h"
#include <fstream>
#include <cstdlib>
#include <iostream>
using namespace std;

struct strArbolyVia {
	Arbol *a;
	string nombreVia;
};

struct strEspecie {
	string nombreEspecie;
	int numeroArbolesEspecie;
};

class Via {
	int codBarrio;
	string nombre;
	float longitud;
	string tipo;
	int codigo;
	ListaPI<Arbol*> *listaArboles;
	void llenarEspecieArbol(ListaPI<strEspecie*> *&lista, Arbol *a);
	void insertarOrdenColaPrioridad(strArbolyVia *s, Cola<strArbolyVia*> *&c);
public:

	/*
	 * PRE:
	 * POST: inicialia los atributos a cero.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	Via();
	/*
	 * PRE: los parámetros deben tener datos válidos
	 * POST: los atributos quedan inicializados de manera correcta con los datos dados por parámetros
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * codBarrio: código del barrio al que pertenece
	 * nombre: nombre de la via
	 * longitud: longitud de la via
	 * tipo: tipo de la via
	 * codigo: código de la via
	 */
	Via(int codBarrio, string nombre, float longitud, string tipo, int codigo);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	int getCodBarrio() const;

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * codBarrio: código del barrio al que pertenece
	 */
	void setCodBarrio(int codBarrio);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	int getCodigo() const;

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 codigo: código de la via
	 */
	void setCodigo(int codigo);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	float getLongitud() const;

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * longitud: longitud de la via
	 */
	void setLongitud(float longitud);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getNombre() const;

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * nombre: nombre de la via
	 */
	void setNombre(const string& nombre);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getTipo() const;

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * tipo: tipo de la via
	 */
	void setTipo(const string& tipo);

	/*
	 * PRE: todos los datos se han creado correctamente
	 * POST: muestra todos los datos de la vía
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */

	void mostrar();

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta un árbol en la vía.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros: árbol (a)
	 */

	void insertarArbol(Arbol *a);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta en una cola teniendo en cuenta unos parámetros.
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros: genero de árbol (genero) y cola (c)
	 */
	void llenarColaPrioridad(string genero, Cola<strArbolyVia*> *&c);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta en una cola teniendo en cuenta unos parámetros.
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros:
	 */
	void llenarColaPrioridadEspecie(string genero, Cola<strEspecie*> *&c);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: escribe los árboles de la vía en un fichero dando un nombre para el fichero.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros: nombre del fichero (nombFichero)
	 */

	void escribirArbolesenFichero(string nombFichero);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: llena una lista teniendo en cuenta la especie del árbol.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros: lista (lista)
	 */

	void llenarListaEspecies(ListaPI<strEspecie*>*& lista);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: cuenta los árboles de los barrios.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros:
	 */

	int cuantosArboles();
	/*
	 * PRE:
	 * POST: liberia memoria.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	~Via();
};

#endif /* VIA_H_ */
