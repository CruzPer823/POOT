#ifndef SOBRE_H_INCLUDED
#define SOBRE_H_INCLUDED
#include "Envio.h"

class Sobre: public Envio{
    protected:
        double cargoa, largo, ancho;
    public:
        Sobre(std::string, std::string, std::string, 
        std::string, int,double,double,double,double);
        double calculaCosto(double, double);
        std::string imprimeDatos();
};
#endif