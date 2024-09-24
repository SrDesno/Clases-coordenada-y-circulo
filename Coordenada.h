//Edmundo Ruelas Angulo - A01742824
#include <iostream>
//Se crea la clase Coordenada
class Coordenada{
  //Se crean los atributos privados
  private:
    int x;
    int y;
  //Se crean los metodos publicos
  public:
    Coordenada();
    Coordenada(int, int);
    void setX(int);
    void setY(int);
    int getX();
    int getY();
    std::string str();
};