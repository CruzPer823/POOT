#ifndef PAQUETE_H_INCLUDED
#define PAQUETE_H_INCLUDED

#include "Envio.h"

class Paquete:public Envio{
    protected:
        double largo,ancho,profun,peso,costok;
    public:
        Paquete();
        Paquete(std::string nombreR, std::string direccionR, 
    std::string ciudadR, std::string estadoR, int codigo_postalR,
    std::string nombreD, std::string direccionD, std::string ciudadD, 
    std::string estadoD, int codigo_postalD,double costo,double largo,double ancho,double profun,
    double peso,double costok);
        double calculaCosto(double);
        std::string imprimirDatos();
};

#endif