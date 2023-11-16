/*
 * ConjuntoBarrios.cpp
 *
 */

#include "ConjuntoBarrios.h"

ConjuntoBarrios::ConjuntoBarrios() {
	this->ocupadas = 0;
}

ConjuntoBarrios::~ConjuntoBarrios() {
	for (int i = 0; i < this->ocupadas; ++i) {
			if (this->cjtoBarrios[i] != NULL)
				delete this->cjtoBarrios[i];
		}
		this->ocupadas = 0;
}

void ConjuntoBarrios::insertar(Barrio* b) {
	Barrio *baux;

	bool enc = false, duplicadas=false;
	int i = 0;

	if (this->ocupadas < MAX) {
		if (b != NULL) {
			while (i < this->ocupadas && !enc &&!duplicadas) {
				baux = this->cjtoBarrios[i];
				if(baux->getNombre() > b->getNombre() ) {
					enc = true;
				}

				else
					i++;
				if(baux->getCodigo()==b->getCodigo()){
					duplicadas=true;
				}
			}
			if(!duplicadas){
				for (int j = this->ocupadas; j > i; j--) {
					this->cjtoBarrios[j] = this->cjtoBarrios[j - 1];
				}
				this->ocupadas++;
				this->cjtoBarrios[i]=b;
			}
		}
	}
}

void ConjuntoBarrios::eliminar(int codigo) {
	int eliminadas = 0;
	Barrio *baux;

	for (int i = 0; i < this->ocupadas; ++i) {
		baux = this->cjtoBarrios[i];
		if (baux->getCodigo() == codigo) {
			eliminadas++;
		}
		this->cjtoBarrios[i + eliminadas] = this->cjtoBarrios[i];
	}
	if (eliminadas == 1) {
		this->ocupadas--;
	}
}

void ConjuntoBarrios::obtenerPos(int pos, Barrio*& b) {
	if (pos >= 0 && pos < this->ocupadas) {
		b = this->cjtoBarrios[pos];
	}
}

void ConjuntoBarrios::obtener(int codigo, Barrio*& b) {
	bool enc = false;
	int i = 0;
	Barrio *baux;

	while (i < this->ocupadas && !enc) {
		baux = this->cjtoBarrios[i];
		if (baux->getCodigo() == codigo) {
			enc = true;
			b = baux;
		} else {
			i++;
		}
	}
}

bool ConjuntoBarrios::existe(int codigo) {
	bool enc = false;
	int i = 0;
	Barrio *baux;

	while (i < this->ocupadas && !enc) {
		baux = this->cjtoBarrios[i];
		if (baux->getCodigo() == codigo) {
			enc = true;
		} else {
			i++;
		}
	}
	return enc;
}

int ConjuntoBarrios::cuantos() {
	return this->ocupadas;
}

bool ConjuntoBarrios::vacio() {
	return this->ocupadas == 0;
}
