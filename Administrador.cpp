#include "Administrador.h"

Administrador::Administrador(string Experiencia_Laboral,string Rango_Administrador,double sueldo,string anombre,int aedad,string aid):Persona(anombre,aedad,aid){
	this->Experiencia_Laboral=Experiencia_Laboral;
	this->Rango_Administrador=Rango_Administrador;
	this->sueldo=sueldo;
}
Administrador::Administrador(){

}void Administrador::setExperiencia_Laboral(string Experiencia_Laboral){
   this-> Experiencia_Laboral=Experiencia_Laboral;
}
string Administrador::getExperiencia_Laboral(){
   return Experiencia_Laboral;
}
void Administrador::setRango_Administrador(string Rango_Administrador){
   this-> Rango_Administrador=Rango_Administrador;
}
string Administrador::getRango_Administrador(){
   return Rango_Administrador;
}
void Administrador::setSueldo(double sueldo){
   this-> sueldo=sueldo;
}
double Administrador::getSueldo(){
   return sueldo;
}
