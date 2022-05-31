#ifndef ENVIO_H_INCLUDED
#define ENVIO_H_INCLUDED
#include <string>

class Envio{
  protected:
    std::string nombre;
    int codigo_postal;
    std::string direccion;
    std::string ciudad;
    std::string estado;
    double costo;
  public:
    Envio();
    Envio(std::string nombre, std::string direccion, std::string ciudad, std::string estado, int codigo_postal);

    void set_Nombre(std::string);
    void set_Direccion(std::string);
    void set_Ciudad(std::string);
    void set_Estado(std::string);
    void set_CodigoPostal(int);

    std::string get_Nombre();
    std::string get_Direccion();
    std::string get_Ciudad();
    std::string get_Estado();
    int get_CodigoPostal();
    double calculaCosto(double);

};
#endif