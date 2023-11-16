/*
 * PruebaConjuntoBarrio.cpp
 *
 */

#include "PruebaConjuntoBarrio.h"

PruebaConjuntoBarrio::PruebaConjuntoBarrio() {
	cjtoBarriosS = new ConjuntoBarrios();
}

void PruebaConjuntoBarrio::insertarCB() {

	Barrio *b1 = new Barrio("NombreBarrio", 99.1, 88.1, 100, "NombreDistrito");

	if (this->cjtoBarriosS == NULL) {
		this->cjtoBarriosS = new ConjuntoBarrios();
	}

	this->cjtoBarriosS->insertar(b1);

	if (this->cjtoBarriosS->existe(100) == false) {
		cout << "ERROR" << endl;
	}
	if (this->cjtoBarriosS->vacio() == true) {
		cout << "ERROR" << endl;
	}

	this->cjtoBarriosS->eliminar(100);
	delete b1;
}

void PruebaConjuntoBarrio::eliminarCB() {

	Barrio *b1 = new Barrio("NombreBarrio", 99.1, 88.1, 100, "NombreDistrito");

	this->cjtoBarriosS->insertar(b1);

	this->cjtoBarriosS->eliminar(100);

	if (this->cjtoBarriosS->existe(100) == true) {
		cout << "ERROR" << endl;
	}

	delete b1;
}

void PruebaConjuntoBarrio::obtenerPosCB() {
	Barrio *b1 = new Barrio("NombreBarrio", 99.1, 88.1, 100, "NombreDistrito");

	this->cjtoBarriosS->insertar(b1);
	Barrio *baux;

	this->cjtoBarriosS->obtenerPos(0, baux);

	if (baux->getNombre() != b1->getNombre()) {
		cout << "ERROR" << endl;
	}

	this->cjtoBarriosS->eliminar(100);
	delete b1;
	delete baux;
}

void PruebaConjuntoBarrio::obtenerCB() {
	Barrio *b1 = new Barrio("NombreBarrio", 99.1, 88.1, 100, "NombreDistrito");

	this->cjtoBarriosS->insertar(b1);
	Barrio *baux;

	this->cjtoBarriosS->obtener(100, baux);

	if (baux->getNombre() != b1->getNombre()) {
		cout << "ERROR" << endl;
	}

	this->cjtoBarriosS->eliminar(100);
	delete b1;
	delete baux;
}

void PruebaConjuntoBarrio::existeCB() {
	Barrio *b1 = new Barrio("NombreBarrio", 99.1, 88.1, 100, "NombreDistrito");

	this->cjtoBarriosS->insertar(b1);

	if (this->cjtoBarriosS->existe(100) == false) {
		cout << "ERROR" << endl;
	}

	this->cjtoBarriosS->eliminar(100);

	delete b1;
}

void PruebaConjuntoBarrio::cuantosCB() {
	Barrio *b1 = new Barrio("NombreBarrio", 99.1, 88.1, 100, "NombreDistrito");

	this->cjtoBarriosS->insertar(b1);

	if (this->cjtoBarriosS->cuantos() != 1) {
		cout << "ERROR" << endl;
	}

	this->cjtoBarriosS->eliminar(100);
	delete b1;
}

void PruebaConjuntoBarrio::vacioCB() {
	Barrio *b1 = new Barrio("NombreBarrio", 99.1, 88.1, 100, "NombreDistrito");

	this->cjtoBarriosS->insertar(b1);

	if (this->cjtoBarriosS->vacio() == true) {
		cout << "ERROR" << endl;
	}

	this->cjtoBarriosS->eliminar(100);
	delete b1;
}

void PruebaConjuntoBarrio::runCB() {
	 insertarCB();
	 eliminarCB();
	 obtenerPosCB();
	 obtenerCB();
	 existeCB();
	 cuantosCB();
	 vacioCB();
}

PruebaConjuntoBarrio::~PruebaConjuntoBarrio() {
	delete this->cjtoBarriosS;
}
