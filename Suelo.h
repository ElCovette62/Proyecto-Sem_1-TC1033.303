#ifndef Suelo_h
#define Suelo_h
#include <string>

class Suelo {
private:
    std::string tipoSuelo;
    int downforce;
    std::string downf;

public:
    //Constructor Default
    Suelo();
    //Constructor Personalizado
    Suelo(std::string tipos,int df);
    void setSuelo(const std::string tipoS);
    int getDownforce()const;
    std::string getTipoS() const;
    std::string getInfoSuelo() const;
};
#endif

