/*

 * pila.h

 *

 *  Definición de una Pila genérica

 */



#ifndef PILA_H_

#define PILA_H_



#include <iostream>

/**

* Clase genérica Pila

* contiene Nodos de tipo genérico también y un puntero (cima) a último nodo introducido

*/

template <class T> class Pila {

public:

	/**

	* Clase genérica Nodo

	* representa los Nodos que se almacenan en la Pila

	* cada Nodo contiene un dato de tipo genérico y un puntero al siguiente nodo

	*/

	template <class T1> class Nodo {

	public:

		/** Dato almacenado en cada nodo */

	    T1 dato;

		/** Enlace al siguiente elemento */

	    Nodo<T1>* siguiente;



        Nodo (T1 dato) {

            this->dato = dato;

            this->siguiente = NULL;

        }

	};

private:

	/** Puntero a la cima de la pila*/

	Nodo<T>* cima;



public:

	/*

	 * Constructor por defecto

	 * Pre ={}

	 * Post= {Crea/inicializa la instancia de la clase}

	 * \param ""  No recibe parametros

	 * \return Retorna Objeto Pila

	 */

	Pila ();



	/*

	 * Constructor por defecto

	 * Pre ={}

	 * Post= {Crea/inicializa la instancia de la clase}

	 * \param dato dato que ocupa la cima de la pila

	 * \return Retorna Objeto Pila

	 */

	Pila(T dato);



	/*

	 * Método que comprueba si la pila esta vacia

	 * Pre= {La instancia debe estar creada }

	 * \param ""  No recibe parametros

 	 * \return Devuelve true si la pila está vacía o false en caso contrario

 	 * Complejidad: O(1)

 	 */

	bool vacia () const;



	/*

	 * Método que inserta un elemento en la cima de la pila

	 * Pre= {La instancia debe estar creada }

	 * \param dato es el elemento que se va a insertar

 	 * \return  No retorna ningun valor

 	 * Complejidad: O(1)

 	 */

	void apilar (const T &dato);



	/*

	 * Método que devuelve el elemento en la cima de la pila

	 * Pre= {La instancia debe estar creada }

	 * \param dato es el elemento de la cima de la pila

 	 * \return  No retorna ningun valor

 	 * Complejidad: O(1)

 	 */

	void getDatoCima (T &dato);



	/*

	 * Método que devuelve el elemento en la cima de la pila

	 * Pre= {La instancia debe estar creada }

	 * \param ""  No recibe parametros

 	 * \return dato es el elemento de la cima de la pila

 	 * Complejidad: O(1)

 	 */

	T getDatoCima ();





	/*

	 * Método que elimina el elemento en la cima de la pila

	 * Pre= {La instancia debe estar creada }

	 * Post = {El número de elementos en la pila se reduce en 1}

	 * \param ""  No recibe parametros

 	 * \return No retorna ningun valor

 	 * Complejidad: O(1)

 	 */

	void desapilar();



	/**

	* Metodo destructor de la clase Pila

	* \param ""  No recibe parametros

	* \return No retorna ningun valor

	* Complejidad: O(1)

	*/

	~Pila ();

};



template <class T> Pila<T>::Pila () {

	cima = NULL;

}



template <class T> Pila<T>::Pila (T dato) {

	Nodo<T> *nodo = new Nodo<T>(dato);

	nodo->siguiente = cima;

	cima = nodo;

}



template <class T> bool Pila<T>::vacia () const {

	return (cima == NULL);

}



template <class T> void Pila<T>::apilar (const T &dato) {

	Nodo<T> *nodo = new Nodo<T>(dato);

	nodo->siguiente = cima;

	cima = nodo;

}



template <class T> void Pila<T>::getDatoCima (T &dato){

	dato = cima->dato;

}



template <class T> T Pila<T>::getDatoCima (){

	return cima->dato;

}



template <class T> void  Pila<T>::desapilar(){

	Nodo<T> *nodoaux = cima;

	if (! vacia()){

		cima = cima->siguiente;

		delete nodoaux;

	}

}



template <class T>  Pila<T>::~Pila (){

	Nodo<T> *nodoaux;

	if (! vacia()){

		nodoaux = cima;

		cima = cima->siguiente;

		delete nodoaux;

	}

}

#endif /* PILA_H_ */

