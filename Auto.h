#ifndef Auto_h
#define Auto_h
#include <string>
#include "Neumatico.h"
#include "Combustible.h"
#include "Suelo.h"
#include "Usuario.h"

            //Utilizo la herencia para traer al atributo usuario como propietario de los objetos que se generen con la clase Auto

class Auto: public Usuario
{
private:
    std::string nombreAuto;
    std::string tipoAuto;
    //Utilizo Agregacion
    Neumatico tipoNeumatico;
    Neumatico temperatura;
    Combustible cantidad;
    Combustible status;
    Suelo tipoSuelo;
    Suelo downforce;
public:
    //Constructor de Auto
    Auto(std::string tipoA,Neumatico llanta,Combustible estat,Suelo tipoS);
    void setAuto(const std::string nombreA, Neumatico _llanta, Combustible cant, Suelo df);
    std::string getNombreA() const;
    std::string getTipoAuto() const;
    std::string getInfoAuto() const;
};
#endif
