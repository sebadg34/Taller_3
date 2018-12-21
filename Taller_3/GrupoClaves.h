#pragma once
#include "pch.h"
#include <iostream>
#include "NodoPokemon.h"
class GrupoClaves
{
public:
	GrupoClaves();
	GrupoClaves(int m);
	~GrupoClaves();
	int cantidad;
	bool EsHoja;
	
	

	GrupoClaves*Punteros;
	class NodoPokemon*Pokemones;
};

