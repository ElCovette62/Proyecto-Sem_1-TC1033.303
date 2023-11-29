#include "Suelo.h"
//Implemento el Constructor Default
Suelo::Suelo() : tipoSuelo(""), downforce(0) {}
//Implemento el Constructor
Suelo::Suelo(std::string tipoS, int df) :tipoSuelo(tipoS), downforce(df)
{
}

void Suelo::setSuelo(const std::string tipoS) 
{
    
}

int Suelo::getDownforce() const
{
    return downforce;
}

std::string Suelo::getTipoS() const
{
    return tipoSuelo;
}

std::string Suelo::getInfoSuelo() const {
    std::string downf = std::to_string(downforce);
    return "Tipo de Suelo: " + tipoSuelo + ", Downforce: " + downf;
}

