#ifndef BICICLETA_H
#define BICICLETA_H
#include "IHuellaCarbono.h"
#include <string>

using namespace std;

class Bicicleta: public IHuellaCarbono
{
private:
    int Kilometros;
    int Calorias;

public:
     Bicicleta();
     Bicicleta (int km, int cal);

     void setKm(int km);
     void setCalorias(int cal);
     int getKm();
     int getCalorias();

     //Funciones overriding
     int calculoHuellaCarbono();
     string ToString();

};

#endif // BICICLETA_H

