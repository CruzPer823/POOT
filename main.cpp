/*Programa realizado por:
Cruz Daniel Pérez Jiménez A01736214
Rogelio Hernández Cortés  A01735819
*/
#include "Envio.cpp"
#include "Paquete.cpp"
#include "Sobre.cpp"
using namespace std;

int main(){
  Envio envio1("Rogelio Hernandez","14 sur #207",
  "Puebla","Puebla",72150,"Cruz Perez","5 Oriente #406",
  "Acatzingo de Hidalgo","Puebla",75150,400.89);
  cout<<"ENVIO 1\n"<<endl;
  envio1.imprimirDatos();
  cout<<"El costo del envio es de: "<<envio1.calculaCosto(400.89)<<" MXN"<<endl;
  cout<<"\nPAQUETE 1\n"<<endl;
  Paquete paquete1("Rogelio Hernandez","14 sur #207",
  "Puebla","Puebla",72150,"Cruz Perez","5 Oriente #406",
  "Acatzingo de Hidalgo","Puebla",75150,400.89,40,50,30,15.35,10);
  paquete1.imprimirDatos();
  cout<<"El costo del envio del paquete es de: "<<paquete1.calculaCosto(15.35)<<" MXN"<<endl; 
  cout<<"\nPAQUETE 2\n"<<endl;
  Paquete paquete2("Rogelio Hernandez","14 sur #207",
  "Puebla","Puebla",72150,"Cruz Perez","5 Oriente #406",
  "Acatzingo de Hidalgo","Puebla",75150,400.89,40,50,30,-15.35,-10);
  paquete2.imprimirDatos();
  cout<<"El costo del envio del paquete es de: "<<paquete1.calculaCosto(-15.35)<<" MXN"<<endl;
  cout<<"\nSOBRE 1\n"<<endl;
  Sobre sobre1("Felipe Hernandez","28 Poniente #517",
  "Veracruz","Veracruz",84120,"Cruz Daniel Perez","5 Oriente #406",
  "Acatzingo de Hidalgo","Puebla",75150,110.65,10,30,15);
  sobre1.imprimirDatos();
  cout<<"El costo del envio del sobre es de: "<<sobre1.calculaCosto(30,15)<<" MXN"<<endl;
  return 0;
}
