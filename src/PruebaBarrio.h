/*
 * PruebaBarrio.h
 *
 */

#ifndef PRUEBABARRIO_H_
#define PRUEBABARRIO_H_

#include "Barrio.h"

class PruebaBarrio {
	Barrio *b;
public:
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	PruebaBarrio();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebainsertarViaenLista();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebainsertarArbolenVia();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebaexisteVia();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebainsertarOrden();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebainsertarFinal();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebaobtenerUltima();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebaeliminarVia();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebacontarVias();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebacontarViasTipo();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebaobtenerViasTipo();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebaobtenerViasLongitud();
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
	void prueballenarListaEspecies();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void pruebaexisteViaNombre();
	/*
	 * PRE:
	 * POST: ejecuta todas las pruebas.
	 *
	 * Complejidad: O(1)
	 */

	void pruebaBarrioRun();
	/*
	 * PRE:
	 * POST: destructor.
	 *
	 * Complejidad: O(1)
	 */
	~PruebaBarrio();
};

#endif /* PRUEBABARRIO_H_ */
