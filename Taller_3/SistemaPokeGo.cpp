#include "pch.h"
#include "SistemaPokeGo.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <cctype>
#include <algorithm>
#include <windows.h>
#include <mmsystem.h>
#include <math.h>


using namespace std;

SistemaPokeGo::SistemaPokeGo()
{
	MenuPrincipal();
}


SistemaPokeGo::~SistemaPokeGo()
{
}

void SistemaPokeGo::MenuPrincipal()
{
	system("CLS");//Limpiar consola
	string opcion; //Auxiliar para menu
	string pause;
	bool menu = true;

	while (menu) {

		cout << "*************************************************************************************" << endl;
		cout << "boom:" << endl;
		cout << "*************************************************************************************" << endl;
		cout << "[1] Buscar Pokemon" << endl;
		cout << "[2]  Pokédex" << endl;
		cout << "[3]  Mochila" << endl;
		cout << "[4]  Salir" << endl;

		getline(cin, opcion);
		try { //Validar respuesta del menu
			std::stoi(opcion);
		}
		catch (const std::exception) {
			system("CLS");//Limpiar consola
			
			cout << "Porfavor escriba una opcion valida ([1],[2],etc)" << endl;
			cout << "*************************************************************************************" << endl;

			continue;
		}
		int opcionVerificada = std::stoi(opcion);

		switch (opcionVerificada) {

		case 1:
			system("CLS");//Limpiar consola
			Buscar_Pokemon();
			break;
		case 2:
			system("CLS");//Limpiar consola
			Desplegar_Pokedex();
			break;
		case 3:
			system("CLS");//Limpiar consola
			Abrir_Mochila();
			break;

		case 4:
			
			menu = false;
			getline(cin, pause);
			break;


		}


	}


}

void SistemaPokeGo::MenuCaptura()
{
}

void SistemaPokeGo::Buscar_Pokemon()
{
}

void SistemaPokeGo::Desplegar_Pokedex()
{
}

void SistemaPokeGo::Abrir_Mochila()
{
}

void SistemaPokeGo::LecturaArchivos()
{





}

void SistemaPokeGo::CapturarPokemon()
{
}

void SistemaPokeGo::TransferirPokemon()
{
}
