#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef CARTAS_H
#define CARTAS_H
class Cartas{
	protected:
		string valor;
		string simbolo;
		string color;
	public:
		Cartas(string,string,string);
		Cartas();
		string getValor();
		void setValor(string);

		string getSimbolo();
		void setSimbolo(string);

		string getColor();
		void setColor(string);

};
#endif