#include <iostream>
#include <string>
#include "Persona.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Baraja.h"
#include "Cartas.h"
#include "Jugadores.h"
#include "MesasBlackJack.h"

using namespace std;
int menu();
int main(){
     
     
     return 0;
}

int menu(){
int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU-----" << endl
			<< "1.- Sumar con Banco" << endl
			<< "2.- Sumar con un Entero "<<endl
			<< "3.- Sumar con un Decimal "<<endl
			<< "4.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 4)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}