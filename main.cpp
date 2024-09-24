//Edmundo Ruelas Angulo - A01742824
#include "Circulo.h"

int main() {
  //Se crean los objetos Coordenada y circulo
  Coordenada _coordenada1(2,4), _coordenada2(5,6), _coordenada3;
  Circulo _circulo1(_coordenada1, 5), _circulo2, _circulo3;

  //Se despliegan los valores de los objetos coordenada 1,2 y cirulo 1,2 utilizando el str
  std::cout<<"Los datos de la Coordenada 1 son: "<<_coordenada1.str()<<std::endl;
  std::cout<<"Los datos de la Coordenada 2 son: "<<_coordenada2.str()<<std::endl;
  std::cout<<"Los datos del Circulo 1 son: "<<_circulo1.str()<<std::endl;
  std::cout<<"Los datos del Circulo 2 son: "<<_circulo2.str()<<std::endl;

  //Se despliegan los valores del objeto coordenada 3 y circulo 3 utilizando get
  std::cout<<"Los datos de la Coordenada 3 son: "<<_circulo3.getCentro().str()<<std::endl;
  std::cout<<"Los datos del Circulo 3 son: "<<_circulo3.getCentro().str()+" y el radio es: "<<_circulo3.getRadio()<<std::endl;
}