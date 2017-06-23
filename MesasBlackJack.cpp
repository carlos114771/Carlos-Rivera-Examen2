#include "MesasBlackJack.h"

MesasBlackJack::MesasBlackJack(int numero_mesa,string tipo_mesa){
	this->numero_mesa=numero_mesa;
	this->tipo_mesa=tipo_mesa;
}
MesasBlackJack::MesasBlackJack(){

}void MesasBlackJack::setNumero_mesa(int numero_mesa){
   this-> numero_mesa=numero_mesa;
}
int MesasBlackJack::getNumero_mesa(){
   return numero_mesa;
}
void MesasBlackJack::setTipo_mesa(string tipo_mesa){
   this-> tipo_mesa=tipo_mesa;
}
string MesasBlackJack::getTipo_mesa(){
   return tipo_mesa;
}


void MesasBlackJack::setRepartidor(Repartidor* repartidor){
   this-> repartidor=repartidor;
}
Repartidor* MesasBlackJack::getRepartidor(){
   return repartidor;
}
void MesasBlackJack::setJugador(Jugadores* jugador){
   this-> jugador=jugador;
}
Jugadores* MesasBlackJack::getJugador(){
   return jugador;
}
