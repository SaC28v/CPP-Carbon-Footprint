#include "edificio.h"
#include <iostream>

Edificio::Edificio()
{
    Energia = 0;
    Personal = 0;
}

Edificio::Edificio(int e, int p)
        :Energia(e), Personal(p)
{
}

void Edificio::setEnergia(int e){
    this ->Energia = e;
}

void Edificio::setPersonal(int p){
    this ->Personal = p;
}


int Edificio::getEnergia(){
    return Energia;
}

int Edificio::getPersonal(){
    return Personal;
}

int Edificio::calculoHuellaCarbono(){
    return (Energia/Personal);

}

string Edificio::ToString(){
    return "Edificio ->  [Personal: "+to_string(Personal)+", Energia Consumida: "+to_string(Energia)+", Huella de Carbono: "+to_string((Energia/Personal))+"]";
}

