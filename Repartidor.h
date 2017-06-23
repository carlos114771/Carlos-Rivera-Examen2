#include <iostream>
#include <string>
#include <vector>
#include "Baraja.h"
#include "Persona.h"

using namespace std;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H
class Repartidor:public Persona{
	private:
		string dificultad;
		double dinero_casino;
		Baraja* baraja;
	public:
		Repartidor(string,double,string,int,string);
		Repartidor();
		string getDificultad();
		void setDificultad(string);

		double getDinero_casino();
		void setDinero_casino(double);

		Baraja* getBaraja();
		void setBaraja(Baraja*);

};
#endif