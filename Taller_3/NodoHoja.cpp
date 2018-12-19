#include <iostream>
#include "pch.h"
#include <cctype>
#include "NodoHoja.h"
#include "NodoPokemon.h"

NodoHoja::NodoHoja()
{
}

NodoHoja::NodoHoja(int m)
{
	this->cantidad = 0;
	//this->Hoja = new NodoPokemon[m-1];//se crea hoja con 8 claves para los pokemones
	this->Punteros = new NodoHoja[m];
	this->raiz = false;
}


NodoHoja::~NodoHoja()
{
}

void NodoHoja::SetRaiz(bool raiz)
{
	this->raiz = raiz;
}

bool NodoHoja::GetRaiz()
{
	return this->raiz;
}

void NodoHoja::Ordenar()
{
}

int NodoHoja::GetCantidad()
{
	return this->cantidad;
}
