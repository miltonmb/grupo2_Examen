
#include <iostream> 
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;
string tipos []= {"Insecto","Dragon","Hielo","Pelea", "Fuego","Volador","Planta","Fantasma","Tierra","Electrico","Normal","Veneno","Psiquicos","Roca","Agua","Dark","Acero","Hada"};
int main (){
	int op = 0; 
	while (op != 7){
		cout<<"1-agregar \n"<< "2-eliminar \n"<< "3-modificar \n"<< "4-buscar por nombre y naturaleza \n"<< "5-buscar por nivel \n" <<"6-buscar por tipo \n"<<"7-salir";
		cin>>op;
		if (op == 1){
			string nombre,tipo, tipo2;
			for (int i = 0; i < 18; i++){
				cout<<i<<" "<<tipos[i]<<"\n";
			}
		}
		else if (op == 2){

		}
		else if (op == 3){

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
