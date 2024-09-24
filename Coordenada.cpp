//Edmundo Ruelas Angulo - A0174
#include "Coordenada.h"
//Metodo constructor default
Coordenada::Coordenada(){
  x=0;
  y=0;
}

Coordenada::Coordenada(int _x, int _y){
  x= _x;
  y=_y;
}

void Coordenada::setX(int _x){
  x= _x;
}

void Coordenada::setY(int _y){
  y= _y;
}

int Coordenada::getX(){
  return x;
}

int Coordenada::getY(){
  return y;
}
//Metodo para regresaar en forma de string los valores de x,y
std::string Coordenada:: str(){
  return std::to_string(x)+","+std::to_string(y);
}