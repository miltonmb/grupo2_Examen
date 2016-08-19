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
	while (op != 15){
		cout<<"1-agregar \n"<< "2-eliminar \n"<< "3-modificar \n"<< "4-buscar por nombre y naturaleza \n"<< "5-buscar por nivel \n" <<"6-buscar por tipo \n"<<"7-ordenar \n";
		cout<<"8- buscar por hp \n"<<"9- buscar por ataque \n"<<"10-buscar por naturaleza \n"<<"11-buscar por defensa \n"<<"12- buscar por ataque especial"<<"13- buscar por defensa especial \n";
		cout<<"14- buscar por rapidez \n"<<"15- salir \n";
		cin>>op;
		if (op == 1){
			string nombre,tipo, tipo2, naturaleza, legendario;
			double nivel, hp, defensa, ataque_especial, defensa_especial, rapidez, ataque;
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
			cout<<"Ingrese el ataque";
			cin>>ataque;
			cout<<"Ingrese la defensa";
			cin>>defensa;
			cout<<"Ingrese el ataque especial";
			cin>>ataque_especial;
			cout<<"Ingrese la defensa especial";
			cin>>defensa_especial;
			cout<<"Ingrese la rapidez";
			cin>>rapidez;
			pokemon* pok = new pokemon(nombre, nivel, naturaleza, tipo, tipo2, hp, ataque, defensa, ataque_especial, defensa_especial, rapidez, legendario );
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
			delete pok;

		}
		else if (op == 4){
			string naturaleza, nombre, naturaleza2, nombre2;
			pokemon* pok;
			cout<<"Ingrese el nombre del pokemon: \n";
			cin>>nombre;
	
			for (int i = 0; i < lista.size(); ++i)
			{
				pok = lista[i];
				nombre2 = pok -> getNombre();
				if (nombre == nombre2 )
				{
					pok->toString();
				}
			}
		}

		else if (op == 5){
			double nivel = 0;
			double numero;
			int opcion = 0;
			pokemon* pok;
			cout<<"buscar por: \n"<<"1-igual que \n"<<"2-diferente de \n "<<"3-menor que \n"<<"4- mayor que \n"<<"5-mayor o igual \n"<<"6- menor o igual \n";
			cin>> opcion;
			if (opcion == 1)
			{
				cout<<"Ingrese el nivel: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getNivel();
					if (numero==nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 2)
			{
				cout<<"Ingrese el nivel: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getNivel();
					if (numero!=nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 3)
			{
				cout<<"Ingrese el nivel: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getNivel();
					if (numero<nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 4)
			{
				cout<<"Ingrese el nivel: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getNivel();
					if (numero>nivel)
					{
						pok->toString();	
					}
				}
			}
			if (opcion == 5)
			{
				cout<<"Ingrese el nivel: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getNivel();
					if (numero>=nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 6)
			{
				cout<<"Ingrese el nivel: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getNivel();
					if (numero<=nivel)
					{
						pok->toString();
					}
				}
			}					
		}
		else if(op == 6){
			string tipo, tipo2, tip, tip2;
			int opcion=0;
			cout<<"1- buscar por un tipo: \n"<<"2- buscar por dos tipos \n";
			cin>>opcion;
			pokemon* pok;
			if (opcion==1)
			{
				cout<<"Ingrese el tipo: \n";
				cin>>tipo;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					tip = pok -> getTipo1();
					if (tipo==tip)
					{
						pok->toString();
					}
				}
			}
			if (opcion==2)
			{
				cout<<"Ingrese el tipo uno : \n";
				cin>>tipo;
				cout<<"Ingrese el tipo dos: \n";
				cin>>tipo2;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					tip = pok -> getTipo1();
					tip2 = pok -> getTipo2();
					if (tipo== tip & tipo2 ==tip2)
					{
						pok->toString();
					}
				}
			}
		}	
		else if (op == 7){
			for (int i = 0; i < lista.size(); ++i){
				
			}
		}
		else if (op == 8)
		{
			double nivel = 0;
			double numero;
			int opcion = 0;
			pokemon* pok;
			cout<<"buscar por: \n"<<"1-igual que \n"<<"2-diferente de \n "<<"3-menor que \n"<<"4- mayor que \n"<<"5-mayor o igual \n"<<"6- menor o igual \n";
			cin>> opcion;
			if (opcion == 1)
			{
				cout<<"Ingrese el hp: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getHp();
					if (numero==nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 2)
			{
				cout<<"Ingrese el HP: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getHp();
					if (numero!=nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 3)
			{
				cout<<"Ingrese el HP: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getHp();
					if (numero<nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 4)
			{
				cout<<"Ingrese el HP: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getHp();
					if (numero>nivel)
					{
						pok->toString();	
					}
				}
			}
			if (opcion == 5)
			{
				cout<<"Ingrese el hp: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getHp();
					if (numero>=nivel)
					{
						pok->toString();
					}
				}
			}
			if (opcion == 6)
			{
				cout<<"Ingrese el hp: \n";
				cin>>numero;
				for (int i = 0; i < lista.size(); ++i)
				{
					pok = lista[i];
					nivel = pok -> getHp();
					if (numero<=nivel)
					{
						pok->toString();
					}
				}
			}
		}
		else if (op == 9)
		{
			/* code */
		}
		else if (op == 10){
			string naturaleza, nombre, naturaleza2, nombre2;;
			cout<<"Ingrese la naturaleza: \n";
			cin>>naturaleza;
			pokemon* pok;
				for (int i = 0; i < lista.size(); ++i)
			{
				pok = lista[i];
				naturaleza2 = pok -> getNaturaleza();
				if (naturaleza== naturaleza2)
				{
					pok->toString();
				}
			}
		}

	}
	return 0;
}
