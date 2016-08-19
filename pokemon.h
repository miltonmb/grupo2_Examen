#ifndef
#define
#include <string>
using namespace std;
class pokemon{
	public:
	string nombre;
	double nivel;
	string naturaleza;
	string tipo1;
	string tipo2;
	double hp;
	double defensa;
	double ataque_especial;
	double defensa_especial;
	double rapidez;
	string legendario;

	private:
	pokemon(string,double,string,string,string,double,double,double,double,double);
	string getNombre(void);
	void setNombre(string);
	double getNivel(void);
	void setNivel(double);	
};
#endif
