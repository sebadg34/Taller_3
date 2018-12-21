#include "pch.h"
#include "GrupoClaves.h"


GrupoClaves::GrupoClaves()
{
}

GrupoClaves::GrupoClaves(int m)
{
	//arreglo de punteros
	this->Punteros = new GrupoClaves[m];

	//arreglo de pokemones
	this->Pokemones = new NodoPokemon[m - 1](); //el arreglo esta inicializado ya a nullptr con el ().

	/*
	estructura:


			
				GRUPOCLAVES
			 [0|1|2|3|4|5|6|7|8]//POKEMONES
			[0|1|2|3|4|5|6|7|8|9]//PUNTEROS
			/ 			
		GRUPOCLAVES			
 [0|1|2|3|4|5|6|7|8]//POKEMONES
[0|1|2|3|4|5|6|7|8|9]//PUNTEROS

	*/


	this->EsHoja = false;
	this->cantidad = 0;//cantidad de pokemones

}


GrupoClaves::~GrupoClaves()
{

}


