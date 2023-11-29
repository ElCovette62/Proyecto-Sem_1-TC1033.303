#include "Neumatico.h"
//Implemento el Constructor Default
Neumatico::Neumatico() : tipoNeumatico(""), temperatura(0.0) {}
//Implemento el Constructor
Neumatico::Neumatico(std::string tipoN, float temp)
    :
    tipoNeumatico(tipoN),
    temperatura(temp)
{

}

void Neumatico::setLlanta(const std::string tipoN)
{

}

float Neumatico::getTemp() const
{
    return temperatura;
}

std::string Neumatico::getTipoN() const
{
    return tipoNeumatico;
}

std::string Neumatico::getInfoNeumatico() const
{
    std::string tempe = std::to_string(temperatura);
	return "Tipo de Neumatico: " + tipoNeumatico + ", Temperatura: " + tempe + " Celcius";
}

