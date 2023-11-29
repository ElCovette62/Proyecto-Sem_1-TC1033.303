#include <iostream>
#include "Neumatico.h"
#include "Suelo.h"
#include "Combustible.h"
#include "Auto.h"

int main()
{
    //Solicito el nombre con el que luego se creara el objeto de la clase usuario
    std::string nombre;

    std::cout << "Nombre: ";
    std::getline(std::cin, nombre);

    Usuario U1(nombre);
    //Instancio las clases de las clases Neumatico, Suelo, Combustible y Auto
    Neumatico N1("Hard", 22.5);
    Neumatico N2("Medium", 35.5);
    Neumatico N3("Soft", 39.00);
    Neumatico N4("Wet", 20.00);

    Suelo S1("Avanzado", 3);
    Suelo S2("Balanceado", 2);
    Suelo S3("Basico", 1);

    Combustible C1(60, "LLeno");
    Combustible C2(45, "3/4");
    Combustible C3(30, "Medio");
    Combustible C4(15, "1/4");

    Auto A1("DryCF1", N1, C2, S1);
    Auto A2("TemperedCF1", N2, C3, S2);
    Auto A3("ColdCF1", N3, C2, S1);
    Auto A4("RainCF1", N4, C1, S1);
    Auto A5("QuallyCF1", N3, C4, S1);
    Auto A6("MaxSpeedCF1", N3, C3, S3);

    //Comienzo la interaccion con el usuario fuera de pedir solo su nombre, utilizando un getter, que además proviene de herencia

    std::cout << "\n";
    std::cout << "Que tal " + U1.getUser() + "!\n" + "\n" + "Seleccione una opcion del menu..." << std::endl;

    //Genero el menu ciclico con diferentes opciones

    int opcion;
    while (true) {
        std::cout << "\n";
        std::cout << "Menu:\n";
        std::cout << "1. Recomendacion Auto\n";
        std::cout << "2. Informacion de los Autos\n";
        std::cout << "3. Configurar Auto\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese su eleccion: ";
        std::cin >> opcion;
        //Primera opcion del menu es la recomendacion del auto, para el cual se usa un if y segun la seleccion se arroja uno de los objetos creados
        if (opcion == 1) {
            std::cout << "\n";
            std::cout << "En base a cual de estas condiciones requiere la recomendacion?\n";
            std::cout << "1. Calor\n";
            std::cout << "2. Tempaldo\n";
            std::cout << "3. Frio\n";
            std::cout << "4. Lluvia\n";
            std::cout << "5. Qually\n";
            std::cout << "6. Maxima Velocidad\n";
            std::cout << "Ingrese su eleccion: ";
            std::cin >> opcion;
            std::cout << "\n";
            if (opcion == 1) {
                std::cout << A1.getInfoAuto() << std::endl;
            }
            else if (opcion == 2) {
                std::cout << A2.getInfoAuto() << std::endl;
            }
            else if (opcion == 3) {
                std::cout << A3.getInfoAuto() << std::endl;
            }
            else if (opcion == 4) {
                std::cout << A4.getInfoAuto() << std::endl;
            }
            else if (opcion == 5) {
                std::cout << A5.getInfoAuto() << std::endl;
            }
            else if (opcion == 6) {
                std::cout << A6.getInfoAuto() << std::endl;
            }
            else {
                std::cout << "Opcion invalida, solo se aceptan numeros presentes en el menu." << std::endl;
            }
        }

        //Genero un apartado para que el usuario pueda consultar informacion general de todos los vehiculos que se arrojan

        else if (opcion == 2) {
            std::cout << "\n";
            std::cout << "Seleccione el Auto del cual desea ver la informacion?\n";
            std::cout << "1. DryCF1\n";
            std::cout << "2. TemperedCF1\n";
            std::cout << "3. ColdCF1\n";
            std::cout << "4. RainCF1\n";
            std::cout << "5. QuallyCF1\n";
            std::cout << "6. MaxSpeedCF1\n";
            std::cout << "Ingrese su eleccion: ";
            std::cin >> opcion;
            std::cout << "\n";
            if (opcion == 1) {
                std::cout << A1.getTipoAuto() << std::endl;
                std::cout << "\n";
                std::cout << N1.getInfoNeumatico() << std::endl;
                std::cout << "\n";
                std::cout << C2.getInfoCombustible() << std::endl;
                std::cout << "\n";
                std::cout << S1.getInfoSuelo() << std::endl;
                std::cout << "\n";
            }
            else if (opcion == 2) {
                std::cout << A2.getTipoAuto() << std::endl;
                std::cout << "\n";
                std::cout << N2.getInfoNeumatico() << std::endl;
                std::cout << "\n";
                std::cout << C3.getInfoCombustible() << std::endl;
                std::cout << "\n";
                std::cout << S2.getInfoSuelo() << std::endl;
                std::cout << "\n";
            }
            else if (opcion == 3) {
                std::cout << A3.getTipoAuto() << std::endl;
                std::cout << "\n";
                std::cout << N3.getInfoNeumatico() << std::endl;
                std::cout << "\n";
                std::cout << C2.getInfoCombustible() << std::endl;
                std::cout << "\n";
                std::cout << S1.getInfoSuelo() << std::endl;
                std::cout << "\n";
            }
            else if (opcion == 4) {
                std::cout << A4.getTipoAuto() << std::endl;
                std::cout << "\n";
                std::cout << N4.getInfoNeumatico() << std::endl;
                std::cout << "\n";
                std::cout << C1.getInfoCombustible() << std::endl;
                std::cout << "\n";
                std::cout << S1.getInfoSuelo() << std::endl;
                std::cout << "\n";
            }
            else if (opcion == 5) {
                std::cout << A5.getTipoAuto() << std::endl;
                std::cout << "\n";
                std::cout << N3.getInfoNeumatico() << std::endl;
                std::cout << "\n";
                std::cout << C4.getInfoCombustible() << std::endl;
                std::cout << "\n";
                std::cout << S3.getInfoSuelo() << std::endl;
                std::cout << "\n";
            }
            else if (opcion == 6) {
                std::cout << A6.getTipoAuto() << std::endl;
                std::cout << "\n";
                std::cout << N3.getInfoNeumatico() << std::endl;
                std::cout << "\n";
                std::cout << C3.getInfoCombustible() << std::endl;
                std::cout << "\n";
                std::cout << S3.getInfoSuelo() << std::endl;
                std::cout << "\n";
            }
            else {
                std::cout << "Opcion invalida, solo se aceptan numeros presentes en el menu." << std::endl;
            }
        }

        //Genero un nuevo apartado para que el usuario configure su auto, usando setters y getters, asi como variables e ifs
        //Ademas se crean objetos para crear un auto que pueda ser personalizable

        else if (opcion == 3) {
            std::cout << "\n";
            std::cout << "Menu de Seleccion" << std::endl;
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "Neumaticos: " << "Soft" << "   Medium" << "   Hard" << "   Semi-Wet" << "   Wet" << std::endl;
            std::cout << "\n";
            std::cout << "Combustible: " << "0 - 60 L" << std::endl;
            std::cout << "\n";
            std::cout << "Temperatura: 20 - 70 Grados Celcius" << std::endl;
            std::cout << "\n";
            std::cout << "Downforce: " << "1 - 3" << "   *Downforce va de menor a mayor nivel" << std::endl;
            std::cout << "\n";
            std::cout << "Disclaimer: Favor de hacer uso de los valores provistos en el menu de seleccion" << std::endl;
            std::cout << "\n";
            std::cout << "\n";


            std::cout << "Ingrese el nombre del auto: ";
            std::string nombreAuto;
            std::cin >> nombreAuto;
            std::cout << "\n";

            std::string tipoNeumatico;
            std::string status;
            std::string suelo;
            float temperaturaNeumatico;
            float cantidadCombustible;
            int downforceSuelo;

            std::cout << "Tipo de Neumatico: ";
            std::cin >> tipoNeumatico;

            std::cout << "Temperatura del Neumatico: ";
            std::cin >> temperaturaNeumatico;

            std::cout << "Cantidad de Combustible: ";
            std::cin >> cantidadCombustible;
            if (cantidadCombustible <= 60 && cantidadCombustible > 45) {
                status = "Lleno";
            }
            else if (cantidadCombustible <= 45 && cantidadCombustible > 30) {
                status = "3/4";
            }
            else if (cantidadCombustible <= 30 && cantidadCombustible > 15) {
                status = "Medio";
            }
            else if (cantidadCombustible <= 15 && cantidadCombustible > 0) {
                status = "1/4";
            }
            else if (cantidadCombustible == 0) {
                status = "Vacio";
            }
            else {
                status = "Invalido";
            }

            std::cout << "Nivel de Downforce del Suelo: ";
            std::cin >> downforceSuelo;

            if (downforceSuelo == 3) {
                suelo = "Avanzado";
            }
            else if (downforceSuelo == 2) {
                suelo = "Balanceado";
            }
            else if (downforceSuelo == 1) {
                suelo = "Basico";
            }
            else {
                std::cout << "Opcion Invalida" << std::endl;
            }
            //Instancio los objetos que usare para crear ,i auto personalizable, recibe los valores del input del usuario
            Neumatico NP1(tipoNeumatico, temperaturaNeumatico);
            Combustible CP1(cantidadCombustible, status);
            Suelo SP1(suelo, downforceSuelo);

            Auto P1("Personalizado", N1, C1, S1);
            P1.setAuto(nombreAuto, NP1, CP1, SP1);

            std::cout << "\n";
            std::cout << "\n";
            std::cout << "Cargando Configuracion..." << std::endl;
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "Nombre: " << P1.getNombreA() << std::endl;
            std::cout << "Tipo de Neumatico: " << tipoNeumatico << std::endl;
            std::cout << "Temperatura del Neumatico: " << temperaturaNeumatico << std::endl;
            std::cout << "Cantidad de Combustible: " << cantidadCombustible << std::endl;
            std::cout << "Estatus del Combustible: " << status << std::endl;
            std::cout << "Tipo de Suelo: " << suelo << std::endl;
            std::cout << "Downforce: " << downforceSuelo << std::endl;
        }
        //La opcion de salida que evalia la condicion de while a false para lograr romper el ciclo
        else if (opcion == 4) {
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "\n";
            std::cout << "Hasta luego " << U1.getUser() << ". Gracias por usar el programa!" << std::endl;
            return 0;
        }
        else {
            std::cout << "Opción no valida. Intente nuevamente.\n";
        }
    }

    return 0;

}