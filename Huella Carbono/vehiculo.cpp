#include "vehiculo.h"

Vehiculo::Vehiculo()
{
    Kilometraje = 0;
    CantidadCB = 0;
}

Vehiculo::Vehiculo(int kt, int cb)
        :Kilometraje(kt), CantidadCB(cb)
{
}

void Vehiculo::setKilometraje(int kt){
    this ->Kilometraje = kt;
}

void Vehiculo::setCantidadCB(int cb){
    this ->CantidadCB = cb;
}

int Vehiculo::getKilometraje(){
    return Kilometraje;
}


int Vehiculo::getCantidadCB(){
    return CantidadCB;
}

int Vehiculo::calculoHuellaCarbono(){
    return (Kilometraje * CantidadCB);
}

string Vehiculo::ToString(){
    return "Vehiculo ->  [Kilometraje: "+to_string(Kilometraje)+", Cantidad de Combusitble usado: "+to_string(CantidadCB)+", Huella de Carbono: "+to_string(Kilometraje * CantidadCB)+"]";
}
