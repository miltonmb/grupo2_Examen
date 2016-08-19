#include "pokemon.h"
#include <iostream> 
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;
string tipos []= {"Insecto","Dragon","Hielo","Pelea", "Fuego","Volador","Planta","Fantasma","Tierra","Electrico","Normal","Veneno","Psiquicos","Roca","Agua","Dark","Acero","Hada"};
int main (){
	int op = 0; 
	std::vector<pokemon*> lista;
	while (op != 7){
		cout<<"1-agregar \n"<< "2-eliminar \n"<< "3-modificar \n"<< "4-buscar por nombre y naturaleza \n"<< "5-buscar por nivel \n" <<"6-buscar por tipo \n"<<"7-salir";
		cin>>op;
		if (op == 1){
			string nombre,tipo, tipo2, naturaleza, legendario;
			double nivel, hp, defensa, ataque_especial, defensa_especial, rapidez;
			int opcion=0;
			cout<<"Ingrese el nombre";
			cin>>nombre;
			for (int i = 0; i < 18; i++){
				cout<<i<<" "<<tipos[i]<<"\n";
			}
			cout<<"Ingrese el primer tipo";
			cin>>opcion;
			tipo = tipos[opcion];
			cout<<"Ingrese el segundo tipo";
			cin>>opcion;
			tipo2 = tipos[opcion];
			cout<<"Ingrese la naturaleza";
			cin>>naturaleza;
			cout<<"es legendario? s/n";
			cin>>legendario;
			cout<<"ingrese su nivel";
			cin>>nivel;
			cout<<"ingrese el hp";
			cin>>hp;
			cout<<"Ingrese la defensa";
			cin>>defensa;
			cout<<"Ingrese el ataque especial";
			cin>>ataque_especial;
			cout<<"Ingrese la defensa especial";
			cin>>defensa_especial;
			cout<<"Ingrese la rapidez";
			cin>>rapidez;
			pokemon* pok = new pokemon(nombre, nivel, naturaleza, tipo, tipo2, hp, defensa, ataque_especial, defensa_especial, rapidez, legendario );
			lista.push_back(pok);
		}
		else if (op == 2){
			int posicion = 0;
			cout<<"Ingrese la posicion del pokemon";
			cin>>posicion;
			lista.erase(lista.begin()+posicion);
		}
		else if (op == 3){
			string nombre;
			double nivel;
			int posicion;
			cout<<"Ingrese la posicion del pokemon";
			cin>>posicion;
			cout<<"Ingrese el nuevo nombre";
			cin>>nombre;
			cout<<"Ingrese el nuevo nivel";
			cin>>nivel;
			pokemon* pok = lista[posicion];
			pok -> setNombre(nombre);
			pok -> setNivel(nivel);

		}
		else if (op == 4){

		}
		else if (op == 5){

		}
		else if (op == 5){

		}

	}
	return 0;
}
