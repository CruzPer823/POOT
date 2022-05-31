#ifndef SOBRE_H_INCLUDED
#define SOBRE_H_INCLUDED
#include "Envio.h"

class Sobre: public Envio{
    protected:
        double cargoa, largo, ancho;
    public:
        Sobre();
        Sobre(std::string _nombreR, std::string _direccionR, 
        std::string _ciudadR, std::string _estadoR, int _codigo_postalR,
        std::string _nombreD, std::string _direccionD, std::string _ciudadD, 
        std::string _estadoD, int _codigo_postalD, double _costo
        ,double cargoa,double largo, double ancho);
        double calculaCosto(double, double);
        std::string imprimirDatos();
};
#endif