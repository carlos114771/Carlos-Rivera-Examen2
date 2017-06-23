#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
class Administrador:public Persona{
	private:
		string Experiencia_Laboral;
		string Rango_Administrador;
		double sueldo;
	public:
		Administrador(string,string,double,string,int,string);
		Administrador();
		string getExperiencia_Laboral();
		void setExperiencia_Laboral(string);

		string getRango_Administrador();
		void setRango_Administrador(string);

		double getSueldo();
		void setSueldo(double);

};
#endif