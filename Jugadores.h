#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"

using namespace std;

#ifndef JUGADORES_H
#define JUGADORES_H
class Jugadores:public Persona{
	protected:
		string lugar_precedencia;
		string apodo;
		double dinero;
	public:
		Jugadores(string,string,double,string,int,string);
		Jugadores();
		string getLugar_precedencia();
		void setLugar_precedencia(string);

		string getApodo();
		void setApodo(string);

		double getDinero();
		void setDinero(double);

};
#endif