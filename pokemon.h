
#include <string>
using namespace std;
class pokemon{
	private:
	string nombre;
	double nivel;
	string naturaleza;
	string tipo1;
	string tipo2;
	double hp;
	double ataque;
	double defensa;
	double ataque_especial;
	double defensa_especial;
	double rapidez;
	string legendario;

	public:
	pokemon(string,double,string,string,string,double,double,double,double,double,double,string);
	~pokemon();
	string getNombre(void);
	void setNombre(string);
	double getNivel(void);
	void setNivel(double);
	string getNaturaleza(void);
	void setNaturaleza(string);
	string getTipo1(void);
	void setTipo1(string);
	string getTipo2(void);
	void setTipo2(string);	
	double getHp(void);
	void setHp(double);
	double getAtaque(void);
	void setAtaque(double);
	double getDefensa(void);
	void setDefensa(double);
	double getAtaqueE(void);
	void setAtaqueE(double);
	double getDefensaE(void);
	void setDefensaE(double);
	double getRapidez(void);
	void setRapidez(double);
	void setLegendario(string);
	string getLegendario(void);
	void toString(void);
};

