#include "Baraja.h"

Baraja::Baraja(vector<Cartas*> carta){
	this->carta=carta;
}
Baraja::Baraja(){

}void Baraja::setCarta(Cartas* Ccarta){
   this-> carta.push_back(Ccarta);
}
vector<Cartas*> Baraja::getCarta(){
   return carta;
}
