#pragma once
#include "NodoPokemon.h"
#include "GrupoClaves.h"
class ArbolPokedex
{
public:
	ArbolPokedex();
	~ArbolPokedex();
	ArbolPokedex(GrupoClaves raiz);
	void Insertar();
	NodoPokemon* Buscar(int id, GrupoClaves nodo);
	void Dividir(NodoPokemon NodoAgregar, GrupoClaves grupo_a_dividir);

private:

	GrupoClaves*Raiz;

};

