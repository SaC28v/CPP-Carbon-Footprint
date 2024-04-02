#ifndef VEHICULO_H
#define VEHICULO_H
#include "IHuellaCarbono.h"
#include <string>

using namespace std;

class Vehiculo: public IHuellaCarbono
{
private:
    int Kilometraje;
    int CantidadCB;

public:
    Vehiculo();
    Vehiculo(int kt, int cb);

    void setKilometraje(int kt);
    void setCantidadCB(int cb);
    int getKilometraje();
    int getCantidadCB();

    //Funciones overriding
    int calculoHuellaCarbono();
    string ToString();

};

#endif // VEHICULO_H
