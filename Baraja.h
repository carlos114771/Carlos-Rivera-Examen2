#include <iostream>
#include <string>
#include <vector>
#include "Cartas.h"

using namespace std;

#ifndef BARAJA_H
#define BARAJA_H
class Baraja{
	protected:
		vector<Cartas*> carta;
	public:
		Baraja(vector<Cartas*>);
		Baraja();
		vector<Cartas*> getCarta();
		void setCarta(Cartas*);

};
#endif