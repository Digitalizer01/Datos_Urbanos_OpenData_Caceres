/*
 * PruebaBarrio.cpp
 *
 */

#include "PruebaBarrio.h"

PruebaBarrio::PruebaBarrio() {
	b = new Barrio("NombrePrueba", 1.1, 2.2, 3, "DistritoPrueba");
}

void PruebaBarrio::pruebainsertarViaenLista() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 1556);

	b->insertarViaenLista(vaux1);

	if (b->contarVias() != 1) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");

	delete vaux1;
}

void PruebaBarrio::pruebainsertarArbolenVia() {
	Arbol *a;
	a = new Arbol("Acer_sacharinum", "Aceraceae", "ARCE PLATEADO", "ACER", 0.04,
			2.6, 0.9, "ASPERSION", 1, 1556);
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 1556);

	b->insertarViaenLista(vaux1);
	b->insertarArbolenVia(a);

	if (vaux1->cuantosArboles() != 1) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");

	delete a;
	delete vaux1;
}

void PruebaBarrio::pruebaexisteVia() {

	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->existeVia(2, vaux1) == true) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;

}

void PruebaBarrio::pruebainsertarOrden() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->existeVia(2, vaux1) == true) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;
}

void PruebaBarrio::pruebainsertarFinal() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->existeVia(2, vaux1) == true) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;
}

void PruebaBarrio::pruebaobtenerUltima() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);
	Via *vaux;

	b->insertarViaenLista(vaux2);
	b->insertarFinal(vaux1);

	b->obtenerUltima(vaux);

	if (vaux->getNombre() == "Nombre1") {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");


	delete vaux1;
	delete vaux2;
}

void PruebaBarrio::pruebaeliminarVia() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);
	Via *vaux;
	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	b->eliminarVia("Nombre1");

	if (b->existeViaNombre("Nombre1", vaux) != true) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;


}

void PruebaBarrio::pruebacontarVias() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->contarVias() != 2) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;

}

void PruebaBarrio::pruebacontarViasTipo() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->contarVias() != 2) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;

}

void PruebaBarrio::pruebaobtenerViasTipo() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->contarVias() != 2) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;

}

void PruebaBarrio::pruebaobtenerViasLongitud() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->existeVia(2, vaux1) == true) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;
}

void PruebaBarrio::prueballenarColaPrioridad() {
	Cola<strArbolyVia*> *c = new Cola<strArbolyVia*>();
	strArbolyVia *str;
	string genero;
	b->llenarColaPrioridad(genero, c);
	if (c->vacia() != true) {
		cout << "ERROR" << endl;
	}
	while (!c->vacia()) {
		c->primero(str);
		c->desencolar();
		delete str;
	}


	delete c;
}

void PruebaBarrio::prueballenarListaEspecies() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->existeViaNombre("Nombre1", vaux1) != true) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;

}

void PruebaBarrio::pruebaexisteViaNombre() {
	Via *vaux1 = new Via(1, "Nombre1", 2.2, "Tipo1", 3);
	Via *vaux2 = new Via(4, "Nombre2", 5.5, "Tipo1", 6);

	b->insertarViaenLista(vaux1);
	b->insertarViaenLista(vaux2);

	if (b->existeViaNombre("Nombre1", vaux1) != true) {
		cout << "ERROR" << endl;
	}

	b->eliminarVia("Nombre1");
	b->eliminarVia("Nombre2");

	delete vaux1;
	delete vaux2;

}

void PruebaBarrio::pruebaBarrioRun() {
	pruebainsertarViaenLista();
	pruebainsertarArbolenVia();
	pruebaexisteVia();
	pruebainsertarOrden();
	pruebainsertarFinal();
	pruebaobtenerUltima();
	pruebaeliminarVia();
	pruebacontarVias();
	pruebacontarViasTipo();
	pruebaobtenerViasTipo();
	pruebaobtenerViasLongitud();
	prueballenarColaPrioridad();
	prueballenarListaEspecies();
	pruebaexisteViaNombre();
}

PruebaBarrio::~PruebaBarrio() {
	delete b;
}

