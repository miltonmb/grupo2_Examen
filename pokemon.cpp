#include "pokemon.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
pokemon::pokemon(string n,double nv,string ntr,string t1,string t2,double h,double atc,double def,double atq_es,double def_es,double rpz, string lgndy){
	nombre = n;
	setNivel(nv);
	naturaleza = ntr;
	tipo1 = t1;
	tipo2 = t2;
	hp = h;
	ataque = atc;
	defensa = def;
	ataque_especial = atq_es;
	defensa_especial = def_es;
	rapidez = rpz;
	legendario = lgndy;
}
pokemon::~pokemon(){
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
double pokemon::getAtaque(){
	return ataque;
}
void pokemon::setAtaque(double atc){
	ataque = atc;
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
void pokemon::toString(){
	cout <<"El Nombre es: "<<nombre<<endl;
	cout <<"El nivel es: "<<nivel<<endl;
	cout <<"La naturaleza es: "<<naturaleza<<endl;
	cout <<"El tipo uno es: "<<tipo1<<endl;
	cout <<"El tipo dos es:"<<tipo2<<endl;
	cout <<"El HP es: "<<hp<<endl;
	cout <<"La defensa es: "<<defensa<<endl;
	cout <<"El ataque especial es: "<<ataque_especial<<endl;
	cout <<"La defensa especial es: "<<defensa_especial<<endl;
	cout <<"La rapidez es: "<<rapidez<<endl;
	cout <<"Es legendario: "<<legendario<<endl;
}

