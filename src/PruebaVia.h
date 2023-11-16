/*
 * PruebaVia.h
 *
 */

#ifndef PRUEBAVIA_H_
#define PRUEBAVIA_H_

#include "Via.h"

class PruebaVia {
	Via *via;

public:/*
 * PRE:
 * POST: constructor por defecto.
 *
 * Complejidad: O(1)
 */
	PruebaVia();
	/*
		 * PRE:
		 * POST: ejecuta todas las pruebas.
		 *
		 * Complejidad: O(1)
		 */
	void mainPruebasVia();
	/*
		 * PRE:
		 * POST: prueba el método del mismo nombre de la clase deseada.
		 *
		 * Complejidad: O(1)
		 */
	void pruebainsertarArbol();
	/*
		 * PRE:
		 * POST: prueba el método del mismo nombre de la clase deseada.
		 *
		 * Complejidad: O(1)
		 */
	void prueballenarColaPrioridad();
	/*
		 * PRE:
		 * POST: prueba el método del mismo nombre de la clase deseada.
		 *
		 * Complejidad: O(1)
		 */
	void prueballenarColaPrioridadEspecie();
	/*
		 * PRE:
		 * POST: prueba el método del mismo nombre de la clase deseada.
		 *
		 * Complejidad: O(1)
		 */
	void pruebaescribirArbolesenFichero();
	/*
		 * PRE:
		 * POST: prueba el método del mismo nombre de la clase deseada.
		 *
		 * Complejidad: O(1)
		 */
	void prueballenarListaEspecies();
	/*
		 * PRE:
		 * POST: prueba el método del mismo nombre de la clase deseada.
		 *
		 * Complejidad: O(1)
		 */
	void pruebacuantosArboles();
	/*
		 * PRE:
		 * POST: destructor.
		 *
		 * Complejidad: O(1)
		 */
	~PruebaVia();
};

#endif /* PRUEBAVIA_H_ */
