/*
 * Barrio.cpp
 *
 */

#include "Barrio.h"

Barrio::Barrio() {
	this->nombre = "";
	this->area = 0;
	this->perimetro = 0;
	this->codigo = 0;
	this->distrito = "";
	this->listaVia = new ListaPI<Via*>();

}

Barrio::Barrio(string nombre, float area, float perimetro, int codigo,
		string distrito) {
	this->nombre = nombre;
	this->area = area;
	this->perimetro = perimetro;
	this->codigo = codigo;
	this->distrito = distrito;
	this->listaVia = new ListaPI<Via*>();
}

float Barrio::getArea() const {
	return area;
}

void Barrio::setArea(float area) {
	this->area = area;
}

int Barrio::getCodigo() const {
	return codigo;
}

void Barrio::setCodigo(int codigo) {
	this->codigo = codigo;
}

const string& Barrio::getDistrito() const {
	return distrito;
}

void Barrio::setDistrito(const string& distrito) {
	this->distrito = distrito;
}

const string& Barrio::getNombre() const {
	return nombre;
}

void Barrio::setNombre(const string& nombre) {
	this->nombre = nombre;
}

float Barrio::getPerimetro() const {
	return perimetro;
}

void Barrio::setPerimetro(float perimetro) {
	this->perimetro = perimetro;
}

/*
 void Barrio::mostrar() {

 if (this->listaVia != NULL) {
 Via *vaux1;

 cout << endl << "Codigo del barrio: " << this->codigo << endl;
 cout << "Nombre del barrio: " << this->nombre << endl;
 cout << "Area del barrio: " << this->area << endl;
 cout << "Perímetro del barrio: " << this->perimetro << endl;
 cout << "Distrito del barrio: " << this->distrito << endl;

 for (int i = 0; i < this->listaVia->obtenerCantidad(); i++) {
 this->listaVia->insertar(vaux1);
 vaux1->mostrar();
 }
 }
 }
 */

void Barrio::meterViaOrden(Via* v) {
	listaVia->moverInicio();
	if (listaVia->estaVacia()) {
		listaVia->insertar(v);
	} else {
		bool insertada = false;
		Via *aux;
		while (!listaVia->finLista() && !insertada) {
			listaVia->consultar(aux);
			if (v->getNombre() > aux->getNombre()) {
				listaVia->avanzar();
			} else {
				if ((v->getNombre() < aux->getNombre())
						|| (v->getTipo() != aux->getTipo())) {
					listaVia->insertar(v);
				}
				insertada = true;
			}
		}
		if (!insertada) {
			listaVia->insertar(v);
		}
	}
}

int Barrio::getNumVia() {
	if (this->listaVia == NULL) {
		return 0;
	} else {
		return contarVias();
	}
}

void Barrio::insertarArbolenVia(Arbol* a) {
	Via *vaux;
	bool enc = false;

	this->listaVia->moverInicio();
	while (!this->listaVia->finLista() && !enc) {
		this->listaVia->consultar(vaux);
		if (vaux->getCodigo() == a->getCodigoVia()) {
			enc = true;
			vaux->insertarArbol(a);
		} else {
			this->listaVia->avanzar();
		}
	}
}

bool Barrio::existeVia(int codigoVia, Via *&v) {
	bool enc = false;

	if (this->listaVia != NULL) {
		listaVia->moverInicio();
		while (!listaVia->finLista() && !enc) {
			listaVia->consultar(v);
			if (v->getCodigo() == codigoVia)
				enc = true;
			else
				listaVia->avanzar();
		}
	}
	return enc;
}

void Barrio::llenarColaPrioridad(string genero, Cola<strArbolyVia*>*& c) {

	if (this->listaVia != NULL) {
		Via *v;
		this->listaVia->moverInicio();

		while (!this->listaVia->finLista()) {
			this->listaVia->consultar(v);
			v->llenarColaPrioridad(genero, c);
			this->listaVia->avanzar();
		}
	}

}


bool Barrio::existeViaNombre(string nombVia, Via *&v) {
	bool enc = false;
	int i = 0;

	if (this->listaVia != NULL) {
		listaVia->moverInicio();
		while (!listaVia->finLista() && !enc) {
			listaVia->consultar(v);
			if (v->getNombre() == nombVia)
				enc = true;
			else
				listaVia->avanzar();
		}
	}
	return enc;
}

void Barrio::insertarViaenLista(Via* v) {



	listaVia->moverInicio();
	if (listaVia->estaVacia()) {
		listaVia->insertar(v);
	} else {
		bool insertada = false;
		Via *aux;
		while (!listaVia->finLista() && !insertada) {
			listaVia->consultar(aux);
			if (v->getNombre() > aux->getNombre()) {
				listaVia->avanzar();
			} else {
				if ((v->getNombre() < aux->getNombre())
						|| (v->getTipo() != aux->getTipo())) {
					listaVia->insertar(v);
				}
				insertada = true;
			}
		}
		if (!insertada) {
			listaVia->insertar(v);
		}
	}
}

void Barrio::llenarListaEspecies(ListaPI<strEspecie*>*& lista) {
	if(this->listaVia!=NULL){
		Via *v;
		this->listaVia->moverInicio();
		while(!this->listaVia->finLista()){
			this->listaVia->consultar(v);
			v->llenarListaEspecies(lista);
			this->listaVia->avanzar();
		}
	}
}

Barrio::~Barrio() {
	if (this->listaVia != NULL) {
		delete this->listaVia;
	}
}

void Barrio::mostrar() {
	listaVia->moverInicio();
	Via *aux;
	while (listaVia->finLista()) {
		listaVia->consultar(aux);
		aux->mostrar();
	}
}

void Barrio::insertarOrden(Via *v) {
	listaVia->moverInicio();
	if (listaVia->estaVacia()) {
		listaVia->insertar(v);
	} else {
		bool insertada = false;
		Via *aux;
		while (!listaVia->finLista() && !insertada) {
			listaVia->consultar(aux);
			if (v->getNombre() > aux->getNombre()) {
				listaVia->avanzar();
			} else {
				if ((v->getNombre() < aux->getNombre())
						|| (v->getTipo() != aux->getTipo())) {
					listaVia->insertar(v);
				}
				insertada = true;
			}
		}
		if (!insertada) {
			listaVia->insertar(v);
		}
	}
}

void Barrio::insertarFinal(Via* v) {
	if (listaVia->estaVacia()) {
		listaVia->insertar(v);
	} else {
		listaVia->moverFinal();
		listaVia->avanzar();
		listaVia->insertar(v);
	}
}

void Barrio::obtenerUltima(Via *&v) {
	listaVia->moverFinal();
	listaVia->consultar(v);
}

void Barrio::eliminarVia(string nombre) {
	listaVia->moverInicio();
	Via *aux;
	bool eliminada = false;
	while (listaVia->finLista() && !eliminada) {
		listaVia->consultar(aux);
		if (aux->getNombre() == nombre) {
			listaVia->borrar();
			eliminada = true;
		} else {
			listaVia->avanzar();
		}
	}
}

int Barrio::contarVias() {
	int cont = 0;

	if (!listaVia->finLista()) {
		listaVia->avanzar();
		cont = 1 + contarVias();
	}

	return cont;
}

int Barrio::contarViasTipo(string tipo) {
	int cont = 0;

	if (!listaVia->finLista()) {
		listaVia->avanzar();
		Via *aux;
		listaVia->consultar(aux);
		if (aux->getTipo() == tipo) {
			cont++;
		}
		cont += contarViasTipo(tipo);
	}

	return cont;
}

void Barrio::obtenerViasTipo(ListaPI<Via*>* laux, string tipo) {
	listaVia->moverFinal();
	Via *aux;

	while (!listaVia->finLista()) {
		listaVia->consultar(aux);
		if (aux->getTipo() == tipo) {
			laux->insertar(aux);
		}
		listaVia->avanzar();
	}
}

void Barrio::obtenerViasLongitud(ListaPI<Via*>* laux, float longitud) {
	listaVia->moverFinal();
	Via *aux;

	while (!listaVia->finLista()) {
		listaVia->consultar(aux);
		if (aux->getLongitud() < longitud) {
			laux->insertar(aux);
		}
		listaVia->avanzar();
	}
}

int Barrio::cuantoArbolesBarrio() {
	int cont = 0;

	if (this->listaVia != NULL) {
		Via *vaux;
		this->listaVia->moverInicio();

		while (!this->listaVia->finLista()) {
			this->listaVia->consultar(vaux);
			cont = cont + vaux->cuantosArboles();
			this->listaVia->avanzar();
		}
	}

	return cont;
}
