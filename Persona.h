#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef PERSONA_H
#define PERSONA_H
class Persona{
	protected:
		string nombre;
		int edad;
		string id;
	public:
		Persona(string,int,string);
		Persona();
		string getNombre();
		void setNombre(string);

		int getEdad();
		void setEdad(int);

		string getId();
		void setId(string);

};
#endif