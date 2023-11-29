#include "Combustible.h"
//Implemento el Constructor Default
Combustible::Combustible() : cantidad(0), status("") {}
//Implemento el Constructor
Combustible::Combustible(float cant, std::string stat) :cantidad(cant), status(stat)
{
}

void Combustible::setCombustible(float cantidadCombustible) 
{

}

void Combustible::setStatus(const std::string statusC) 
{

}

float Combustible::getCantidad() const
{
    return cantidad;
}

std::string Combustible::getStatus() const
{
    return status;
}

std::string Combustible::getInfoCombustible() const {
    
     return "Cantidad de Combustible: " + std::to_string(cantidad) + " L" + ", Estado: " + status;
}

