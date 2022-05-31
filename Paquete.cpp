#include "Paquete.h"

Paquete::Paquete(std::string _nombre, std::string _direccion, 
std::string _ciudad,std::string _estado, int _codigo_postal,
double _costo,double _largo,double _ancho,double _prof,double _peso, double _costok){
nombre=_nombre;
direccion=_direccion;
ciudad=_ciudad;
estado=_estado;
codigo_postal=_codigo_postal;
costo=_costo;
largo=_largo;
ancho=_ancho;
prof=_prof;
if(_peso>0){
peso=_peso;
}
costok=_costok;
}
double Paquete::calculaCosto(double _peso){
    costo+=(_peso*costok);
}
void Paquete::set_Largo(double _largo){
    largo=_largo;
}
void Paquete::set_Ancho(double _ancho){
    ancho=_ancho;
}
void Paquete::set_Prof(double _prof){
    prof=_prof;
}
void Paquete::set_Peso(double _peso){
    peso=_peso;
}
void Paquete::set_Costok(double _costok){
    costok=_costok;
}
double Paquete::get_Largo(){
    return largo;
}
double Paquete::get_Ancho(){
    return ancho;
}
double Paquete::get_Prof(){
    return prof;
}
double Paquete::get_Peso(){
    return peso;
}
double Paquete::get_Costok(){
    return costok;
}
std::string Paquete::imprimir_datos(){
    
}