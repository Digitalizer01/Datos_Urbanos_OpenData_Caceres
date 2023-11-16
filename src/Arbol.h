/*
 * Arbol.h
 *
 */

#ifndef ARBOL_H_
#define ARBOL_H_
#include <iostream>
using namespace std;

class Arbol {
	string especie;
	string familia;
	string nombreComun;
	string genero;
	float diametro;
	float altura;
	float copa;
	string riego;
	int unidades;
	int codigoVia;
public:
	/*
	 * PRE:
	 * POST: inicialia los atributos a cero.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	Arbol();
	/*
	 * PRE: los parámetros deben tener datos válidos
	 * POST: los atributos quedan inicializados de manera correcta con los datos dados por parámetros
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * especie: especie del árbol
	 * familia: familia del árbol
	 * nombreComun: nombre común del árbol
	 * genero: género del árbol
	 * diametro: diámetro del árbol
	 * altura: altura del árbol
	 * copa: copa del árbol
	 * riego: riego del árbol
	 * unidades: unidades del árbol
	 * codigoVia: código de la vía a la que pertenece
	 */
	Arbol(string especie, string familia, string nombreComun, string genero,
			float diametro, float altura, float copa, string riego,
			int unidades, int codigoVia);
	/*
	 * PRE:
	 * POST: se crea un nuevo árbol por copia.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros: árbol (b)
	 */
	Arbol(const Arbol &b);
	/*
	 * PRE:
	 * POST: liberia memoria.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	~Arbol();
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	float getAltura() const;
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * altura: altura del árbol
	 */
	void setAltura(float altura);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	int getCodigoVia() const;
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * codigoVia: código de la vía a la que pertenece
	 */
	void setCodigoVia(int codigoVia);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	float getCopa() const;
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * copa: copa del árbol
	 */
	void setCopa(float copa);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	float getDiametro() const;
	/*
		 * PRE: el atributo contiene un dato válido
		 * POST: inserta el contenido
		 * COMPLEJIDAD: O(1)
		 *
		 * Parámetros:
		 * diametro: diametro del árbol
		 */
	void setDiametro(float diametro);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getEspecie() const;
	/*
		 * PRE: el atributo contiene un dato válido
		 * POST: inserta el contenido
		 * COMPLEJIDAD: O(1)
		 *
		 * Parámetros:
		 * especie: especie del árbol
		 */
	void setEspecie(const string& especie);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getFamilia() const;
	/*
		 * PRE: el atributo contiene un dato válido
		 * POST: inserta el contenido
		 * COMPLEJIDAD: O(1)
		 *
		 * Parámetros:
		 * familia: familia del árbol
		 */
	void setFamilia(const string& familia);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getGenero() const;
	/*
		 * PRE: el atributo contiene un dato válido
		 * POST: inserta el contenido
		 * COMPLEJIDAD: O(1)
		 *
		 * Parámetros:
		 * genero: género del árbol.
		 */
	void setGenero(const string& genero);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getNombreComun() const;
	/*
		 * PRE: el atributo contiene un dato válido
		 * POST: inserta el contenido
		 * COMPLEJIDAD: O(1)
		 *
		 * Parámetros:
		 * nombreComun: nombre comun del árbol
		 */
	void setNombreComun(const string& nombreComun);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getRiego() const;
	/*
		 * PRE: el atributo contiene un dato válido
		 * POST: inserta el contenido
		 * COMPLEJIDAD: O(1)
		 *
		 * Parámetros:
		 * riego: riego del árbol
		 */
	void setRiego(const string& riego);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	int getUnidades() const;
	/*
		 * PRE: el atributo contiene un dato válido
		 * POST: inserta el contenido
		 * COMPLEJIDAD: O(1)
		 *
		 * Parámetros:
		 * unidades: unidades del árbol
		 */
	void setUnidades(int unidades);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: compara si dos árboles son iguales o no.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros: árbol (a)
	 */

	bool operator ==(Arbol *a);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: muestra los datos del árbol
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */

	void mostrar();
};

#endif /* ARBOL_H_ */
