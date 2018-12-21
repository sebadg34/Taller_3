#include "pch.h"
#include "NodoPokemon.h"


NodoPokemon::NodoPokemon()
{
}
NodoPokemon::NodoPokemon(int id, string nombre, string ataque, float probabilidad) 
{
	this->id = id;
	this->nombre = nombre;
	this->ataque = ataque;
	this->probabilidad = probabilidad;
	this->capturado = false;
	this->Padre = nullptr;

}

NodoPokemon::~NodoPokemon()
{

}

int NodoPokemon::GetId()
{
	return this->id;
}

string NodoPokemon::GetNombre()
{
	return this->nombre;
}

string NodoPokemon::GetAtaque()
{
	return this->ataque;
}

float NodoPokemon::GetProbabilidad()
{
	return this->probabilidad;
}

bool NodoPokemon::GetEstado()
{
	return this->capturado;
}

void NodoPokemon::SetId(int id)
{
	this->id = id;
}

void NodoPokemon::SetNombre(string nombre)
{
	this->nombre = nombre;
}

void NodoPokemon::SetAtaque(string ataque)
{
	this->ataque = ataque;
}

void NodoPokemon::SetProbabilidad(float probabilidad)
{
	this->probabilidad = probabilidad;
}

void NodoPokemon::SetEstado(bool captura)
{
	this->capturado = captura;
}
