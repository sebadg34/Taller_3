#include "pch.h"
#include "ArbolPokedex.h"


ArbolPokedex::ArbolPokedex(NodoHoja raiz)
{
	this->Raiz = &raiz;
}


ArbolPokedex::~ArbolPokedex()
{
}

void ArbolPokedex::Insertar()
{



}

NodoPokemon* ArbolPokedex::Buscar(int id, NodoHoja nodo)
{
	//recorre la hoja
	for (int i = 0; i < nodo.GetCantidad(); i++) {
	
	}
	
	return nullptr;
}
