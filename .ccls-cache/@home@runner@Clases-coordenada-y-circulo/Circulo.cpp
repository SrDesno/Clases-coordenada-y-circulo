//Edmundo Ruelas Angulo - A01742824
#include "Circulo.h"
//Metodo constructor default que llama e inicializa a los metodos de la clase coordenada
Circulo::Circulo(){
  Coordenada _centro(1,1);
  centro=_centro;
  radio=1;
}

Circulo::Circulo(Coordenada _centro, int _radio){
  centro=_centro;
  radio=_radio;
}

void Circulo::setCentro(Coordenada _centro){
  centro=_centro;
}

void Circulo::setRadio(int _radio){
  radio=_radio;
}

Coordenada Circulo::getCentro(){
  return centro;
}

int Circulo::getRadio(){
  return radio;
}

std::string Circulo::str(){
  return centro.str()+" y el radio es: "+std::to_string(radio);
}