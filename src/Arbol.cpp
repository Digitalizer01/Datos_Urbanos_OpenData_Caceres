/*
 * Arbol.cpp
 *
 */

#include "Arbol.h"

Arbol::Arbol() {
	this->especie = "";
	this->familia = "";
	this->nombreComun = "";
	this->genero = "";
	this->diametro = 0;
	this->altura = 0;
	this->copa = 0;
	this->riego = "";
	this->unidades = 0;
	this->codigoVia = 0;
}

Arbol::Arbol(string especie, string familia, string nombreComun, string genero,
		float diametro, float altura, float copa, string riego, int unidades,
		int codigoVia) {
	this->especie = especie;
	this->familia = familia;
	this->nombreComun = nombreComun;
	this->genero = genero;
	this->diametro = diametro;
	this->altura = altura;
	this->copa = copa;
	this->riego = riego;
	this->unidades = unidades;
	this->codigoVia = codigoVia;
}

Arbol::Arbol(const Arbol& b) {
	this->especie = b.especie;
	this->familia = b.familia;
	this->nombreComun = b.nombreComun;
	this->genero = b.genero;
	this->diametro = b.diametro;
	this->altura = b.altura;
	this->copa = b.copa;
	this->riego = b.riego;
	this->unidades = b.unidades;
	this->codigoVia = b.codigoVia;
}

float Arbol::getAltura() const {
	return altura;
}

void Arbol::setAltura(float altura) {
	this->altura = altura;
}

int Arbol::getCodigoVia() const {
	return codigoVia;
}

void Arbol::setCodigoVia(int codigoVia) {
	this->codigoVia = codigoVia;
}

float Arbol::getCopa() const {
	return copa;
}

void Arbol::setCopa(float copa) {
	this->copa = copa;
}

float Arbol::getDiametro() const {
	return diametro;
}

void Arbol::setDiametro(float diametro) {
	this->diametro = diametro;
}

const string& Arbol::getEspecie() const {
	return especie;
}

void Arbol::setEspecie(const string& especie) {
	this->especie = especie;
}

const string& Arbol::getFamilia() const {
	return familia;
}

void Arbol::setFamilia(const string& familia) {
	this->familia = familia;
}

const string& Arbol::getGenero() const {
	return genero;
}

void Arbol::setGenero(const string& genero) {
	this->genero = genero;
}

const string& Arbol::getNombreComun() const {
	return nombreComun;
}

void Arbol::setNombreComun(const string& nombreComun) {
	this->nombreComun = nombreComun;
}

const string& Arbol::getRiego() const {
	return riego;
}

void Arbol::setRiego(const string& riego) {
	this->riego = riego;
}

int Arbol::getUnidades() const {
	return unidades;
}

void Arbol::setUnidades(int unidades) {
	this->unidades = unidades;
}

Arbol::~Arbol() {
	// TODO Auto-generated destructor stub
}

bool Arbol::operator ==(Arbol* a) {
	if (a->especie == this->especie && a->familia == this->familia
			&& a->nombreComun == this->nombreComun && a->genero == this->genero
			&& a->diametro == this->diametro && a->altura == this->altura
			&& a->copa == this->copa && a->riego == this->riego
			&& a->unidades == this->unidades
			&& a->codigoVia == this->codigoVia) {
		return true;
	} else {
		return false;
	}
}

void Arbol::mostrar() {
	cout << endl << "Especie: " << this->especie << endl;
	cout << "Familia: " << this->familia << endl;
	cout << "Nombre común: " << this->nombreComun << endl;
	cout << "Género: " << this->genero << endl;
	cout << "Diámetro: " << this->diametro << endl;
	cout << "Altura: " << this->altura << endl;
	cout << "Copa: " << this->copa << endl;
	cout << "Riego: " << this->riego << endl;
	cout << "Unidades: " << this->unidades << endl;
	cout << "Código de la vía: " << this->codigoVia << endl;
}
