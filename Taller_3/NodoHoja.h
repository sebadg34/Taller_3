#pragma once
#include "pch.h"
#include <iostream>
#include "NodoPokemon.h"
#include <cctype>
using namespace std;
class NodoHoja
{
public:
	NodoHoja();
	NodoHoja(int m);
	~NodoHoja();

	void SetRaiz(bool raiz);
	bool GetRaiz();
	void Ordenar();
	int GetCantidad();
	//NodoPokemon *Hoja;//hoja que almacena pokemones
	NodoHoja *Punteros;
private:
	
	int cantidad; //Cantidad de pokemones
	bool raiz;
	
};

