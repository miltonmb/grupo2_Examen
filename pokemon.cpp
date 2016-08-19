#include "pokemon.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
pokemon::pokemon(string n,double nv,string ntr,string t1,string t2,double h,double def,double atq_es,double def_es,double rpz, string lgndy){
	nombre = n;
	setNivel(nv);
	naturaleza = ntr;
	tipo1 = t1;
	tipo2 = t2;
	hp = h;
	defensa = def;
	ataque_especial = atq_es;
	defensa_especial = def_es;
	rapidez = rpz;
	legendario = lgndy;
}
string pokemon::getNombre(){
	return nombre;
}
void pokemon::setNombre(string n){
	nombre = n;
}
double pokemon::getNivel(){
	return nivel;
}
void pokemon::setNivel(double nv){
	int centinela = 0;
	while(centinela == 0){
		if (nv>0 && nv<=100){
			nivel = nv;
			centinela = 1;
		}else{
			cout << "Ingrese un nivel valido";
			centinela = 0;
		}	
	}
}
string pokemon::getNaturaleza(){
	return naturaleza;
}
void pokemon::setNaturaleza(string n){
	naturaleza = n;
}
string pokemon::getTipo1(){
	return tipo1;
}
void pokemon::setTipo1(string t1){
	tipo1 = t1;
}
string pokemon::getTipo2(){
	return tipo2;
}
void pokemon::setTipo2(string t2){
	tipo2 = t2;
}	
double pokemon::getHp(){
	return hp;
}
void pokemon::setHp(double h){
	hp = h;
}
double pokemon::getDefensa(){
	return defensa;
}
void pokemon::setDefensa(double def){
	defensa = def;
}
double pokemon::getAtaqueE(){
	return ataque_especial;
}
void pokemon::setAtaqueE(double atq_e){
	ataque_especial = atq_e;
}
double pokemon::getDefensaE(){
	return defensa_especial;
}
void pokemon::setDefensaE(double defE){
	defensa_especial = defE;
}
double pokemon::getRapidez(){
	return rapidez;
}
void pokemon::setRapidez(double rap){
	rapidez = rap;
}
void pokemon::setLegendario(string lgnd){
	legendario = lgnd;
}
string pokemon::getLegendario(){
	return legendario;
}

