#include <iostream>
#include <string>
#include "Persona.h"
#include "Administrador.h"
#include "Repartidor.h"
#include "Baraja.h"
#include "Cartas.h"
#include "Jugadores.h"
#include "MesasBlackJack.h"
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int menuPersona();
int menuPrincipal();
void listaJugador(vector<Jugadores*>);
void listaRepartidor(vector<Repartidor*>);
int menuAdministrador();
int main(){
	vector<Persona*> listapersona;
	vector<Cartas*> listacartas;
	vector<Administrador*> listaAdministrador;
	vector<Jugadores*> listajugadores;
	vector<Repartidor*> listarepartidor;
	vector<MesasBlackJack*> listamesas;
    bool salirTodo =false;
    while(!salirTodo){
		switch(menuPrincipal()){
     		case 1:{
     			bool salirPersona =false;
     			while(!salirPersona){
     				switch(menuPersona()){
     					case 1:{
     						string nombre;
     						int edad;
     						string id;
     						string experiencia;
     						string rango;
     						double sueldo;
     						cout<<"Ingrese el Nombre: "<<endl;
     						cin>>nombre;
     						cout<<"Ingrese la edad: "<<endl;
     						cin>>edad;
     						cout<<"Ingrese el Id: "<<endl;
     						cin>>id;
     						cout<< "Ingrese su experiencia laboral: "<<endl;
     						cin>>experiencia;
     						cout<< "Ingrese su rango laboral: "<<endl;
     						cin>>rango;
     						cout<<"Sueldo a ganar: "<<endl;
     						cin>>sueldo;
     						listaAdministrador.push_back(new Administrador(experiencia,rango,sueldo,nombre,edad,id));
     						cout<<"El Administrador fue agregado exitosamente!! "<<endl;
     						cout<<endl;
     						break;
     					}
     					case 2:{
     						int contador=0;
     						string nombre;
     						int edad;
     						string id;
     						string dificultad;
     						double dinero_casino;
     						cout<<"Ingrese su nombre: "<<endl;
     						cin>>nombre;
     						cout<<"Ingrese su edad: "<<endl;
     						cin>>edad;
     						cout<<"Ingrese su id: "<<endl;
     						cin>>id;
     						cout<<"Tipo de Dificultad "<<endl
     							<<" Facil "<<endl
     							<<" Intermedio "<<endl
     							<<" Difil "<<endl;
     						cout<<endl;
     						cout<<"Ingrese la dificultad: "<<endl;
     						cin>>dificultad;
     						cout<<"Dinero del Casino: "<<endl;
     						cin>>dinero_casino;
     						for (int i = 0; i < 4; ++i){
     							for (int j = 0; j < 12; ++j){
     								if(i==1){
     									listacartas.push_back(new Cartas(j,"♠","Negro"));
     								}
     								if(i==2){
     									listacartas.push_back(new Cartas(j,"♥","Rojo"));
     								}
     								if(i==3){
     									listacartas.push_back(new Cartas(j,"♦","Rojo"));
     								}else{
     									listacartas.push_back(new Cartas(j,"♣","Rojo"));
     								}
     							}
     						Baraja* baraja = new Baraja(listacartas); 
     						}

     						listarepartidor.push_back(new Repartidor(dificultad,dinero_casino,listacartas,nombre,edad,id));
     						cout<<"El Repartidor fue agregado exitosamente!!! "<<endl;
     						cout<<endl;
     						break;
     					}
     					case 3:{
     						string nombre;
     						int edad;
     						string id;
     						string lugar;
     						string apodo;
     						double dinero;
     						cout<<"Ingrese su nombre: "<<endl;
     						cin>>nombre;
     						cout<<"Ingrese la edad: "<<endl;
     						cin>>edad;
     						cout<<"Ingrese su id: "<<endl;
     						cin>>id;
     						cout<<"Ingrese su lugar de procedencia: "<<endl;
     						cin>>lugar;
     						cout<<"Ingrese su apodo: "<<endl;
     						cin>>apodo;
     						cout<<"Ingrese el dinero que lleva: "<<endl;
     						cin>>dinero;
     						listajugadores.push_back(new Jugadores(lugar,apodo,dinero,nombre,edad,id));
     						cout<<"El Jugador fue agregado exitosamente!!! "<<endl;
     						cout<<endl;
     						break;
     					}
     					case 4:{
     						salirPersona=true;
     						break;
     					}
     				}
     			}
     			break;
     		}
     		case 2:{
     			string nombre;
     			string id;
     			cout<<"Ingrese su Nombre: ";
     			cin>>nombre;
     			cout<<"Ingrese su id: ";
     			cin>>id;
     			for (int i = 0; i < listaAdministrador.size(); ++i){
     				if(listaAdministrador.at(i)->getNombre()== nombre && listaAdministrador.at(i)->getId()==id){
     					bool salirAdmin=false;
     					while(!salirAdmin){
     						switch(menuAdministrador()){
     							case 1:{
     								int numero_mesa;
     								string tipo_mesa;
     								cout<<"Ingrese el numero de mesa "<<endl;
     								cin>>numero_mesa;
     								cout<<"Ingres el tipo de mesa "<<endl;
     								cin>>tipo_mesa;
     								listamesas.push_back(new MesasBlackJack(numero_mesa,tipo_mesa));
     								cout<<"La Mesa fue agregada exitosamente!!!";
     								cout<<"Asigne  un jugador a la mesa "<<endl;

     								break;
     							}
     							case 2:{
     								int numero;
     								int numero_mesa;
     								string tipo_mesa;
     								for (int i = 0; i < listamesas.size(); ++i){
     									cout<<i<<")"<<listamesas.at(i)->getNumero_mesa();
     									cout<<i<<")"<<listamesas.at(i)->getTipo_mesa();
     									cout<<"Ingrese la posicion que desea modificar "<<endl;
     									cin>>numero;
     									cout<<"Ingrese el numero de mesa "<<endl;
     									cin>>numero_mesa;
     									cout<<"Ingrese el tipo de mesa "<<endl;
     									cin>>tipo_mesa;
     									for (int j = 0; j < listamesas.size(); ++j){
     										listamesas.at(j)->setNumero_mesa(numero_mesa);
     										listamesas.at(j)->setTipo_mesa(tipo_mesa);
     									}
										cout<<"La Mesa fue modificada "<<endl;     									
     								}
     								break;
     							}
     							case 3:{
     								int opcion;
            						cout<<"Ingrese la posicion a eliminar"<<endl;
            						cin>>opcion;
            						listamesas.erase(listamesas.begin()+opcion);
            						cout<<"La Mesa fue eliminada "<<endl;
     								break;
     							}
     							case 4:{
     								salirAdmin=true;
     								break;
     							}
     						}
     					}
     				}
     			}
     			for (int i = 0; i < listajugadores.size(); ++i){
     				if(listajugadores.at(i)->getNombre()==nombre && listajugadores.at(i)->getId()==id){
     					cout<<"Bienvenido"<<endl;
     				}
     			}	
     			break;
     		}
     		case 3:{
     			break;
     		}
     		case 4:{
     			salirTodo=true;
     			break;
     		}
     	}
     }
     return 0;
}

int menuPrincipal(){
int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU-----" << endl
			<< "1.- Agregar Persona" << endl
			<< "2.- Log in "<<endl
			<< "3.- Jugar "<<endl
			<< "4.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 4)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuPersona(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU-----" << endl
			<< "1.- Agregar Administrador" << endl
			<< "2.- Agregar Repartidor "<<endl
			<< "3.- Agregar Jugador "<<endl
			<< "4.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 4)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}

int menuAdministrador(){
	int opcion;
	bool valido = false;
	do {
		cout<< "-----MENU-----" << endl
			<< "1.- Agregar Mesa" << endl
			<< "2.- Modificar Mesa "<<endl
			<< "3.- Eliminar Mesa "<<endl
			<< "4.- Salir" << endl;
		
		cout<< "Ingrese una opcion: ";
		cin>>opcion;
		if (opcion > 0 && opcion <= 4)
			valido = true;
		else {
			cout << "Opcion no valida, intente de nuevo..." << endl;
		}

	} while (!valido);
	return opcion;
}



void listaJugador(vector<Jugadores*> listajugadores){
    cout<<"Lista de Jugadores"<<endl;
    for(int i=0;i<listajugadores.size();i++){
        cout<<"Nombre: "<<listajugadores.at(i)->getNombre()<<endl;
        cout<<"Edad: "<<listajugadores.at(i)->getEdad()<<endl;
        cout<<"Id: "<<listajugadores.at(i)->getId()<<endl;
        cout<<"Apodo: "<<listajugadores.at(i)->getApodo()<<endl;
    }

}

void listaRepartidor(vector<Repartidor*> listarepartidor){
    cout<<"Lista de Repartidores"<<endl;
    for(int i=0;i<listarepartidor.size();i++){
        cout<<"Nombre: "<<listarepartidor.at(i)->getNombre()<<endl;
        cout<<"Edad: "<<listarepartidor.at(i)->getEdad()<<endl;
        cout<<"Id: "<<listarepartidor.at(i)->getId()<<endl;
        cout<<"Dificultad: "<<listarepartidor.at(i)->getDificultad()<<endl;
    }

}
