#include "Paquete.h"
#include <iostream>

Paquete::Paquete():Envio(){

}
Paquete::Paquete(std::string _nombreR, std::string _direccionR, 
    std::string _ciudadR, std::string _estadoR, int _codigo_postalR,
    std::string _nombreD, std::string _direccionD, std::string _ciudadD, 
    std::string _estadoD, int _codigo_postalD,double _costo,double _largo,double _ancho,double _profun,
    double _peso,double _costok):Envio(_nombreR,_direccionR,_ciudadR,_estadoR,
     _codigo_postalR,_nombreD,_direccionD,_ciudadD, 
    _estadoD, _codigo_postalD,_costo){
       if(_peso>0){
       largo=_largo;
       ancho=_ancho;
       profun=_profun;
       peso= _peso;}
       else{
           std::cout<<"El peso no puede ser menor a cero.\n";
           largo=0;
           ancho=0;
           profun=0;
           peso=0;
           }
       if(_costok>0){
       costok=_costok;
       }else{
           std::cout<<"El costo por kilo no puede ser menor a cero.\n";
           costok=0;
            } 
        }
double Paquete::calculaCosto(double _peso){
    if(_peso>0){
       return costo+=(_peso*costok);
     }else{
           peso=0;
           }
}

std::string Paquete::imprimirDatos(){
    std::cout<<"\n***DATOS DEL ENVIO***\n\n"<<"-Remitente-\n"
  <<"Nombre: "<<nombreR<<"\n"<<"Estado: "<<estadoR<<"\n"
  <<"Ciudad: "<<ciudadR<<"\n"<<"Direccion: "<<direccionR<<"\n"
  <<"Codigo postal: "<<codigo_postalR<<"\n\n"<<"-Destinatario-\n"
  <<"Nombre: "<<nombreD<<"\n"<<"Estado: "<<estadoD<<"\n"
  <<"Ciudad: "<<ciudadD<<"\n"<<"Direccion: "<<direccionD<<"\n"
  <<"Codigo postal: "<<codigo_postalD<<"\n\n"<<"***PAQUETE***\n"
  <<"Largo: "<<largo<<" cm\n"<<"Ancho: "<<ancho<<" cm\n"
  "Profundidad: "<<profun<<" cm\n"<<"Peso del paquete: "<<peso<<" Kg\n";
}