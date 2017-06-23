#include <iostream>
#include <string>
#include <vector>
#include "Repartidor.h"
#include "Jugadores.h"

using namespace std;

#ifndef MESASBLACKJACK_H
#define MESASBLACKJACK_H
class MesasBlackJack{
	protected:
		int numero_mesa;
		string tipo_mesa;
		Repartidor* repartidor;
		Jugadores* jugador;
	public:
		MesasBlackJack(int,string);
		MesasBlackJack();
		int getNumero_mesa();
		void setNumero_mesa(int);

		string getTipo_mesa();
		void setTipo_mesa(string);


		Repartidor* getRepartidor();
		void setRepartidor(Repartidor*);

		Jugadores* getJugador();
		void setJugador(Jugadores*);

};
#endif