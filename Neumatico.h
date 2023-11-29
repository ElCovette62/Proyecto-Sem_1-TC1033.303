#ifndef Neumatico_h
#define Neumatico_h
#include <string>
#include <iostream>

class Neumatico
{
private:
	std::string tipoNeumatico;
	float temperatura;
	std::string tempS;
public:
	//Constructor Default
	Neumatico();
	//Constructor Personalizado
	Neumatico(std::string tipoN, float temp);
	void setLlanta(const std::string tipoN);
	float getTemp() const;
	std::string getTipoN() const;
	std::string getInfoNeumatico() const;
};
#endif
