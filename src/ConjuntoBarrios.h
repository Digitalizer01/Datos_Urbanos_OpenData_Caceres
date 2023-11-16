/*
 * ConjuntoBarrios.h
 *
 */

#ifndef CONJUNTOBARRIOS_H_
#define CONJUNTOBARRIOS_H_
#include "Barrio.h"
#include <iostream>
using namespace std;

const int MAX = 10000;

class ConjuntoBarrios {
	Barrio *cjtoBarrios[MAX];
	int ocupadas;
public:
	ConjuntoBarrios();

	void insertar(Barrio *b);
	void eliminar(int codigo);
	void obtenerPos(int pos, Barrio *&b);
	void obtener(int codigo, Barrio *&b);
	bool existe(int codigo);
	int cuantos();
	bool vacio();

	~ConjuntoBarrios();
};

#endif /* CONJUNTOBARRIOS_H_ */
