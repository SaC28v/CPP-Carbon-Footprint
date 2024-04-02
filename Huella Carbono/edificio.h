#ifndef EDIFICIO_H
#define EDIFICIO_H
#include "IHuellaCarbono.h"
#include <string>

using namespace std;

class Edificio: public IHuellaCarbono
{

private:
    int Energia;
    int Personal;

public:
     Edificio();
     Edificio(int e, int p);

     void setEnergia(int e);
     void setPersonal(int p);
     int getEnergia();
     int getPersonal();

    //Funciones overriding
     int calculoHuellaCarbono();
     string ToString();

};

#endif // EDIFICIO_H
