#pragma once
#include "NodoPokemon.h"
#include "NodoHoja.h"
class ArbolPokedex
{
public:
	ArbolPokedex();
	~ArbolPokedex();
	ArbolPokedex(NodoHoja raiz);
	void Insertar();
	NodoPokemon* Buscar(int id, NodoHoja nodo);

private:

	NodoHoja*Raiz;

};

