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
	cout << "Buscando pokemon en la cercania..." << endl;
	PlaySound(TEXT("buscar.wav"), NULL, SND_SYNC);
	
	Sleep(1000);

	cout << "Buscando pokemon en la cercania..." << endl;
	PlaySound(TEXT("buscar.wav"), NULL, SND_SYNC);
	
	Sleep(1000);

	cout << "Buscando pokemon en la cercania..." << endl;
	PlaySound(TEXT("buscar.wav"), NULL, SND_SYNC);

	Sleep(1000);

	//variable que varia entre 0 y 100, si el valor es menor de 15 se encuentra un pokemon.
	int porcentajeBusqueda = rand() % 100;
	cout << porcentajeBusqueda << endl;
	if (porcentajeBusqueda <= 15) {
		cout << "POKEMON ENCONTRADO!" << endl;
		Sleep(4000);
		MenuCaptura(); //Despliega menu captura
		return;
	}
	else {
		cout << "NO FUE ENCONTRADO NINGUN POKEMON EN LAS CERCANIAS" << endl;
		PlaySound(TEXT("errorBusqueda.wav"), NULL, SND_SYNC);
		Sleep(2000);
		return;
		
	}

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
