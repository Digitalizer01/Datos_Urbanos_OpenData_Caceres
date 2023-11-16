/*
 * PruebaArbol.cpp
 *
 */

#include "PruebaArbol.h"
#include "Arbol.h"

PruebaArbol::PruebaArbol() {
	// TODO Auto-generated constructor stub

}

void PruebaArbol::pruebaGetySetEspecie() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getEspecie() != "Especie1") {
		cout << "ERROR" << endl;
	}
	a2->setEspecie("EspeciePrueba");

	if (a2->getEspecie() != "EspeciePrueba") {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetFamilia() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getFamilia() != "Familia1") {
		cout << "ERROR" << endl;
	}
	a2->setFamilia("FamiliaPrueba");

	if (a2->getFamilia() != "FamiliaPrueba") {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetNombreComun() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getNombreComun() != "NombreComun1") {
		cout << "ERROR" << endl;
	}
	a2->setNombreComun("NombreComunPrueba");

	if (a2->getNombreComun() != "NombreComunPrueba") {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetGenero() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getGenero() != "Genero1") {
		cout << "ERROR" << endl;
	}
	a2->setGenero("GeneroPrueba");

	if (a2->getGenero() != "GeneroPrueba") {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetDiametro() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getDiametro() == 1.1) {
		cout << "ERROR" << endl;
	}
	a2->setDiametro(99.99);

	if (a2->getDiametro() == 99.99) {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetAltura() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getAltura() == 2.2) {
		cout << "ERROR" << endl;
	}
	a2->setAltura(99.99);

	if (a2->getAltura() == 99.99) {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetCopa() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getCopa() == 3.3) {
		cout << "ERROR" << endl;
	}
	a2->setCopa(99.99);

	if (a2->getCopa() == 99.99) {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetRiego() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getRiego() != "Riego1") {
		cout << "ERROR" << endl;
	}
	a2->setRiego("RiegoPrueba");

	if (a2->getRiego() != "RiegoPrueba") {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetUnidades() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getUnidades() != 4) {
		cout << "ERROR" << endl;
	}
	a2->setUnidades(1);

	if (a2->getUnidades() != 1) {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaGetySetCodigoVia() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
			1.1, 2.2, 3.3, "Riego1", 4, 5);
	Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
			6.6, 7.7, 8.8, "Riego2", 9, 10);

	if (a1->getCodigoVia() != 5) {
		cout << "ERROR" << endl;
	}
	a2->setCodigoVia(1);

	if (a2->getCodigoVia() != 1) {
		cout << "ERROR" << endl;
	}

	delete a1;
	delete a2;
}

void PruebaArbol::pruebaOperator() {
	Arbol *a1 = new Arbol("Especie1", "Familia1", "NombreComun1", "Genero1",
				1.1, 2.2, 3.3, "Riego1", 4, 5);
		Arbol *a2 = new Arbol("Especie2", "Familia2", "NombreComun2", "Genero2",
				6.6, 7.7, 8.8, "Riego2", 9, 10);

		if (a1 == a2) {
			cout << "ERROR" << endl;
		}

		delete a1;
		delete a2;
}

void PruebaArbol::pruebaArbolrun() {
	pruebaGetySetEspecie();
	pruebaGetySetFamilia();
	pruebaGetySetNombreComun();
	pruebaGetySetGenero();
	pruebaGetySetDiametro();
	pruebaGetySetAltura();
	pruebaGetySetCopa();
	pruebaGetySetRiego();
	pruebaGetySetUnidades();
	pruebaGetySetCodigoVia();

	pruebaOperator();
}

PruebaArbol::~PruebaArbol() {
// TODO Auto-generated destructor stub
}

