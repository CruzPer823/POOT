#include "Envio.h"
#include <string>

Envio::Envio(){

}

Envio::Envio(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int codigo_postal){
  this -> nombre = nombre;
  this -> direccion = direccion;
  this -> ciudad = ciudad;
  this -> estado = estado;
  this -> codigo_postal = codigo_postal;
  this -> costo = costo;
}

void Envio::set_Nombre(std::string nombre){
  this -> nombre = nombre;
}

std::string Envio::get_Nombre(){
  return nombre;
}

void Envio::set_Direccion(std::string direccion){
  this -> direccion = direccion;
}

std::string Envio::get_Direccion(){
  return direccion;
}

void Envio::set_Ciudad(std::string ciudad){
  this -> ciudad = ciudad;
}

std::string Envio::get_Ciudad(){
  return ciudad;
}

void Envio::set_Estado(std::string Estado){
  this -> estado = estado;
}

std::string Envio::get_Estado(){
  return estado;
}

void Envio::set_CodigoPostal(int){
  this -> codigo_postal = codigo_postal;
}

int Envio::get_CodigoPostal(){
  return codigo_postal;
}

dobule Envio::calculaCosto(dobule costo){
  return costo;
}
