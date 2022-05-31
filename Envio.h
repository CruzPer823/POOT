#ifndef ENVIO_H_INCLUDED
#define ENVIO_H_INCLUDED
#include <string>

class Envio{
  protected:
    std::string nombreR;
    int codigo_postalR;
    std::string direccionR;
    std::string ciudadR;
    std::string estadoR;
    std::string nombreD;
    int codigo_postalD;
    std::string direccionD;
    std::string ciudadD;
    std::string estadoD;
    double costo;
  public:
    Envio();
    Envio(std::string nombreR, std::string direccionR, 
    std::string ciudadR, std::string estadoR, int codigo_postalR,
    std::string nombreD, std::string direccionD, std::string ciudadD, 
    std::string estadoD, int codigo_postalD,double costo);
    double calculaCosto(double);
    std::string imprimirDatos();

};
#endif