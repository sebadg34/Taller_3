#pragma once
#include "pch.h"
#include <iostream>
#include "NodoHoja.h"

using namespace std;

class NodoPokemon
{
public:


	NodoPokemon();
	NodoPokemon(int id, string nombre, string ataque, float probabilidad);
	
	
	~NodoPokemon();

	int GetId();
	string GetNombre();
	string GetAtaque();
	float GetProbabilidad();
	bool GetEstado();

	void SetId(int id);
	void SetNombre(string nombre);
	void SetAtaque(string ataque);
	void SetProbabilidad(float probabilidad);
	void SetEstado(bool captura);

	

	//hijos izquierdo y derecho del nodo
	

private:
	int id;
	string nombre;
	string ataque;
	float probabilidad;
	bool capturado;


};

