//Edmundo Ruelas Angulo - A01742824
#include "Coordenada.h"
//Se crea la clase Circulo
class Circulo {
  //Se crean los atributos privados
  private:
    Coordenada centro;
    int radio;
  //Se crean los metodos publicos
  public:
    Circulo();
    Circulo(Coordenada, int);
    void setCentro(Coordenada);
    void setRadio(int);
    Coordenada getCentro();
    int getRadio();
    std::string str();
};