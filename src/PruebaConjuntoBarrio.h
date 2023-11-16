/*
 * PruebaConjuntoBarrio.h
 *
 */

#ifndef PRUEBACONJUNTOBARRIO_H_
#define PRUEBACONJUNTOBARRIO_H_

#include "ConjuntoBarrios.h"

class PruebaConjuntoBarrio {

private:
	ConjuntoBarrios *cjtoBarriosS;
public:
	/*
	 * PRE:
	 * POST: constructor por defecto.
	 *
	 * Complejidad: O(1)
	 */
	PruebaConjuntoBarrio();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void insertarCB();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void eliminarCB();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void obtenerPosCB();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void obtenerCB();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void existeCB();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void cuantosCB();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */
	void vacioCB();
	/*
	 * PRE:
	 * POST: prueba el método del mismo nombre de la clase deseada.
	 *
	 * Complejidad: O(1)
	 */

	void runCB();
	/*
	 * PRE:
	 * POST: destructor.
	 *
	 * Complejidad: O(1)
	 */
	~PruebaConjuntoBarrio();
};

#endif /* PRUEBACONJUNTOBARRIO_H_ */
