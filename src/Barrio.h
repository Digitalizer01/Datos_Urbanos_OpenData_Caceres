/*
 * Barrio.h
 *
 */

#ifndef BARRIO_H_
#define BARRIO_H_
#include "listapi.h"
#include "Via.h"
#include <fstream>

class Barrio {
	string nombre;
	float area;
	float perimetro;
	int codigo;
	string distrito;
	ListaPI<Via*> *listaVia;
public:
	/*
	 * PRE:
	 * POST: inicialia los atributos a cero.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	Barrio();
	/*
	 * PRE: los parámetros deben tener datos válidos
	 * POST: los atributos quedan inicializados de manera correcta con los datos dados por parámetros
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * nombre: nombre del barrio
	 * area: area del barrio
	 * perímetro: perímetro del barrio
	 * codigo: código del barrio
	 * distrito: distrito del barrio
	 */
	Barrio(string nombre, float area, float perimetro, int codigo,
			string distrito);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	float getArea() const;
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * area: area del barrio
	 */
	void setArea(float area);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	int getCodigo() const;
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * codigo: código del barrio
	 */
	void setCodigo(int codigo);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getDistrito() const;
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * distrito: distrito del barrio
	 */
	void setDistrito(const string& distrito);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	const string& getNombre() const;
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * nombre: nombre del barrio
	 */
	void setNombre(const string& nombre);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	float getPerimetro() const;/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * perimetro: perímetro del barrio
	 */
	void setPerimetro(float perimetro);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros:
	 */
	float getLongitudTotal();
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: mete vias en orden
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * v: via
	 */
	void meterViaOrden(Via *v);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	int getNumVia();

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: escribe las vias en el barrio
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros:
	 * nombFichero: nombre del fichero
	 */
	void escribirViasBarrio(string nombFichero);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve la avenida de mayor longitud
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * v: via
	 */
	string avenidaMayorLongitud(Via *&v);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: muestra los barrios que empiecen por una subcadena dada por parámteros
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * subcadena: subcadena
	 */

	void mostrarBarrioSubcadena(string subcadena);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: devuelve el contenido de un barrio
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros:
	 */
	void mostrar();
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta una via en el conjuntoVias
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 * v: via
	 */
	void insertarViaenLista(Via *v);
	/*
	 * PRE: el árbol se ha inicializado correctamente
	 * POST: inserta el árbol en la vía.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros:
	 */

	void insertarArbolenVia(Arbol *a);
	/*
	 * PRE: la vía está correctamente iniciada.
	 * POST: devuelve true si existe una vía con ese código de vía o false si no.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros: código de la vía (codigoVia) y vía (v)
	 */
	bool existeVia(int codigoVia, Via *&v);
	/*
	 * PRE: la vía está correctamente iniciada.
	 * POST: inserta una vía por orden alfabético.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros: vía (n)
	 */
	void insertarOrden(Via *v);
	/*
	 * PRE: la vía está correctamente iniciada.
	 * POST: inserta al final de la lista.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros: vía (n)
	 */
	void insertarFinal(Via* v);
	/*
	 * PRE: la vía está correctamente iniciada.
	 * POST: obtiene la última vía de la lista.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros: vía (n)
	 */
	void obtenerUltima(Via *&v);
	/*
	 * PRE: la vía está correctamente iniciada.
	 * POST: elimina la vía que se llame igual que el nombre dado por parámetro.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros: nombre de la vía (nombre)
	 */
	void eliminarVia(string nombre);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: cuenta las vías de la lista.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */
	int contarVias();
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: cuenta las vías de un tipo concreto que se encuentren en la lista.
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros: tipo de vía (tipo).
	 */
	int contarViasTipo(string tipo);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: obtiene las vías de un tipo concreto.
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros: lista auxiliar de vías (laux) y tipo de vía (tipo).
	 */
	void obtenerViasTipo(ListaPI<Via*>* laux, string tipo);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: obtiene la longitud de las vías.
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros: lista auxiliar de vías (laux) y longirutd de vía (longitud).
	 */
	void obtenerViasLongitud(ListaPI<Via*>* laux, float longitud);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: inserta en una cola teniendo en cuenta unos parámetros.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros: genero de árbol (genero) y cola (c)
	 */
	void llenarColaPrioridad(string genero, Cola<strArbolyVia*> *&c);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: llena una lista teniendo en cuenta la especie del árbol.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros: lista (lista)
	 */

	void llenarListaEspecies(ListaPI<strEspecie*>*&lista);

	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: existe una vía que coincide con el nombre dado por parámetro.
	 * COMPLEJIDAD: O(n)
	 *
	 * Parámetros: nombre de la vía (nombVia), vía (v)
	 */
	bool existeViaNombre(string nombVia, Via *&v);
	/*
	 * PRE: el atributo contiene un dato válido
	 * POST: cuenta los árboles de los barrios.
	 * COMPLEJIDAD: O(n²)
	 *
	 * Parámetros:
	 */

	int cuantoArbolesBarrio();
	/*
	 * PRE:
	 * POST: liberia memoria.
	 * COMPLEJIDAD: O(1)
	 *
	 * Parámetros:
	 */

	~Barrio();

};

#endif /* BARRIO_H_ */
