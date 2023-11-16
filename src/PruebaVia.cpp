/*
 * PruebaVia.cpp
 *
 */

#include "PruebaVia.h"

PruebaVia::PruebaVia() {
	via = new Via(8, "San Pedro", 126.79, "Calle", 1556);

}
void PruebaVia::mainPruebasVia() {
	cout << "INICIO DE LAS PRUEBAS VÍA" << endl;
	pruebacuantosArboles();
	pruebainsertarArbol();
	prueballenarColaPrioridad();
	prueballenarColaPrioridadEspecie();
	pruebaescribirArbolesenFichero();
	prueballenarListaEspecies();
	pruebacuantosArboles();
	cout << "FIN DE LAS PRUEBAS VÍA" << endl;
}
void PruebaVia::pruebacuantosArboles() {
	cout << endl << "Inicio prueba cuantosArboles" << endl;
	if (via->cuantosArboles() == 0) {
		cout << "---Error en cuantosArboles---" << endl;
	}
	cout << endl << "Fin prueba cuantosArboles" << endl;
}

void PruebaVia::pruebainsertarArbol() {
	cout << endl << "Inicio prueba insertarArbol" << endl;
	Arbol *a;
	a = new Arbol("Acer_sacharinum", "Aceraceae", "ARCE PLATEADO", "ACER", 0.04,
			2.6, 0.9, "ASPERSION", 1, 1556);
	via->insertarArbol(a);
	a = new Arbol("Catalpa_bungei", "Bignoniaceae", "CATALPA DE BUNGE",
			"CATALPA", 0.3, 4, 2, "NO RIEGO", 1, 1556);
	via->insertarArbol(a);

	if (via->cuantosArboles() != 2) {
		cout << "---Error en insertarArbol---" << endl;
	}
	cout << endl << "Fin prueba insertarArbol" << endl;
	delete a;
}

void PruebaVia::prueballenarColaPrioridad() {
	cout << endl << "Inicio prueba llenarColaPrioridad" << endl;
	Cola<strArbolyVia*> *c = new Cola<strArbolyVia*>();
	strArbolyVia *str;
	string genero;
	via->llenarColaPrioridad(genero, c);
	if (c->vacia() != true) {
		cout << "ERROR" << endl;
	}
	cout << endl << "Fin prueba llenarColaPrioridad" << endl;
	while (!c->vacia()) {
		c->primero(str);
		c->desencolar();

	}

	delete c;
}

void PruebaVia::prueballenarColaPrioridadEspecie() {
	cout << endl << "Inicio prueba llenarColaPrioridadEspecie" << endl;
	Cola<strEspecie*> *c = new Cola<strEspecie*>();
	strEspecie *str;
	string genero;
	via->llenarColaPrioridadEspecie(genero, c);
	if (c->vacia() != true) {
		cout << "ERROR" << endl;
	}
	cout << endl << "Fin prueba llenarColaPrioridad" << endl;
	while (!c->vacia()) {
		c->primero(str);
		c->desencolar();

	}

	delete c;

}

void PruebaVia::pruebaescribirArbolesenFichero() {
	cout << endl << "Inicio prueba escribirArbolesenFichero" << endl;
	Arbol *a;
	a = new Arbol("Acer_sacharinum", "Aceraceae", "ARCE PLATEADO", "ACER", 0.04,
			2.6, 0.9, "ASPERSION", 1, 1556);

	via->insertarArbol(a);
	via->escribirArbolesenFichero("FicheroPruebaVia.txt");
	cout << endl << "Fin prueba escribirArbolesenFichero" << endl;

	delete a;
}

void PruebaVia::prueballenarListaEspecies() {
	cout << endl << "Inicio prueba llenarListaEspecies" << endl;
	ListaPI<strEspecie*> *lista = new ListaPI<strEspecie*>();
	strEspecie *str;
	Arbol *a;
	a = new Arbol("Acer_sacharinum", "Aceraceae", "ARCE PLATEADO", "ACER", 0.04,
			2.6, 0.9, "ASPERSION", 1, 1556);

	via->insertarArbol(a);

	via->llenarListaEspecies(lista);
	if (lista->estaVacia() == true) {
		cout << "ERROR" << endl;
	}
	cout << endl << "Fin prueba llenarListaEspecies" << endl;
	lista->moverInicio();
	while (!lista->estaVacia()) {
		lista->consultar(str);
		lista->borrar();

	}
	delete a;
	delete lista;

}

PruebaVia::~PruebaVia() {
	delete via;
}
