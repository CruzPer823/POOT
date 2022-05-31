#ifndef PAQUETE_H_INCLUDED
#define PAQUETE_H_INCLUDED

#include "Envio.h"

class Paquete:public Envio{
    protected:
        double largo,ancho,prof,peso,costok;
    public:
        Paquete(std::string, std::string, std::string, 
        std::string, int,double,double,double,
        double,double,double);
        double calculaCosto(double);
        void set_Largo(double);
        void set_Ancho(double);
        void set_Prof(double);
        void set_Peso(double);
        void set_Costok(double);

        double get_Largo();
        double get_Ancho();
        double get_Prof();
        double get_Peso();
        double get_Costok();
};

#endif