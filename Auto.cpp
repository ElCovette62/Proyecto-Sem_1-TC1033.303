#include "Auto.h"
#include <sstream>

//Implemento el Constructor
Auto::Auto(std::string tipoA, Neumatico llanta, Combustible estat, Suelo tipoS) :Usuario(""),tipoAuto(tipoA),tipoNeumatico(llanta),status(estat),tipoSuelo(tipoS)
{
}

void Auto::setAuto(const std::string nombreA, Neumatico _llanta, Combustible cant, Suelo df)
{
    nombreAuto = nombreA;
    tipoNeumatico = _llanta;
    cantidad = cant;
    downforce = df;

}

std::string Auto::getNombreA() const {
    return nombreAuto;
}

std::string Auto::getTipoAuto() const {
    return "Tipo de Auto: " + tipoAuto;
}

std::string Auto::getInfoAuto() const {
    return "El auto es de tipo: " + tipoAuto + "\n" + "Tanque: " + status.getStatus() + "\n" + "Llantas: " + tipoNeumatico.getTipoN() + "\n" + "Suelo: " + tipoSuelo.getTipoS();
}

