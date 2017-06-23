#include "Persona.h"

Persona::Persona(string nombre,int edad,string id){
	this->nombre=nombre;
	this->edad=edad;
	if(id.size()>4){
		cout<<"Su id tiene que ser de cuatro digitos "<<endl;
	}
	this->id=id;
}
Persona::Persona(){

}void Persona::setNombre(string nombre){
   this-> nombre=nombre;
}
string Persona::getNombre(){
   return nombre;
}
void Persona::setEdad(int edad){
   this-> edad=edad;
}
int Persona::getEdad(){
   return edad;
}
void Persona::setId(string id){
   this-> id=id;
}
string Persona::getId(){
   return id;
}
