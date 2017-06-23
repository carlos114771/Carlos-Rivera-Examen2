main:    main.cpp Persona.o Administrador.o Repartidor.o Baraja.o Cartas.o Jugadores.o MesasBlackJack.o 
	g++ main.cpp Persona.o Administrador.o Repartidor.o Baraja.o Cartas.o Jugadores.o MesasBlackJack.o -o main
main.o:	main.cpp Persona.h Administrador.h Repartidor.h Baraja.h Cartas.h Jugadores.h MesasBlackJack.h 
	g++ -c main.cpp
Persona:	Persona.cpp Persona.h
	g++ -c Persona.cppAdministrador:	Administrador.cpp Administrador.h
	g++ -c Administrador.cppRepartidor:	Repartidor.cpp Repartidor.h
	g++ -c Repartidor.cppBaraja:	Baraja.cpp Baraja.h
	g++ -c Baraja.cppCartas:	Cartas.cpp Cartas.h
	g++ -c Cartas.cppJugadores:	Jugadores.cpp Jugadores.h
	g++ -c Jugadores.cppMesasBlackJack:	MesasBlackJack.cpp MesasBlackJack.h
	g++ -c MesasBlackJack.cpp
clean:
	rm  *.o main 