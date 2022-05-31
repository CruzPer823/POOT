#include "Envio.h"
#include <string>
#include <iostream>

Envio::Envio(){

}

Envio::Envio(std::string _nombreR, std::string _direccionR, 
    std::string _ciudadR, std::string _estadoR, int _codigo_postalR,
    std::string _nombreD, std::string _direccionD, std::string _ciudadD, 
    std::string _estadoD, int _codigo_postalD, double _costo){
  nombreR = _nombreR;
  direccionR = _direccionR;
  ciudadR = _ciudadR;
  estadoR = _estadoR;
  codigo_postalR = _codigo_postalR;
  nombreD = _nombreD;
  direccionD = _direccionD;
  ciudadD = _ciudadD;
  estadoD = _estadoD;
  codigo_postalD = _codigo_postalD;
  costo=_costo;
}

double Envio::calculaCosto(double costo){
  costo=costo;
  return costo;
}

std::string Envio::imprimirDatos(){
  std::cout<<"\n***DATOS DEL ENVIO***\n\n"<<"-Remitente-\n"
  <<"Nombre: "<<nombreR<<"\n"<<"Estado: "<<estadoR<<"\n"
  <<"Ciudad: "<<ciudadR<<"\n"<<"Direccion: "<<direccionR<<"\n"
  <<"Codigo postal: "<<codigo_postalR<<"\n\n"<<"-Destinatario-\n"
  <<"Nombre: "<<nombreD<<"\n"<<"Estado: "<<estadoD<<"\n"
  <<"Ciudad: "<<ciudadD<<"\n"<<"Direccion: "<<direccionD<<"\n"
  <<"Codigo postal: "<<codigo_postalD<<"\n";
}