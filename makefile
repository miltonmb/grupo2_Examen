Point:	mipuntito.o mimensito.o
		g++ mipuntito.o mimensito.o -o point
mimensito.o:	examen.cpp pokemon.h
		g++ -c examen.cpp -o mimensito.o
mipuntito.o:	pokemon.cpp pokemon.h
		g++ -c pokemon.cpp -o mipuntito.o

