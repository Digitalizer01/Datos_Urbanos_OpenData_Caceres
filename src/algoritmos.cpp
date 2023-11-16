/*
 * Algoritmos.cpp
 *
 */

#include <fstream>
#include <iostream>

#include "algoritmos.h"

using namespace std;

// MAIN function

int main() {


	Algoritmos Algoritmos;
}

// ******************** PRIVATE OPERATIONS ********************

void Algoritmos::run() {


	string genero = "ACACIA";
	string nombFichero = "Sakura.txt";
	string nombFichero2 = "Sakura2.txt";
	string nombreVia = "Gredos";

	//Escribir una operación que genere un fichero con todos los árboles de una
	//determinada vía. La vía se pedirá al usuario

	//Implementar una operación que escriba en un fichero el total de árboles por
	//cada una de las especies.

	//Generar un listado en pantalla que muestre el numero de árboles que tiene
	//cada barrio, con el formato:
	//nombre del barrio: número de árboles.

	/*
	 cout << "Comienzo ALGORITMO 0" << endl;
	 mostrarBarrios();
	 cout << "Fin ALGORITMO 0" << endl;
	 */
	// Algoritmo 1
	cout << "Comienzo ALGORITMO 1" << endl;
	algoritmo1(nombreVia, nombFichero);
	cout << "Fin ALGORITMO 1" << endl;

	// Algoritmo 2
	cout << "Comienzo ALGORITMO 2" << endl;
	algoritmo2(genero);
	cout << "Fin ALGORITMO 2" << endl;

	// Algoritmo 3
	cout << "Comienzo ALGORITMO 3" << endl;
	algoritmo3(nombFichero2);
	cout << "Fin ALGORITMO 3" << endl;

	// Algoritmo 4
	cout << "Comienzo ALGORITMO 4" << endl;
	algoritmo4();
	cout << "Fin ALGORITMO 4" << endl;
}

// ******************** PUBLIC INTERFACE ********************

Algoritmos::Algoritmos() {

	cout << "Programming Project v1.00 (EDI)." << endl;
	cout << "           Author: José Diaz Parra e Ismael Lázaro Hidalgo."
			<< endl;
	cout << "           Date:   March 8th, 2019." << endl;

	cjtoBarrios = new ConjuntoBarrios();
	pruebaA = new PruebaArbol();
	pruebaV = new PruebaVia();
	pruebaB = new PruebaBarrio();
	pruebaCB = new PruebaConjuntoBarrio();
	//***********************************************
	//El juego de pruebas está desactivado por defecto. Quitar la barra de comentarios si se quiere probar.
	//***********************************************

	//this->pruebas(); //Quitar // para ejecutar las pruebas.
	this->cargarDatosBarrios();
	this->cargarDatosVias();
	this->cargarArboles();
	this->run();
}

void Algoritmos::cargarDatosBarrios() {

	Barrio *baux;
	string nombre, area, perimetro, codigoBarrio, distrito, basura;

	ifstream flujo("Barrio.csv");
	if (flujo.is_open()) {
		getline(flujo, basura);
		while (!flujo.eof()) {
			getline(flujo, nombre, ';');
			if (!flujo.eof()) {

				getline(flujo, area, ';');
				getline(flujo, perimetro, ';');
				getline(flujo, codigoBarrio, ';');
				getline(flujo, distrito);

				baux = new Barrio(nombre, atof(area.c_str()),
						atof(perimetro.c_str()), atoi(codigoBarrio.c_str()),
						distrito);
				this->cjtoBarrios->insertar(baux);
			}
		}
	} else {
		cout << "Error" << endl;
	}

	flujo.close();
}

void Algoritmos::cargarDatosVias() {
	Via *vaux;
	string codBarrio, nombre, longitud, tipo, codigo, basura;

	Barrio *b;
	bool enc = false;
	int i = 0;
	ifstream flujo("Via.csv");
	if (flujo.is_open()) {
		getline(flujo, basura);
		while (!flujo.eof()) {
			getline(flujo, codBarrio, ';');
			if (!flujo.eof()) {

				getline(flujo, nombre, ';');
				getline(flujo, longitud, ';');
				getline(flujo, tipo, ';');
				getline(flujo, codigo);
				vaux = new Via(atoi(codBarrio.c_str()), nombre,
						atof(longitud.c_str()), tipo, atoi(codigo.c_str()));
				i = 0;
				enc = false;
				while (!enc && i < this->cjtoBarrios->cuantos()) {
					this->cjtoBarrios->obtenerPos(i, b);
					if (b->getCodigo() == vaux->getCodBarrio()) {
						enc = true;
						b->insertarViaenLista(vaux);
					} else {
						i++;
					}
				}
			}

		}
	} else {
		cout << "Error" << endl;
	}

	flujo.close();
}

void Algoritmos::cargarArboles() {
	/*
	 * Leer los árboles del fiches y una vez que se tiene el árbol cargado:
	 */

	/*
	 * a es el árbol que se acaba de leer.
	 */

	string especie, familia, nombreComun, genero, diametro, altura, copa, riego,
			unidades, codigoVia, basura;
	Arbol *a;

	Barrio *baux;
	Via *vaux;

	ifstream flujo("Arbol.csv");
	if (flujo.is_open()) {

		getline(flujo, basura);
		while (!flujo.eof()) {
			int i = 0;
			bool enc = false;

			getline(flujo, especie, ';');
			if (!flujo.eof()) {

				getline(flujo, familia, ';');
				getline(flujo, nombreComun, ';');
				getline(flujo, genero, ';');
				getline(flujo, diametro, ';');
				getline(flujo, altura, ';');
				getline(flujo, copa, ';');
				getline(flujo, riego, ';');
				getline(flujo, unidades, ';');
				getline(flujo, codigoVia);

				a = new Arbol(especie, familia, nombreComun, genero,
						atof(diametro.c_str()), atof(altura.c_str()),
						atof(copa.c_str()), riego, atoi(unidades.c_str()),
						atoi(codigoVia.c_str()));

				while (i < this->cjtoBarrios->cuantos() && !enc) {
					this->cjtoBarrios->obtenerPos(i, baux);
					if (baux->existeVia(a->getCodigoVia(), vaux)) {
						baux->insertarArbolenVia(a);
						enc = true;
					} else {
						i++;
					}
				}
			}

		}

	} else {
		cout << "Error" << endl;
	}

	flujo.close();
}

void Algoritmos::algoritmo2(string genero) {
	Cola<strArbolyVia*> *c = new Cola<strArbolyVia*>();
	Barrio *b;
	strArbolyVia *s;
	int i;

	for (i = 0; i < this->cjtoBarrios->cuantos(); i++) {
		this->cjtoBarrios->obtenerPos(i, b);
		b->llenarColaPrioridad(genero, c);
	}
	while (!c->vacia()) {
		c->primero(s);
		c->desencolar();

		cout << "Via: " << s->nombreVia;
		s->a->mostrar();
		cout << endl;
		delete s;
	}

	delete c;
}

/*bool Algoritmos::contieneArbol(Arbol* a, string& nombreVia) {
 Via *v;
 bool enc = false;
 this->listaVias->moverInicio();

 while (!listaVias->finLista() && !enc) {
 this->listaVias->consultar(v);
 if (v->contieneArbol(a)) {
 enc = true;
 nombreVia = v->getNombre();
 } else {
 this->listaVias->avanzar();
 }
 }
 return enc;
 }*/

void Algoritmos::algoritmo3(string nombFichero2) {
	/*
	 * Implementar una operación que escriba en un
	 * fichero el total de árboles por
	 cada una de las especies.
	 */

	ofstream flujo("Algoritmo3.txt");
	ListaPI<strEspecie*> *lista = new ListaPI<strEspecie*>();
	Barrio *b;
	strEspecie *ste;
	if (flujo.is_open()) {
		int i;
		for (i = 0; i < this->cjtoBarrios->cuantos(); i++) {
			this->cjtoBarrios->obtenerPos(i, b);
			b->llenarListaEspecies(lista);
		}

		lista->moverInicio();
		while (!lista->estaVacia()) {
			lista->consultar(ste);
			flujo << ste->nombreEspecie << " " << ste->numeroArbolesEspecie
					<< endl;
			lista->borrar();
			delete ste;
		}
		delete lista;
	} else {
		cout << "ERROR al crear el fichero." << endl;
	}
	flujo.close();
}

void Algoritmos::algoritmo4() {
	int i;
	Barrio *baux;

	for (i = 0; i < this->cjtoBarrios->cuantos(); i++) {
		this->cjtoBarrios->obtenerPos(i, baux);

		cout << "Barrio: " << baux->getNombre()
				<< " | Número de árboles del barrio: "
				<< baux->cuantoArbolesBarrio() << endl;
	}
}

void Algoritmos::algoritmo1(string nombreVia, string nombFichero) {
	Barrio *baux;
	Via *vaux;

	int i = 0;
	bool enc = false;
	this->cjtoBarrios->obtenerPos(i, baux);
	while (i < this->cjtoBarrios->cuantos() && !enc) {
		this->cjtoBarrios->obtenerPos(i, baux);
		if (baux->existeViaNombre(nombreVia, vaux)) {
			vaux->escribirArbolesenFichero(nombFichero);
			enc = true;
		} else {
			i++;
		}
	}
}

//*********************************************************

Algoritmos::~Algoritmos() {
// Complete memory deallocation
	if (this->cjtoBarrios != NULL) {
		delete this->cjtoBarrios;
	}
	delete pruebaA;
	delete pruebaV;
	delete pruebaB;
	delete pruebaCB;
}

void Algoritmos::pruebas() {
	pruebaA->pruebaArbolrun();
	pruebaV->mainPruebasVia();
	pruebaB->pruebaBarrioRun();
	pruebaCB->runCB();
}
