#ifndef Combustible_h
#define Combustible_h
#include <string>

class Combustible {
private:
    float cantidad;
    std::string status;

public:
    //Constructor Default
    Combustible();
    //Constructor Personalizado
    Combustible(float cant,std::string stat);
    void setCombustible(float cantidad);
    void setStatus(const std::string statusC);
    float getCantidad() const;
    std::string getStatus() const;
    std::string getInfoCombustible() const;
};
#endif

