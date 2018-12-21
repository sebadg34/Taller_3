#include "pch.h"
#include "ArbolPokedex.h"


ArbolPokedex::ArbolPokedex(GrupoClaves raiz)
{
	this->Raiz = &raiz;
}


ArbolPokedex::~ArbolPokedex()
{
}

void ArbolPokedex::Insertar()
{



}

NodoPokemon* ArbolPokedex::Buscar(int id, GrupoClaves nodo)
{
	//recorre la hoja
	for (int i = 0; i < nodo.cantidad; i++) {
	
	}
	
	return nullptr;
}

void ArbolPokedex::Dividir(NodoPokemon NodoAgregar, GrupoClaves grupo_a_dividir)
{

	//[0|1|2|3|4|5|6|7]
	// [ 0 | 1 | 2 | 3 | SUBE | 4 | 5 | 6 | 7 ]

	//se checkea si el nodo a agregar esta entre 3 o 4.(en este caso, el nodo a agregar es el que sube).
	if (NodoAgregar.GetId() > grupo_a_dividir.Pokemones[3].GetId() && NodoAgregar.GetId() < grupo_a_dividir.Pokemones[4].GetId()) {

	}
	//se checkea si el nodo a agregar esta antes del 3 (en este caso, el nodo [3] sube).
	else if (NodoAgregar.GetId() < grupo_a_dividir.Pokemones[3].GetId()) {


	}
	//se checkea si el nodo a agregar esta despues del 4 (en este caso, el nodo [4] sube).
	else if (NodoAgregar.GetId() > grupo_a_dividir.Pokemones[4].GetId()) {

	}
}


