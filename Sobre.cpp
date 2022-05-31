#include "Sobre.h"
Sobre::Sobre(std::string _nombre, std::string _direccion, 
std::string _ciudad,std::string _estado, int _codigo_postal,
double _costo,double _largo,double _ancho, double _cargoa){
nombre=_nombre;
direccion=_direccion;
ciudad=_ciudad;
estado=_estado;
codigo_postal=_codigo_postal;
costo=_costo;
cargoa=_cargoa;
largo=_largo;
ancho=_ancho;
}
double Sobre::calculaCosto(double _largo, double _ancho){
   if(_largo>25 or ancho>30){
       costo
   } 
}
std::string imprimeDatos(){
    
}