#include "bicicleta.h"
#include <iostream>

Bicicleta::Bicicleta()
{
    Kilometros = 0;
    Calorias = 0;
}

Bicicleta::Bicicleta(int km, int cal)
          :Kilometros(km), Calorias(cal)
{
}

void Bicicleta::setKm(int km){
    this ->Kilometros = km;
}

void Bicicleta::setCalorias(int cal){
    this->Calorias = cal;
}

int Bicicleta::getKm(){
    return Kilometros;
}

int Bicicleta::getCalorias(){
    return Calorias;
}

int Bicicleta::calculoHuellaCarbono(){
    return (Kilometros*Calorias);
}

string Bicicleta::ToString(){
    return "Bicicleta -> [Kilometros: "+to_string(Kilometros)+", Calorias: "+to_string(Calorias)+", Huella de Carbono: "+to_string(Kilometros*Calorias)+"]";
}
