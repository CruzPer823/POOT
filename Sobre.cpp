#include "Sobre.h"
#include <iostream>
Sobre::Sobre():Envio(){

}
Sobre::Sobre(std::string _nombreR, std::string _direccionR, 
std::string _ciudadR, std::string _estadoR, int _codigo_postalR,
std::string _nombreD, std::string _direccionD, std::string _ciudadD, 
std::string _estadoD, int _codigo_postalD, double _costo, double _cargoa,
double _largo,double _ancho):Envio(_nombreR,_direccionR,_ciudadR,_estadoR,
     _codigo_postalR,_nombreD,_direccionD,_ciudadD, 
    _estadoD, _codigo_postalD,_costo){
    cargoa=_cargoa;
    largo=_largo;
    ancho=_ancho;
}
double Sobre::calculaCosto(double _largo, double _ancho){
   if(_largo>25 || ancho>30){
       return costo+=cargoa;
    }else{
        return costo;
    } 
}
std::string Sobre::imprimirDatos(){
    std::cout<<"\n***DATOS DEL ENVIO***\n\n"<<"-Remitente-\n"
  <<"Nombre: "<<nombreR<<"\n"<<"Estado: "<<estadoR<<"\n"
  <<"Ciudad: "<<ciudadR<<"\n"<<"Direccion: "<<direccionR<<"\n"
  <<"Codigo postal: "<<codigo_postalR<<"\n\n"<<"-Destinatario-\n"
  <<"Nombre: "<<nombreD<<"\n"<<"Estado: "<<estadoD<<"\n"
  <<"Ciudad: "<<ciudadD<<"\n"<<"Direccion: "<<direccionD<<"\n"
  <<"Codigo postal: "<<codigo_postalD<<"\n\n"<<"***SOBRE***\n"
  <<"Largo: "<<largo<<" cm\n"<<"Ancho: "<<ancho<<" cm\n";
}