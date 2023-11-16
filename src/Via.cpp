/*
 * Via.cpp
 *
 */

#include "Via.h"

Via::Via() {
	this->codBarrio = 0;
	this->codigo = 0;
	this->longitud = 0;
	this->nombre = "";
	this->tipo = "";
	this->listaArboles = new ListaPI<Arbol*>();
}

Via::Via(int codBarrio, string nombre, float longitud, string tipo,
		int codigo) {
	this->codBarrio = codBarrio;
	this->codigo = codigo;
	this->longitud = longitud;
	this->nombre = nombre;
	this->tipo = tipo;
	this->listaArboles = new ListaPI<Arbol*>();
}

int Via::getCodBarrio() const {
	return codBarrio;
}

void Via::setCodBarrio(int codBarrio) {
	this->codBarrio = codBarrio;
}

int Via::getCodigo() const {
	return codigo;
}

void Via::setCodigo(int codigo) {
	this->codigo = codigo;
}

float Via::getLongitud() const {
	return longitud;
}

void Via::setLongitud(float longitud) {
	this->longitud = longitud;
}

const string& Via::getNombre() const {
	return nombre;
}

void Via::setNombre(const string& nombre) {
	this->nombre = nombre;
}

const string& Via::getTipo() const {
	return tipo;
}

void Via::setTipo(const string& tipo) {
	this->tipo = tipo;
}

void Via::mostrar() {
	cout << endl << "Código de Barrio: " << this->codBarrio << endl;
	cout << "Nombre de la via: " << this->nombre << endl;
	cout << "Longitud: " << this->longitud << endl;
	cout << "Tipo: " << this->tipo << endl;
	cout << "Código: " << this->codigo << endl;
}

void Via::insertarArbol(Arbol* a) {
	this->listaArboles->insertar(a);
}

Via::~Via() {
	if (this->listaArboles != NULL) {
		delete this->listaArboles;
	}
}

void Via::llenarColaPrioridad(string genero, Cola<strArbolyVia*>*& c) {

	if (this->listaArboles != NULL) {
		Arbol *a;
		this->listaArboles->moverInicio();

		while (!this->listaArboles->finLista()) {
			this->listaArboles->consultar(a);
			if (a->getAltura() > 5 && a->getCopa() > 3
					&& a->getGenero() == genero) {
				strArbolyVia *s = new (strArbolyVia);
				s->nombreVia = this->nombre;
				s->a = a;
				this->insertarOrdenColaPrioridad(s, c);
			}
			this->listaArboles->avanzar();
		}
	}
}

void Via::insertarOrdenColaPrioridad(strArbolyVia* s, Cola<strArbolyVia*>*& c) {
	strArbolyVia *saux;
	bool encolado = false;
	Cola<strArbolyVia*> *caux = new Cola<strArbolyVia*>();

	if (c->vacia()) {
		c->encolar(s);
	} else {
		while (!c->vacia()) {
			c->primero(saux);
			c->desencolar();

			if (s->a->getAltura() > saux->a->getAltura() && !encolado) {
				encolado = true;
				caux->encolar(s);
			}
			if (s->a->getAltura() > saux->a->getAltura() && !encolado) {
				if (s->a->getCopa() >= saux->a->getCopa()) {
					encolado = true;
					caux->encolar(s);
				}
			}
			caux->encolar(saux);
		}
		if (!encolado) {
			caux->encolar(s);
		}
		while (!caux->vacia()) {
			caux->primero(saux);
			caux->desencolar();
			c->encolar(saux);
		}
		if (caux != NULL) {
			delete caux;
		}

	}
}

void Via::llenarColaPrioridadEspecie(string genero, Cola<strEspecie*>*& c) {
	if (this->listaArboles != NULL) {
		Arbol *a;
		this->listaArboles->moverInicio();

		while (!this->listaArboles->finLista()) {
			this->listaArboles->consultar(a);
			if (a->getAltura() > 5 && a->getCopa() > 3
					&& a->getGenero() == genero) {
				strArbolyVia *s = new (strArbolyVia);
				s->nombreVia = this->nombre;
				s->a = a;
			}
			this->listaArboles->avanzar();
		}
	}
}

int Via::cuantosArboles() {
	int cont = 0;

	if (this->listaArboles != NULL) {
		Arbol *a;
		this->listaArboles->moverInicio();

		while (!this->listaArboles->finLista()) {
			this->listaArboles->consultar(a);
			cont = cont + a->getUnidades();
			this->listaArboles->avanzar();
		}
	}

	return cont;
}

void Via::escribirArbolesenFichero(string nombFichero) {
	if (listaArboles != NULL) {
		Arbol *a;
		ofstream fs(nombFichero.c_str());

		if (fs.is_open()) {
			this->listaArboles->moverInicio();
			while (!this->listaArboles->finLista()) {
				listaArboles->consultar(a);

				fs << "Especie: " << a->getEspecie() << endl;
				fs << "Familia: " << a->getFamilia() << endl;
				fs << "Nombre común: " << a->getNombreComun() << endl;
				fs << "Género: " << a->getGenero() << endl;
				fs << "Diámetro: " << a->getDiametro() << endl;
				fs << "Altura: " << a->getAltura() << endl;
				fs << "Copa: " << a->getCopa() << endl;
				fs << "Riego: " << a->getRiego() << endl;
				fs << "Unidades: " << a->getUnidades() << endl;
				fs << "Código de la vía: " << a->getCodigoVia() << endl;
				fs << endl;
				listaArboles->avanzar();
			}
		} else {
			cout << "ERROR" << endl;
		}
		fs.close();
	}
}

void Via::llenarListaEspecies(ListaPI<strEspecie*>*& lista) {
	Arbol *a;
	if(this->listaArboles!=NULL){
		this->listaArboles->moverInicio();
		while(!this->listaArboles->finLista()){
			this->listaArboles->consultar(a);
			this->llenarEspecieArbol(lista, a);
			this->listaArboles->avanzar();
		}
	}
}

void Via::llenarEspecieArbol(ListaPI<strEspecie*>*& lista, Arbol *a) {
	if(a->getEspecie()=="")
		cout<<"Especie vacia"<<endl;

	if(lista->estaVacia()){
		strEspecie *especieNueva = new (strEspecie);
		especieNueva->nombreEspecie=a->getEspecie();
		especieNueva->numeroArbolesEspecie=a->getUnidades();
		lista->insertar(especieNueva);
	}
	else{
		bool enc=false;
		strEspecie *eaux;
		lista->moverInicio();
		while(!lista->finLista()&&!enc){
			lista->consultar(eaux);
			if(eaux->nombreEspecie==a->getEspecie()){
				enc=true;
				eaux->numeroArbolesEspecie=eaux->numeroArbolesEspecie+a->getUnidades();
			}
			if(eaux->nombreEspecie>a->getEspecie()){
				enc=true;
				eaux = new (strEspecie);
				eaux->nombreEspecie = a->getEspecie();
				eaux->numeroArbolesEspecie = a->getUnidades();
				lista->insertar(eaux);
			}
			lista->avanzar();
		}
		if(!enc){
			eaux = new (strEspecie);
							eaux->nombreEspecie = a->getEspecie();
							eaux->numeroArbolesEspecie = a->getUnidades();
							lista->insertar(eaux);
		}
	}
}
