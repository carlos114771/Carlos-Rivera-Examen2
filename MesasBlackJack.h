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
		int tipo_mesa;
		Repartidor* repartidor;
		Jugadores* jugador;
	public:
		MesasBlackJack(int,int);
		MesasBlackJack();
		int getNumero_mesa();
		void setNumero_mesa(int);

		int getTipo_mesa();
		void setTipo_mesa(int);


		Repartidor* getRepartidor();
		void setRepartidor(Repartidor*);

		Jugadores* getJugador();
		void setJugador(Jugadores*);

};
#endif